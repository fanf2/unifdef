/*
 * Copyright (c) 1985, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Dave Yost. Support for #if and #elif was added by Tony Finch.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#include <sys/cdefs.h>

#ifndef lint
static const char copyright[] =
"@(#) Copyright (c) 1985, 1993\n\
	The Regents of the University of California.  All rights reserved.\n";

#ifdef __IDSTRING
__IDSTRING(Berkeley, "@(#)unifdef.c	8.1 (Berkeley) 6/6/93");
__IDSTRING(NetBSD, "$NetBSD: unifdef.c,v 1.8 2000/07/03 02:51:36 matt Exp $");
__IDSTRING(dotat, "$dotat: unifdef/unifdef.c,v 1.106 2002/12/12 17:41:39 fanf2 Exp $");
#endif
#ifdef __FBSDID
__FBSDID("$FreeBSD: src/usr.bin/unifdef/unifdef.c,v 1.11 2002/09/24 19:27:44 fanf Exp $");
#endif
#endif

/*
 * unifdef - remove ifdef'ed lines
 *
 *  Wishlist:
 *      provide an option which will append the name of the
 *        appropriate symbol after #else's and #endif's
 *      provide an option which will check symbols after
 *        #else's and #endif's to see that they match their
 *        corresponding #ifdef or #ifndef
 *      generate #line directives in place of deleted code
 */

#include <ctype.h>
#include <err.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* types of input lines: */
typedef enum {
	LT_PLAIN,		/* ordinary line */
	LT_TRUEI,		/* a true #if with ignore flag */
	LT_FALSEI,		/* a false #if with ignore flag */
	LT_IF,			/* an unknown #if */
	LT_TRUE,		/* a true #if */
	LT_FALSE,		/* a false #if */
	LT_ELIF,		/* an unknown #elif */
	LT_ELTRUE,		/* a true #elif */
	LT_ELFALSE,		/* a false #elif */
	LT_ELSE,		/* #else */
	LT_ENDIF,		/* #endif */
	LT_EOF,			/* end of file */
	LT_COUNT
} Linetype;

const char *linetype_name[] = {
	"PLAIN", "TRUEI", "FALSEI", "IF", "TRUE", "FALSE",
	"ELIF", "ELTRUE", "ELFALSE", "ELSE", "ENDIF", "EOF"
};

/* state of #if processing */
typedef enum {
	IS_OUTSIDE,
	IS_FALSE_PREFIX,	/* false #if followed by false #elifs */
	IS_TRUE_PREFIX,		/* first non-false #(el)if is true */
	IS_PASS_MIDDLE,		/* first non-false #(el)if is unknown */
	IS_FALSE_MIDDLE,	/* a false #elif after a pass state */
	IS_TRUE_MIDDLE,		/* a true #elif after a pass state */
	IS_PASS_ELSE,		/* an else after an unknown state */
	IS_FALSE_ELSE,		/* an else after a true state */
	IS_TRUE_ELSE,		/* an else after only false states */
	IS_FALSE_TRAILER,	/* #elifs after a true are false */
	IS_COUNT
} Ifstate;

const char *ifstate_name[] = {
	"OUTSIDE", "FALSE_PREFIX", "TRUE_PREFIX",
	"PASS_MIDDLE", "FALSE_MIDDLE", 	"TRUE_MIDDLE",
 	"PASS_ELSE", "FALSE_ELSE", "TRUE_ELSE",
	"FALSE_TRAILER"
};

typedef enum {
	NO_COMMENT = false,
	C_COMMENT,
	CXX_COMMENT,
	STARTING_COMMENT,
	FINISHING_COMMENT
} Comment_state;

const char *comment_name[] = {
	"NO", "C", "CXX", "STARTING", "FINISHING"
};

typedef enum {
	LS_START,
	LS_HASH,
	LS_DIRTY
} Line_state;

const char *linestate_name[] = {
	"START", "HASH", "DIRTY"
};

/*
 * These are the operators that are supported by the expression evaluator.
 */
static int op_lt(int a, int b) { return a < b; }
static int op_gt(int a, int b) { return a > b; }
static int op_le(int a, int b) { return a <= b; }
static int op_ge(int a, int b) { return a >= b; }
static int op_eq(int a, int b) { return a == b; }
static int op_ne(int a, int b) { return a != b; }
static int op_or(int a, int b) { return a || b; }
static int op_and(int a, int b) { return a && b; }

struct ops;

/*
 * An evaluation function takes three arguments, as follows: (1) a pointer to
 * an element of the precedence table which lists the operators at the current
 * level of precedence; (2) a pointer to an integer which will receive the
 * value of the expression; and (3) a pointer to a char* that points to the
 * expression to be evaluated and that is updated to the end of the expression
 * when evaluation is complete. The function returns LT_FALSE if the value of
 * the expression is zero, LT_TRUE if it is non-zero, or LT_IF if the
 * expression could not be evaluated.
 */
typedef Linetype eval_fn(struct ops *, int *, const char **);

eval_fn eval_table, eval_unary;

/*
 * The precedence table. Expressions involving binary operators are evaluated
 * in a table-driven way by eval_table. When it evaluates a subexpression it
 * calls the inner function with its first argument pointing to the next
 * element of the table. Innermost expressions have special non-table-driven
 * handling.
 */
struct ops {
	eval_fn *inner;
	struct op {
		const char *str;
		int (*fn)(int, int);
	} op[5];
} eval_ops[] = {
	{ eval_table, { { "||", op_or } } },
	{ eval_table, { { "&&", op_and } } },
	{ eval_table, { { "==", op_eq },
			{ "!=", op_ne } } },
	{ eval_unary, { { "<=", op_le },
			{ ">=", op_ge },
			{ "<", op_lt },
			{ ">", op_gt } } }
};

/*
 * A state transition function alters the global state in a particular
 * way. The table below is indexed by the current processing state and
 * the type of the current line. NULL entries indicate that processing
 * is complete.
 *
 * Nesting is handled by keeping a stack of states; some transition
 * functions increase or decrease the depth. They also maintin the
 * ignore state on a stack. In some complicated cases they have to
 * alter the preprocessor directive.
 *
 * When we have processed a group that starts off with a known-false
 * #if/#elif sequence (which has therefore been deleted) followed by a
 * #elif that we don't understand and therefore must keep, we turn the
 * latter into a #if to keep the nesting correct.
 *
 * When we find a true #elif in a group, the following block will
 * always be kept and the rest of the sequence after the next #elif or
 * #else will be discarded. We change the #elif to #else and the
 * followinf directive to #endif since this is equivalent.
 */
typedef void state_fn(void);

state_fn print, drop;			/* plain line handling */
state_fn Idrop, Itrue, Ifalse;		/* ignore comments in this block */
state_fn Fdrop, Fpass, Ftrue, Ffalse;	/* first line of group */
state_fn Strue, Sfalse, Selse;		/* output lacks group's start line */
state_fn Pelif, Pelse, Pendif;		/* print/pass this block */
state_fn Dfalse, Delif, Delse, Dendif;	/* discard this block */
state_fn Mpass, Mtrue, Melif, Melse;	/* modify this line as above */
state_fn Eelif, Eelse, Eendif, Eeof;	/* report an error */

state_fn *trans_table[IS_COUNT][LT_COUNT] = {
/* IS_OUTSIDE */
{print,Itrue,Ifalse,Fpass,Ftrue,Ffalse,Eelif, Eelif, Eelif, Eelse,Eendif,NULL},
/* IS_FALSE_PREFIX */
{drop, Idrop,Idrop, Fdrop,Fdrop,Fdrop, Mpass, Strue, Sfalse,Selse,Dendif,Eeof},
/* IS_TRUE_PREFIX */
{print,Itrue,Ifalse,Fpass,Ftrue,Ffalse,Dfalse,Dfalse,Dfalse,Delse,Dendif,Eeof},
/* IS_PASS_MIDDLE */
{print,Itrue,Ifalse,Fpass,Ftrue,Ffalse,Pelif, Mtrue, Delif, Pelse,Pendif,Eeof},
/* IS_FALSE_MIDDLE */
{drop, Idrop,Idrop, Fdrop,Fdrop,Fdrop, Pelif, Mtrue, Delif, Pelse,Pendif,Eeof},
/* IS_TRUE_MIDDLE */
{print,Itrue,Ifalse,Fpass,Ftrue,Ffalse,Melif, Melif, Melif, Melse,Pendif,Eeof},
/* IS_PASS_ELSE */
{print,Itrue,Ifalse,Fpass,Ftrue,Ffalse,Eelif, Eelif, Eelif, Eelse,Pendif,Eeof},
/* IS_FALSE_ELSE */
{drop, Idrop,Idrop, Fdrop,Fdrop,Fdrop, Eelif, Eelif, Eelif, Eelse,Dendif,Eeof},
/* IS_TRUE_ELSE */
{print,Itrue,Ifalse,Fpass,Ftrue,Ffalse,Eelif, Eelif, Eelif, Eelse,Dendif,Eeof},
/* IS_FALSE_TRAILER */
{drop, Idrop,Idrop, Fdrop,Fdrop,Fdrop, Dfalse,Dfalse,Dfalse,Delse,Dendif,Eeof}
/*PLAIN TRUEI FALSEI IF	  TRUE  FALSE  ELIF  ELTRUE ELFALSE ELSE  ENDIF  EOF*/
};

FILE           *input;
const char     *filename;
int             linenum;	/* current line number */
bool            keepthis;	/* ignore this #if's value 'cause it's const */
Comment_state   incomment;	/* translation phase 2/3 parser state */
Line_state      linestate;	/* preprocessor line parser state */

#define MAXDEPTH 16
int     depth;			/* current #if nesting */
Ifstate ifstate[MAXDEPTH];	/* #if processor state */
bool    ignoring[MAXDEPTH];	/* ignore comments state */
int     stifline[MAXDEPTH];	/* start of current #if */

#define MAXLINE 1024
char    tline[MAXLINE+10];	/* input buffer plus space for editing */
char   *keyword;        	/* used for editing #elif's */

bool            complement;	/* -c option in effect: do the complement */
bool            debugging;	/* -d option in effect: debugging reports */
bool            killconsts;	/* -k option in effect: eval constant #ifs */
bool            lnblank;	/* -l option in effect: blank deleted lines */
bool            symlist;	/* -s option in effect: output symbol list */
bool            text;		/* -t option in effect: this is a text file */

int             exitstat;	/* program exit status */

#define MAXSYMS 1000
const char     *symname[MAXSYMS];	/* symbol name */
const char     *value[MAXSYMS];		/* -Dsym=value */
bool            ignore[MAXSYMS];	/* -iDsym or -iUsym */
int             nsyms;

void            debug(const char *, ...);
void            addsym(bool, bool, char *);
void            error(const char *);
int             findsym(const char *);
void            flushline(bool);
Linetype        getline(void);
Linetype        ifeval(const char **);
int             main(int, char **);
void            nest(void);
void            process(void);
const char     *skipcomment(const char *);
const char     *skipsym(const char *);
void            state(Ifstate);
int             strlcmp(const char *, const char *, size_t);
void            unignore(void);
void            usage(void);

#define endsym(c) (!isalpha((unsigned char)c) && !isdigit((unsigned char)c) && c != '_')

int
main(int argc, char *argv[])
{
	int opt;

	while ((opt = getopt(argc, argv, "i:D:U:I:cdklst")) != -1)
		switch (opt) {
		case 'i': /* treat stuff controlled by these symbols as text */
			/*
			 * For strict backwards-compatibility the U or D
			 * should be immediately after the -i but it doesn't
			 * matter much if we relax that requirement.
			 */
			opt = *optarg++;
			if (opt == 'D')
				addsym(true, true, optarg);
			else if (opt == 'U')
				addsym(true, false, optarg);
			else
				usage();
			break;
		case 'D': /* define a symbol */
			addsym(false, true, optarg);
			break;
		case 'U': /* undef a symbol */
			addsym(false, false, optarg);
			break;
		case 'I':
			/* no-op for compatibility with cpp */
			break;
		case 'c': /* treat -D as -U and vice versa */
			complement = true;
			break;
		case 'k': /* process constant #ifs */
			killconsts = true;
			break;
		case 'd':
			debugging = true;
			break;
		case 'l': /* blank deleted lines instead of omitting them */
			lnblank = true;
			break;
		case 's': /* only output list of symbols that control #ifs */
			symlist = true;
			break;
		case 't': /* don't parse C comments */
			text = true;
			break;
		default:
			usage();
		}
	argc -= optind;
	argv += optind;
	if (nsyms == 0 && !symlist) {
		warnx("must -D or -U at least one symbol");
		usage();
	}
	if (argc > 1) {
		errx(2, "can only do one file");
	} else if (argc == 1 && strcmp(*argv, "-") != 0) {
		filename = *argv;
		if ((input = fopen(filename, "r")) != NULL) {
			process();
			(void) fclose(input);
		} else
			err(2, "can't open %s", *argv);
	} else {
		filename = "[stdin]";
		input = stdin;
		process();
	}

	exit(exitstat);
}

void
usage(void)
{
	fprintf (stderr, "usage: %s",
"unifdef [-cdklst] [[-Dsym[=val]] [-Usym] [-iDsym[=val]] [-iUsym]] ... [file]\n");
	exit (2);
}

/*
 * The driver for the state machine.
 */
void
process(void)
{
	Linetype linetype;
	state_fn *trans;

	for (;;) {
		linenum++;
		linetype = getline();
		trans = trans_table[ifstate[depth]][linetype];
		if (trans == NULL)
			break;
		trans();
		debug("process %s -> %s depth %d",
		    linetype_name[linetype],
		    ifstate_name[ifstate[depth]], depth);
	}
	if (incomment)
		error("EOF in comment");
}

/*
 * State transition functions.
 */

/* utilities */
void nest(void) {
	depth += 1;
	if (depth >= MAXDEPTH)
		error("Too many levels of nesting");
	stifline[depth] = linenum;
}
void unignore(void) {
	ignore[depth] = ignore[depth-1];
}
void state(Ifstate is) {
	ifstate[depth] = is;
}
/* report an error */
void Eelif (void) { error("Inappropriate #elif"); }
void Eelse (void) { error("Inappropriate #else"); }
void Eendif(void) { error("Inappropriate #endif"); }
void Eeof  (void) { error("Premature EOF"); }
/* plain line handling */
void print (void) { flushline(true); }
void drop  (void) { flushline(false); }
/* ignore comments in this block */
void Idrop (void) {         Fdrop();  ignore[depth] = true; }
void Itrue (void) {         Ftrue();  ignore[depth] = true; }
void Ifalse(void) {         Ffalse(); ignore[depth] = true; }
/* first line of group */
void Fdrop (void) {                   nest();     Dfalse(); }
void Fpass (void) {                   nest();     Pelif(); }
void Ftrue (void) {                   nest();     Strue(); }
void Ffalse(void) {                   nest();     Sfalse(); }
/* output lacks group's start line */
void Strue (void) { flushline(false); unignore(); state(IS_TRUE_PREFIX); }
void Sfalse(void) { flushline(false); unignore(); state(IS_FALSE_PREFIX); }
void Selse (void) { flushline(false);             state(IS_TRUE_ELSE); }
/* print/pass this block */
void Pelif (void) { flushline(true);  unignore(); state(IS_PASS_MIDDLE); }
void Pelse (void) { flushline(true);              state(IS_PASS_ELSE); }
void Pendif(void) { flushline(true);  --depth; }
/* discard this block */
void Dfalse(void) { flushline(false); unignore(); state(IS_FALSE_TRAILER); }
void Delif (void) { flushline(false); unignore(); state(IS_FALSE_MIDDLE); }
void Delse (void) { flushline(false);             state(IS_FALSE_ELSE); }
void Dendif(void) { flushline(false); --depth; }
/* modify this line */
void Mpass(void) {
	strncpy(keyword, "if  ", 4);
	Pelif();
}
void Mtrue(void) {
	strcpy(keyword, "else\n");
	flushline(true);
	state(IS_TRUE_MIDDLE);
}
void Melif(void) {
	strcpy(keyword, "endif\n");
	flushline(true);
	state(IS_FALSE_TRAILER);
}
void Melse(void) {
	strcpy(keyword, "endif\n");
	flushline(true);
	state(IS_FALSE_ELSE);
}

/*
 * Parse a line and determine its type. We keep the preprocessor line
 * parser state between calls in a global variable.
 * XXX: Preprocessor keywords that contain a backslash-newline are not
 * handled correctly.
 */
Linetype
getline(void)
{
	const char *cp;
	int cursym;
	int kwlen;
	Linetype retval;
	Comment_state wascomment;

	if (fgets(tline, MAXLINE, input) == NULL)
		return LT_EOF;
	retval = LT_PLAIN;
	wascomment = incomment;
	cp = skipcomment(tline);
	if (linestate == LS_START) {
		if (*cp == '#') {
			linestate = LS_HASH;
			cp = skipcomment(cp + 1);
		} else if (*cp != '\0')
			linestate = LS_DIRTY;
	}
	if (!incomment && linestate == LS_HASH) {
		keyword = (char *)cp;
		cp = skipsym(cp);
		kwlen = cp - keyword;
		if ((retval = LT_TRUE,
		     strlcmp("ifdef", keyword, kwlen) == 0) ||
		    (retval = LT_FALSE,
		     strlcmp("ifndef", keyword, kwlen) == 0)) {
			cp = skipcomment(cp);
			if ((cursym = findsym(cp)) < 0)
				retval = LT_IF;
			else {
				if (value[cursym] == NULL)
					retval = (retval == LT_TRUE)
					    ? LT_FALSE : LT_TRUE;
				if (ignore[cursym])
					retval = (retval == LT_TRUE)
					    ? LT_TRUEI : LT_FALSEI;
			}
			cp = skipsym(cp);
		} else if (strlcmp("if", keyword, kwlen) == 0)
			retval = ifeval(&cp);
		else if (strlcmp("elif", keyword, kwlen) == 0)
			retval = ifeval(&cp) - LT_IF + LT_ELIF;
		else if (strlcmp("else", keyword, kwlen) == 0)
			retval = LT_ELSE;
		else if (strlcmp("endif", keyword, kwlen) == 0)
			retval = LT_ENDIF;
		else {
			linestate = LS_DIRTY;
			retval = LT_PLAIN;
		}
		cp = skipcomment(cp);
		if (*cp != '\0') {
			linestate = LS_DIRTY;
			if (retval == LT_TRUE || retval == LT_FALSE ||
			    retval == LT_TRUEI || retval == LT_FALSEI)
				retval = LT_IF;
			if (retval == LT_ELTRUE || retval == LT_ELFALSE)
				retval = LT_ELIF;
		}
		if (retval != LT_PLAIN && (wascomment || incomment))
			error("Obfuscated processor control line");
		if (linestate == LS_HASH)
			abort(); /* bug */
	}
	if (linestate == LS_DIRTY) {
		while (*cp != '\0')
			cp = skipcomment(cp + 1);
	}
	debug("parser %s comment %s line",
	    comment_name[incomment], linestate_name[linestate]);
	return retval;
}

/*
 * Function for evaluating the innermost parts of expressions,
 * viz. !expr (expr) defined(symbol) symbol number
 * We reset the keepthis flag when we find a non-constant subexpression.
 */
Linetype
eval_unary(struct ops *ops, int *valp, const char **cpp)
{
	const char *cp;
	char *ep;
	int sym;

	cp = skipcomment(*cpp);
	if(*cp == '!') {
		debug("eval%d !", ops - eval_ops);
		cp++;
		if (eval_unary(ops, valp, &cp) == LT_IF)
			return LT_IF;
		*valp = !*valp;
	} else if (*cp == '(') {
		cp++;
		debug("eval%d (", ops - eval_ops);
		if (eval_table(eval_ops, valp, &cp) == LT_IF)
			return LT_IF;
		cp = skipcomment(cp);
		if (*cp++ != ')')
			return LT_IF;
	} else if (isdigit((unsigned char)*cp)) {
		debug("eval%d number", ops - eval_ops);
		*valp = strtol(cp, &ep, 0);
		cp = skipsym(cp);
	} else if (strncmp(cp, "defined", 7) == 0 && endsym(cp[7])) {
		cp = skipcomment(cp+7);
		debug("eval%d defined", ops - eval_ops);
		if (*cp++ != '(')
			return LT_IF;
		cp = skipcomment(cp);
		sym = findsym(cp);
		if (sym < 0 && !symlist)
			return LT_IF;
		*valp = (value[sym] != NULL);
		cp = skipsym(cp);
		cp = skipcomment(cp);
		if (*cp++ != ')')
			return LT_IF;
		keepthis = false;
	} else if (!endsym(*cp)) {
		debug("eval%d symbol", ops - eval_ops);
		sym = findsym(cp);
		if (sym < 0 && !symlist)
			return LT_IF;
		if (value[sym] == NULL)
			*valp = 0;
		else {
			*valp = strtol(value[sym], &ep, 0);
			if (*ep != '\0' || ep == value[sym])
				return LT_IF;
		}
		cp = skipsym(cp);
		keepthis = false;
	} else
		return LT_IF;

	*cpp = cp;
	debug("eval%d = %d", ops - eval_ops, *valp);
	return *valp ? LT_TRUE : LT_FALSE;
}

/*
 * Table-driven evaluation of binary operators.
 */
Linetype
eval_table(struct ops *ops, int *valp, const char **cpp)
{
	const char *cp;
	struct op *op;
	int val;

	debug("eval%d", ops - eval_ops);
	cp = *cpp;
	if (ops->inner(ops+1, valp, &cp) == LT_IF)
		return LT_IF;
	for (;;) {
		cp = skipcomment(cp);
		for (op = ops->op; op->str != NULL; op++)
			if (strncmp(cp, op->str, strlen(op->str)) == 0)
				break;
		if (op->str == NULL)
			break;
		cp += strlen(op->str);
		debug("eval%d %s", ops - eval_ops, op->str);
		if (ops->inner(ops+1, &val, &cp) == LT_IF)
			return LT_IF;
		*valp = op->fn(*valp, val);
	}

	*cpp = cp;
	debug("eval%d = %d", ops - eval_ops, *valp);
	return *valp ? LT_TRUE : LT_FALSE;
}

/*
 * Evaluate the expression on a #if or #elif line. If we can work out
 * the result we return LT_TRUE or LT_FALSE accordingly, otherwise we
 * return just a generic LT_IF.
 */
Linetype
ifeval(const char **cpp)
{
	int ret;
	int val;

	debug("eval %s", *cpp);
	keepthis = killconsts ? false : true;
	ret = eval_table(eval_ops, &val, cpp);
	return keepthis ? LT_IF : ret;
}

/*
 * Skip over comments and stop at the next character position that is
 * not whitespace. Between calls we keep the comment state in a global
 * variable, and we also make a note when we get a proper end-of-line.
 * XXX: doesn't cope with the buffer splitting inside a state transition.
 */
const char *
skipcomment(const char *cp)
{
	if (text || ignoring[depth]) {
		while (isspace((unsigned char)*cp))
			cp += 1;
		return cp;
	}
	while (*cp != '\0')
		if (strncmp(cp, "\\\n", 2) == 0)
			cp += 2;
		else switch (incomment) {
		case NO_COMMENT:
			if (strncmp(cp, "/\\\n", 3) == 0) {
				incomment = STARTING_COMMENT;
				cp += 3;
			} else if (strncmp(cp, "/*", 2) == 0) {
				incomment = C_COMMENT;
				cp += 2;
			} else if (strncmp(cp, "//", 2) == 0) {
				incomment = CXX_COMMENT;
				cp += 2;
			} else if (strncmp(cp, "\n", 1) == 0) {
				linestate = LS_START;
				cp += 1;
			} else if (strchr(" \t", *cp) != NULL) {
				cp += 1;
			} else
				return cp;
			continue;
		case CXX_COMMENT:
			if (strncmp(cp, "\n", 1) == 0) {
				incomment = NO_COMMENT;
				linestate = LS_START;
			}
			cp += 1;
			continue;
		case C_COMMENT:
			if (strncmp(cp, "*\\\n", 3) == 0) {
				incomment = FINISHING_COMMENT;
				cp += 3;
			} else if (strncmp(cp, "*/", 2) == 0) {
				incomment = NO_COMMENT;
				cp += 2;
			} else
				cp += 1;
			continue;
		case STARTING_COMMENT:
			if (*cp == '*') {
				incomment = C_COMMENT;
				cp += 1;
			} else if (*cp == '/') {
				incomment = CXX_COMMENT;
				cp += 1;
			} else {
				incomment = NO_COMMENT;
				linestate = LS_DIRTY;
			}
			continue;
		case FINISHING_COMMENT:
			if (*cp == '/') {
				incomment = NO_COMMENT;
				cp += 1;
			} else
				incomment = C_COMMENT;
			continue;
		default:
			/* bug */
			abort();
		}
	return cp;
}

/*
 * Skip over an identifier.
 */
const char *
skipsym(const char *cp)
{
	while (!endsym(*cp))
		++cp;
	return cp;
}

/*
 * Look for the symbol in the symbol table. If is is found, we return
 * the symbol table index, else we return -1.
 */
int
findsym(const char *str)
{
	const char *cp;
	int symind;

	cp = skipsym(str);
	if (cp == str)
		return -1;
	if (symlist)
		printf("%.*s\n", cp-str, str);
	for (symind = 0; symind < nsyms; ++symind) {
		if (strlcmp(symname[symind], str, cp-str) == 0) {
			debug("findsym %s %s", symname[symind],
			    value[symind] ? value[symind] : "");
			return symind;
		}
	}
	return -1;
}

/*
 * Add a symbol to the symbol table.
 */
void
addsym(bool ignorethis, bool definethis, char *sym)
{
	int symind;
	char *val;

	symind = findsym(sym);
	if (symind < 0) {
		if (nsyms >= MAXSYMS)
			errx(2, "too many symbols");
		symind = nsyms++;
	}
	symname[symind] = sym;
	ignore[symind] = ignorethis;
	val = (char *)skipsym(sym);
	if (definethis) {
		if (*val == '=') {
			value[symind] = val+1;
			*val = '\0';
		} else if (*val == '\0')
			value[symind] = "";
		else
			usage();
	} else {
		if (*val != '\0')
			usage();
		value[symind] = NULL;
	}
}

/*
 * Compare s with n characters of t.
 */
int
strlcmp(const char *s, const char *t, size_t n)
{
	while (n-- && *t != '\0')
		if (*s != *t)
			return (unsigned char)*s - (unsigned char)*t;
		else
			++s, ++t;
	return (unsigned char)*s;
}

/*
 * Write a line to the output or not, according to command line options.
 */
void
flushline(bool keep)
{
	if (symlist)
		return;
	if (keep ^ complement)
		fputs(tline, stdout);
	else {
		if (lnblank)
			putc('\n', stdout);
		exitstat = 1;
	}
	return;
}

void
debug(const char *msg, ...)
{
	va_list ap;

	if (debugging) {
		va_start(ap, msg);
		vwarnx(msg, ap);
		va_end(ap);
	}
}

void
error(const char *msg)
{
	if (depth == 0)
		errx(2, "%s: %d: %s", filename, linenum, msg);
	else
		errx(2, "%s: %d: %s (#if line %d depth %d)",
		    filename, linenum, msg, stifline[depth], depth);
}
