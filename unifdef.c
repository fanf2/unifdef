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
__IDSTRING(dotat, "$dotat: unifdef/unifdef.c,v 1.53 2002/04/26 20:32:23 fanf Exp $");
#endif
#ifdef __FBSDID
__FBSDID("$FreeBSD$");
#endif
#endif

/*
 * unifdef - remove ifdef'ed lines
 *
 *  Warning: will not work correctly if input contains null characters.
 *
 *  Wishlist:
 *      provide an option which will append the name of the
 *        appropriate symbol after #else's and #endif's
 *      provide an option which will check symbols after
 *        #else's and #endif's to see that they match their
 *        corresponding #ifdef or #ifndef
 */

#include <ctype.h>
#include <err.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* types of input lines: */
typedef enum {
	LT_PLAIN,		/* ordinary line */
	LT_TRUE,		/* a true #if */
	LT_FALSE,		/* a false #if */
	LT_ELTRUE,		/* a true #elif */
	LT_ELFALSE,		/* a false #elif */
	LT_IF,			/* an unknown #if */
	LT_ELIF,		/* an unknown #elif */
	LT_ELSE,		/* #else */
	LT_ENDIF,		/* #endif */
	LT_EOF			/* end of file */
} Linetype;

typedef enum {		/* 0 or 1: pass thru; 1 or 2: ignore comments */
	REJ_NO,
	REJ_IGNORE,
	REJ_YES
} Reject_level;

typedef enum {
	NO_COMMENT = false,
	C_COMMENT,
	CXX_COMMENT
} Comment_state;

typedef enum {
	QUOTE_NONE = false,
	QUOTE_SINGLE,
	QUOTE_DOUBLE
} Quote_state;

const char *const errs[] = {
#define NO_ERR      0
	"",
#define END_ERR     1
	"",
#define ELIF_ERR    2
	"Inappropriate elif",
#define ELSE_ERR    3
	"Inappropriate else",
#define ENDIF_ERR   4
	"Inappropriate endif",
#define IEOF_ERR    5
	"Premature EOF in ifdef",
#define CEOF_ERR    6
	"Premature EOF in comment",
#define Q1EOF_ERR   7
	"Premature EOF in quoted character",
#define Q2EOF_ERR   8
	"Premature EOF in quoted string"
};

FILE           *input;
const char     *filename;
int             linenum;	/* current line number */
int             stifline;	/* start of current #if */
int             stqcline;	/* start of current coment or quote */

#define MAXLINE 256
#define KWSIZE 8
char            tline[MAXLINE];	/* input buffer */
char           *keyword;	/* used for editing #elif's */

bool            complement;	/* -c option in effect: do the complement */
bool            debugging;	/* -d option in effect: debugging reports */
bool            lnblank;	/* -l option in effect: blank deleted lines */
bool            symlist;	/* -s option in effect: output symbol list */
bool            text;		/* -t option in effect: this is a text file */

int             exitstat;	/* program exit status */

#define MAXSYMS 1000
const char     *symname[MAXSYMS];	/* symbol name */
const char     *value[MAXSYMS];		/* -Dsym=value */
bool            ignore[MAXSYMS];	/* -iDsym or -iUsym */

int             nsyms = 1;	/* symbol 0 is used for tracking #ifs */

Reject_level    reject;		/* what kind of filtering we are doing */
Comment_state   incomment;	/* inside C comment */
Quote_state     inquote;	/* inside single or double quotes */

Linetype        checkline(int *);
void	        debug(const char *, ...);
Linetype        doif(int);
void            doif_1(int, Linetype, bool);
void            elif2if(void);
void            elif2endif(void);
void	        error(int, int);
int	        findsym(const char *);
void	        flushline(bool);
int	        getlin(char *, int, FILE *, bool);
Linetype        ifeval(const char **);
Linetype        ifeval_1(const char **);
Linetype        ifeval_2(const char **);
int	        main(int, char **);
void        	pfile(void);
const char     *skipcomment(const char *);
const char     *skipquote(const char *, Quote_state);
const char     *skipsym(const char *);
void	        usage(void);

#define endsym(c) (!isalpha((unsigned char)c) && !isdigit((unsigned char)c) && c != '_')

int
main(int argc, char *argv[])
{
	char  **curarg;
	char   *cp;
	char   *cp1;
	bool    ignorethis;

	for (curarg = &argv[1]; --argc > 0; curarg++) {
		if (*(cp1 = cp = *curarg) != '-')
			break;
		if (*++cp1 == 'i') {
			ignorethis = true;
			cp1++;
		} else
			ignorethis = false;
		if ((*cp1 == 'D' || *cp1 == 'U') && cp1[1] != '\0') {
			int     symind;

			if ((symind = findsym(&cp1[1])) == 0) {
				if (nsyms >= MAXSYMS)
					errx(2, "too many symbols");
				symind = nsyms++;
				symname[symind] = &cp1[1];
			}
			ignore[symind] = ignorethis;
			if (*cp1 == 'D') {
				char   *val;

				val = strchr(cp1, '=');
				if (val == NULL)
					value[symind] = "";
				else {
					value[symind] = val+1;
					*val = '\0';
				}
			} else
				value[symind] = NULL;
		} else if (ignorethis)
			goto unrec;
		else if (strcmp(&cp[1], "c") == 0)
			complement = true;
		else if (strcmp(&cp[1], "l") == 0)
			lnblank = true;
		else if (strcmp(&cp[1], "d") == 0)
			debugging = true;
		else if (strcmp(&cp[1], "s") == 0)
			symlist = true;
		else if (strcmp(&cp[1], "t") == 0)
			text = true;
		else {
		unrec:
			warnx("unrecognized option: %s", cp);
			usage();
		}
	}
	if (nsyms == 1 && !symlist)
		usage();
	if (argc > 1) {
		errx(2, "can only do one file");
	} else if (argc == 1) {
		filename = *curarg;
		if ((input = fopen(filename, "r")) != NULL) {
			pfile();
			(void) fclose(input);
		} else
			err(2, "can't open %s", *curarg);
	} else {
		filename = "[stdin]";
		input = stdin;
		pfile();
	}

	exit(exitstat);
}

void
usage(void)
{
	fprintf (stderr, "usage: %s",
"unifdef [-cdlst] [[-Dsym[=val]] [-Usym] [-iDsym[=val]] [-iUsym]] ... [file]\n");
	exit (2);
}

void
pfile(void)
{
	reject = REJ_NO;
	(void) doif(0);
	return;
}

void
doif_1(int depth, Linetype lineval, bool ignoring)
{
	Reject_level savereject;
	bool    active;
	bool    donetrue;
	bool    inelse;
	int     saveline;

	debug("#if line %d code %d depth %d",
	    linenum, lineval, depth);
	saveline = stifline;
	stifline = linenum;
	savereject = reject;
	inelse = false;
	donetrue = false;
	if (lineval == LT_IF || reject != REJ_NO) {
		active = false;
		ignoring = false;
		flushline(true);
	} else if (ignoring) {
		active = false;
		flushline(true);
		if (lineval == LT_FALSE)
			reject = REJ_IGNORE;
		else
			donetrue = true;
	} else {
		active = true;
		flushline(false);
		if (lineval == LT_FALSE)
			reject = REJ_YES;
		else
			donetrue = true;
	}
	debug("active %d ignore %d", active, ignoring);
	for (;;) {
		switch (lineval = doif(depth)) {
		case LT_ELIF:
			debug("#elif start %d line %d code %d depth %d",
			    stifline, linenum, lineval, depth);
			if (inelse)
				error(ELIF_ERR, depth);
			donetrue = false;
			reject = savereject;
			if (active) {
				active = false;
				elif2if();
				flushline(true);
			} else {
				ignoring = false;
				flushline(true);
			}
			debug("active %d ignore %d", active, ignoring);
			break;
		case LT_ELTRUE:
		case LT_ELFALSE:
			debug("#elif start %d line %d code %d depth %d",
			    stifline, linenum, lineval, depth);
			if (inelse)
				error(ELIF_ERR, depth);
			if (active) {
				flushline(false);
			} else {
				ignoring = false;
				active = true;
				elif2endif();
				flushline(true);
			}
			if (lineval == LT_ELFALSE)
				reject = REJ_YES;
			else {
				reject = REJ_NO;
				donetrue = true;
			}
			debug("active %d ignore %d", active, ignoring);
			break;
		case LT_ELSE:
			debug("#else start %d line %d code %d depth %d",
			    stifline, linenum, lineval, depth);
			if (inelse)
				error(ELSE_ERR, depth);
			if (active) {
				flushline(false);
				if (reject == REJ_YES && !donetrue)
					reject = REJ_NO;
				else
					reject = REJ_YES;
			} else {
				flushline(true);
				if (ignoring) {
					if (reject == REJ_IGNORE)
						reject = REJ_NO;
					else
						reject = REJ_IGNORE;
				}
			}
			inelse = true;
			debug("active %d ignore %d", active, ignoring);
			break;
		case LT_ENDIF:
			debug("#endif start %d line %d code %d depth %d",
			    stifline, linenum, lineval, depth);
			if (active)
				flushline(false);
			else
				flushline(true);
			reject = savereject;
			stifline = saveline;
			return;
		default:
			/* bug */
			abort();
		}
	}
}

Linetype
doif(int depth)
{
	Linetype lineval;
	int     cursym;		/* index of the symbol returned by checkline */

	for (;;) {
		linenum++;
		if (getlin(tline, sizeof tline, input, false) == EOF) {
			if (incomment)
				error(CEOF_ERR, depth);
			if (inquote == QUOTE_SINGLE)
				error(Q1EOF_ERR, depth);
			if (inquote == QUOTE_DOUBLE)
				error(Q2EOF_ERR, depth);
			if (depth != 0)
				error(IEOF_ERR, depth);
			return LT_EOF;
		}
		switch (lineval = checkline(&cursym)) {
		case LT_PLAIN:
			flushline(true);
			break;
		case LT_IF:
		case LT_TRUE:
		case LT_FALSE:
			doif_1(depth + 1, lineval, ignore[cursym]);
			break;
		case LT_ELIF:
		case LT_ELTRUE:
		case LT_ELFALSE:
		case LT_ELSE:
		case LT_ENDIF:
			if (depth != 0)
				return lineval;
			if (lineval == LT_ENDIF)
				error(ENDIF_ERR, depth);
			if (lineval == LT_ELSE)
				error(ELSE_ERR, depth);
			error(ELIF_ERR, depth);
		default:
			/* bug */
			abort();
		}
	}
}

Linetype
checkline(int *cursym)
{
	const char *cp;
	char *symp;
	Linetype retval;
	char kw[KWSIZE];

	retval = LT_PLAIN;
	cp = skipcomment(tline);
	if (*cp != '#'
	    || incomment
	    || inquote == QUOTE_SINGLE
	    || inquote == QUOTE_DOUBLE
	    )
		goto eol;

	cp = skipcomment(++cp);
	keyword = tline + (cp - tline);
	symp = kw;
	while (!endsym(*cp)) {
		*symp = *cp++;
		if (++symp >= &kw[KWSIZE])
			goto eol;
	}
	*symp = '\0';

	if (strcmp(kw, "ifdef") == 0) {
		retval = LT_TRUE;
		goto ifdef;
	} else if (strcmp(kw, "ifndef") == 0) {
		retval = LT_FALSE;
	ifdef:
		cp = skipcomment(++cp);
		if (incomment) {
			retval = LT_PLAIN;
			goto eol;
		}
		if ((*cursym = findsym(cp)) == 0)
			retval = LT_IF;
		else if (value[*cursym] == NULL)
			retval = (retval == LT_TRUE)
			    ? LT_FALSE : LT_TRUE;
	} else if (strcmp(kw, "if") == 0) {
		retval = ifeval(&cp);
		cp = skipcomment(cp);
		if (*cp != '\n')
			retval = LT_IF;
		*cursym = 0;
	} else if (strcmp(kw, "elif") == 0) {
		retval = ifeval(&cp);
		cp = skipcomment(cp);
		if (retval == LT_IF)
			retval = LT_ELIF;
		if (retval == LT_TRUE)
			retval = LT_ELTRUE;
		if (retval == LT_FALSE)
			retval = LT_ELFALSE;
		if (*cp != '\n')
			retval = LT_ELIF;
		*cursym = 0;
	} else if (strcmp(kw, "else") == 0)
		retval = LT_ELSE;
	else if (strcmp(kw, "endif") == 0)
		retval = LT_ENDIF;

eol:
	if (!text && reject != REJ_IGNORE)
		for (; *cp;) {
			if (incomment)
				cp = skipcomment(cp);
			else if (inquote == QUOTE_SINGLE)
				cp = skipquote(cp, QUOTE_SINGLE);
			else if (inquote == QUOTE_DOUBLE)
				cp = skipquote(cp, QUOTE_DOUBLE);
			else if (*cp == '/' && (cp[1] == '*' || cp[1] == '/'))
				cp = skipcomment(cp);
			else if (*cp == '\'')
				cp = skipquote(cp, QUOTE_SINGLE);
			else if (*cp == '"')
				cp = skipquote(cp, QUOTE_DOUBLE);
			else
				cp++;
		}
	return retval;
}

/*
 *  Turn a #elif line into a #if. This function is used when we are
 *  processing a #if/#elif/#else/#endif sequence that starts off with
 *  a #if that we understand (and therefore it has been deleted) which
 *  is followed by a #elif that we don't understand and therefore must
 *  be kept. We turn it into a #if to keep the nesting correct.
 */
void
elif2if(void)
{
	strncpy(keyword, "if  ", 4);
}

/*
 *  Turn a #elif line into a #endif. This is used in the opposite
 *  situation to elif2if, i.e. a #if that we don't understand is
 *  followed by a #elif that we do; rather than deleting the #elif (as
 *  we would for a #if) we turn it into a #endif to keep the nesting
 *  correct.
 */
void
elif2endif(void)
{
	strcpy(keyword, "endif\n");
}

/*
 *  Evaluate the expression on a #if line. If we can't work out the
 *  value then LT_IF is returned (so the #if block is passed through)
 *  otherwise we return LT_TRUE or LT_FALSE accordingly.
 *
 *  We only deal with a limited set of operators, as follows:
 *	defined() && || ! ( )
 */
Linetype
ifeval_2(const char **cpp)
{
	const char *cp;
	Linetype val;
	int sym;

	cp = *cpp;
	cp = skipcomment(cp);

	switch (*cp) {

	case '!':
		cp++;
		val = ifeval_2(&cp);
		if (val == LT_TRUE)
			val = LT_FALSE;
		else if (val == LT_FALSE)
			val = LT_TRUE;
		else
			return LT_IF;
		break;

	case '(':
		cp++;
		val = ifeval(&cp);
		cp = skipcomment(cp);
		if (*cp != ')')
			return LT_IF;
		break;

	default:
		if (endsym(*cp))
			return LT_IF;
		if (strncmp(cp, "defined", 7) == 0 && endsym(cp[7])) {
			cp = skipcomment(cp+7);
			if (*cp++ != '(')
				return LT_IF;
			cp = skipcomment(cp);
			if ((sym = findsym(cp)) == 0)
				return LT_IF;
			if (value[sym] != NULL)
				val = LT_TRUE;
			else
				val = LT_FALSE;
			cp = skipsym(cp);
			cp = skipcomment(cp);
			if (*cp++ != ')')
				return LT_IF;
		} else {
			if ((sym = findsym(cp)) == 0)
				return LT_IF;
			val = LT_FALSE;
			if (value[sym] != NULL) {
				char *ep;
				if (strtol(value[sym], &ep, 0))
					val = LT_TRUE;
				if (*ep != '\0' || ep == value[sym])
					return LT_IF;
			}
			cp = skipsym(cp);
		}
		break;
	}

	*cpp = cp;
	return val;
}

Linetype
ifeval_1(const char **cpp)
{
	const char *cp;
	Linetype val;
	Linetype v;

	cp = *cpp;
	val = LT_TRUE;
	for (;;) {
		v = ifeval_2(&cp);
		if (v == LT_FALSE)
			val = LT_FALSE;
		else if (v != LT_TRUE)
			return LT_IF;
		cp = skipcomment(cp);
		if (strncmp(cp, "&&", 2) != 0)
			break;
		cp += 2;
	}
	*cpp = cp;
	return val;
}

Linetype
ifeval(const char **cpp)
{
	const char *cp;
	Linetype val;
	Linetype v;

	cp = *cpp;
	val = LT_FALSE;
	for (;;) {
		v = ifeval_1(&cp);
		if (v == LT_TRUE)
			val = LT_TRUE;
		else if (v != LT_FALSE)
			return LT_IF;
		cp = skipcomment(cp);
		if (strncmp(cp, "||", 2) != 0)
			break;
		cp += 2;
	}
	*cpp = cp;
	return val;
}

/*
 *  Skip over comments and stop at the next charaacter
 *  position that is not whitespace.
 */
const char *
skipcomment(const char *cp)
{
	if (incomment)
		goto inside;
	for (;; cp++) {
		while (*cp == ' ' || *cp == '\t')
			cp++;
		if (text)
			return cp;
		if (cp[0] != '/')
			return cp;

		if (cp[1] == '*') {
			if (!incomment) {
				incomment = C_COMMENT;
				stqcline = linenum;
			}
		} else if (cp[1] == '/') {
			if (!incomment) {
				incomment = CXX_COMMENT;
				stqcline = linenum;
			}
		} else
			return cp;

		cp += 2;
inside:
		if (incomment == C_COMMENT) {
			for (;;) {
				for (; *cp != '*'; cp++)
					if (*cp == '\0')
						return cp;
				if (*++cp == '/') {
					incomment = NO_COMMENT;
					break;
				}
			}
		}
		else if (incomment == CXX_COMMENT) {
			for (; *cp != '\n'; cp++)
				if (*cp == '\0')
					return cp;
			incomment = NO_COMMENT;
		}
	}
}

/*
 *  Skip over a quoted string or character and stop at the next charaacter
 *  position that is not whitespace.
 */
const char *
skipquote(const char *cp, Quote_state type)
{
	char    qchar;

	qchar = type == QUOTE_SINGLE ? '\'' : '"';

	if (inquote == type)
		goto inside;
	for (;; cp++) {
		if (*cp != qchar)
			return cp;
		cp++;
		inquote = type;
		stqcline = linenum;
inside:
		for (;; cp++) {
			if (*cp == qchar)
				break;
			if (*cp == '\0' || (*cp == '\\' && *++cp == '\0'))
				return cp;
		}
		inquote = QUOTE_NONE;
	}
}

/*
 *  Skip over an identifier.
 */
const char *
skipsym(const char *cp)
{
	while (!endsym(*cp))
		++cp;
	return cp;
}

/*
 *  findsym - look for the symbol in the symbol table.
 *            if found, return symbol table index,
 *            else return 0.
 */
int
findsym(const char *str)
{
	const char *cp;
	const char *symp;
	int         symind;

	if (symlist) {
		for (cp = str; !endsym(*cp); cp++)
			continue;
		printf("%.*s\n", cp-str, str);
	}
	for (symind = 1; symind < nsyms; ++symind) {
		for (symp = symname[symind], cp = str
		    ; *symp && *cp == *symp
		    ; cp++, symp++
		    )
			continue;
		if (*symp == '\0' && endsym(*cp))
			return symind;
	}
	return 0;
}

/*
 *   getlin - expands tabs if asked for
 *            and (if compiled in) treats form-feed as an end-of-line
 */
int
getlin(char *line, int maxline, FILE *inp, bool expandtabs)
{
	int     tmp;
	int     num;
	int     chr;
#ifdef  FFSPECIAL
	static bool havechar = false;	/* have leftover char from last time */
	static char svchar;
#endif	/* FFSPECIAL */

	num = 0;
#ifdef  FFSPECIAL
	if (havechar) {
		havechar = false;
		chr = svchar;
		goto ent;
	}
#endif	/* FFSPECIAL */
	while (num + 8 < maxline) {	/* leave room for tab */
		chr = getc(inp);
		if (isprint(chr)) {
#ifdef  FFSPECIAL
	ent:
#endif	/* FFSPECIAL */
			*line++ = chr;
			num++;
		} else
			switch (chr) {
			case EOF:
				return EOF;

			case '\t':
				if (expandtabs) {
					num += tmp = 8 - (num & 7);
					do
						*line++ = ' ';
					while (--tmp);
					break;
				}
			default:
				*line++ = chr;
				num++;
				break;

			case '\n':
				*line = '\n';
				num++;
				goto end;

#ifdef  FFSPECIAL
			case '\f':
				if (++num == 1)
					*line = '\f';
				else {
					*line = '\n';
					havechar = true;
					svchar = chr;
				}
				goto end;
#endif	/* FFSPECIAL */
			}
	}
end:
	*++line = '\0';
	return num;
}

void
flushline(bool keep)
{
	if (symlist)
		return;
	if ((keep && reject != REJ_YES) ^ complement) {
		char   *line = tline;
		FILE   *out = stdout;
		char    chr;

		while ((chr = *line++) != 0)
			putc(chr, out);
	} else if (lnblank)
		putc('\n', stdout);
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
error(int code, int depth)
{
	if (incomment || inquote)
		errx(2, "error in %s line %d: %s (#if depth %d)",
		    filename, stqcline, errs[code], depth);
	else
		errx(2, "error in %s line %d: %s"
		    " (#if depth %d start line %d)",
		    filename, linenum, errs[code], depth, stifline);
}
