/*
 * Copyright (c) 1985, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Dave Yost.
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

__RCSID("@(#)unifdef.c	8.1 (Berkeley) 6/6/93");
__RCSID("$NetBSD: unifdef.c,v 1.8 2000/07/03 02:51:36 matt Exp $");
__RCSID("$dotat: unifdef/unifdef.c,v 1.29 2002/04/25 23:46:55 fanf Exp $");
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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE   *input;
#ifndef YES
#define YES 1
#define NO  0
#endif /* YES */
#define C_COMMENT   1
#define CXX_COMMENT 2
typedef int Bool;

char   *filename;
char    text;			/* -t option in effect: this is a text file */
char    lnblank;		/* -l option in effect: blank deleted lines */
char    complement;		/* -c option in effect: complement the
				 * operation */

#define MAXSYMS 1000
char   *symname[MAXSYMS];	/* symbol name */
char   *value[MAXSYMS];		/* -Dsym=value */
char    ignore[MAXSYMS];	/* -iDsym or -iUsym */

char    nsyms = 1;		/* symbol 0 is used for tracking #ifs */
char    incomment;		/* inside C comment */

#define QUOTE_NONE   0
#define QUOTE_SINGLE 1
#define QUOTE_DOUBLE 2
char    inquote;		/* inside single or double quotes */
int     exitstat;

void	error(int, int);
int	findsym(char *);
void	flushline(Bool);
int	getlin(char *, int, FILE *, int);
int	main(int, char **);
void	pfile(void);
char   *skipcomment(char *);
char   *skipquote(char *, int);
char   *skipsym(char *);
void	usage(void);

int
main(argc, argv)
	int     argc;
	char  **argv;
{
	char  **curarg;
	char   *cp;
	char   *cp1;
	char    ignorethis;

	for (curarg = &argv[1]; --argc > 0; curarg++) {
		if (*(cp1 = cp = *curarg) != '-')
			break;
		if (*++cp1 == 'i') {
			ignorethis = YES;
			cp1++;
		} else
			ignorethis = NO;
		if ((*cp1 == 'D'
			|| *cp1 == 'U'
		    )
		    && cp1[1] != '\0'
		    ) {
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
		else if (strcmp(&cp[1], "t") == 0)
			text = YES;
		else if (strcmp(&cp[1], "l") == 0)
			lnblank = YES;
		else if (strcmp(&cp[1], "c") == 0)
			complement = YES;
		else {
		unrec:
			warnx("unrecognized option: %s", cp);
			usage();
		}
	}
	if (nsyms == 1)
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
usage()
{
	fprintf (stderr, "usage: %s",
"unifdef [-l] [-t] [-c] [[-Dsym] [-Usym] [-iDsym] [-iUsym]] ... [file]\n");
	exit (2);
}

#define MAXLINE 256
char    tline[MAXLINE];

/* types of input lines: */
typedef int Linetype;
#define LT_PLAIN       0	/* ordinary line */
#define LT_TRUE        1	/* a true #if */
#define LT_FALSE       2	/* a false #if */
#define LT_ELTRUE      3	/* a true #elif */
#define LT_ELFALSE     4	/* a false #elif */
#define LT_IF          5	/* an unknown #if */
#define LT_ELIF        6	/* an unknown #elif */
#define LT_ELSE        7	/* #else */
#define LT_ENDIF       8	/* #endif */
Linetype checkline(int *);
Linetype ifeval(char **);

typedef int Reject_level;
Reject_level reject;		/* 0 or 1: pass thru; 1 or 2: ignore comments */
#define REJ_NO          0
#define REJ_IGNORE      1
#define REJ_YES         2
void doif(int);

int     linenum;		/* current line number */
int     stqcline;		/* start of current coment or quote */
char   *errs[] = {
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

void
pfile()
{
	reject = REJ_NO;
	doif(0);
	return;
}

void
doif_1(depth, lineval, cursym)
	int      depth;		/* depth of #if's */
	int      cursym;
	Linetype lineval;
{
	Reject_level savereject;
	int     active;
	int     inelse;
	int     dummysym;

	savereject = reject;
	inelse = NO;
	if (lineval == LT_IF || reject != REJ_NO) {
		active = NO;
		flushline(YES);
	} else {
		active = YES;
		if (ignore[cursym]) {
			flushline(YES);
			if (lineval == LT_FALSE)
				reject = REJ_IGNORE;
		} else {
			flushline(NO);
			if (lineval == LT_FALSE)
				reject = REJ_YES;
		}
	}
	for (;;) {
		doif(depth);
		switch (lineval = checkline(&dummysym)) {
		case LT_ELIF:
			if (inelse)
				error(ELIF_ERR, depth);
			break;
		case LT_ELTRUE:
			if (inelse)
				error(ELIF_ERR, depth);
			break;
		case LT_ELFALSE:
			if (inelse)
				error(ELIF_ERR, depth);
			break;
		case LT_ELSE:
			if (inelse)
				error(ELSE_ERR, depth);
			if (!active)
				flushline(YES);
			else if (ignore[cursym]) {
				flushline(YES);
				if (reject == REJ_IGNORE)
					reject = REJ_NO;
				else
					reject = REJ_IGNORE;
			} else {
				flushline(NO);
				if (reject == REJ_YES)
					reject = REJ_NO;
				else
					reject = REJ_YES;
			}
			inelse = YES;
			break;
		case LT_ENDIF:
			if (!active || ignore[cursym])
				flushline(YES);
			else
				flushline(NO);
			reject = savereject;
			return;
		default:
			/* bug */
			abort();
		}
	}
}
void
doif(depth)
	int     depth;		/* depth of ifdef's */
{
	Linetype lineval;
	int     cursym;		/* index of the symbol returned by checkline */

	for (;;) {
		linenum++;
		if (getlin(tline, sizeof tline, input, NO) == EOF) {
			if (incomment)
				error(CEOF_ERR, depth);
			if (inquote == QUOTE_SINGLE)
				error(Q1EOF_ERR, depth);
			if (inquote == QUOTE_DOUBLE)
				error(Q2EOF_ERR, depth);
			if (depth != 0)
				error(IEOF_ERR, depth);
			return;
		}
		switch (lineval = checkline(&cursym)) {
		case LT_PLAIN:
			flushline(YES);
			break;
		case LT_IF:
		case LT_TRUE:
		case LT_FALSE:
			doif_1(depth + 1, lineval, cursym);
			break;
		case LT_ELIF:
		case LT_ELTRUE:
		case LT_ELFALSE:
		case LT_ELSE:
		case LT_ENDIF:
			if (depth != 0)
				return;
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
#define endsym(c) (!isalpha ((unsigned char)c) && !isdigit ((unsigned char)c) && c != '_')

Linetype
checkline(cursym)
	int    *cursym;		/* if LT_TRUE or LT_FALSE returned, set this
				 * to sym index */
{
	char   *cp;
	char   *symp;
	char   *scp;
	Linetype retval;
#define KWSIZE 8
	char    keyword[KWSIZE];

	retval = LT_PLAIN;
	cp = skipcomment(tline);
	if (*cp != '#'
	    || incomment
	    || inquote == QUOTE_SINGLE
	    || inquote == QUOTE_DOUBLE
	    )
		goto eol;

	cp = skipcomment(++cp);
	symp = keyword;
	while (!endsym(*cp)) {
		*symp = *cp++;
		if (++symp >= &keyword[KWSIZE])
			goto eol;
	}
	*symp = '\0';

	if (strcmp(keyword, "ifdef") == 0) {
		retval = LT_TRUE;
		goto ifdef;
	} else if (strcmp(keyword, "ifndef") == 0) {
		retval = LT_FALSE;
	ifdef:
		scp = cp = skipcomment(++cp);
		if (incomment) {
			retval = LT_PLAIN;
			goto eol;
		}
		if ((*cursym = findsym(scp)) == 0)
			retval = LT_IF;
		else if (value[*cursym] == NULL)
			retval = (retval == LT_TRUE)
			    ? LT_FALSE : LT_TRUE;
	} else if (strcmp(keyword, "if") == 0) {
		retval = ifeval(&cp);
		cp = skipcomment(cp);
		if (*cp != '\n')
			retval = LT_IF;
		*cursym = 0;
	} else if (strcmp(keyword, "elif") == 0) {
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
	} else if (strcmp(keyword, "else") == 0)
		retval = LT_ELSE;
	else if (strcmp(keyword, "endif") == 0)
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
 *  Evaluate the expression on a #if line. If we can't work out the
 *  value then LT_IF is returned (so the #if block is passed through)
 *  otherwise we return LT_TRUE or LT_FALSE accordingly.
 *
 *  We only deal with a limited set of operators, as follows:
 *	defined() && || ! ( )
 */
Linetype
ifeval_2(cpp)
	char   **cpp;
{
	char    *cp;
	int      sym;
	Linetype val;

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
ifeval_1(cpp)
	char   **cpp;
{
	char    *cp;
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
ifeval(cpp)
	char   **cpp;
{
	char    *cp;
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
char   *
skipcomment(cp)
	char   *cp;
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
					incomment = NO;
					break;
				}
			}
		}
		else if (incomment == CXX_COMMENT) {
			for (; *cp != '\n'; cp++)
				if (*cp == '\0')
					return cp;
			incomment = NO;
		}
	}
}
/*
 *  Skip over a quoted string or character and stop at the next charaacter
 *  position that is not whitespace.
 */
char   *
skipquote(cp, type)
	char   *cp;
	int     type;
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
char   *
skipsym(cp)
	char   *cp;
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
findsym(str)
	char   *str;
{
	char   *cp;
	char   *symp;
	int     symind;
	char    chr;

	for (symind = 1; symind < nsyms; ++symind) {
		for (symp = symname[symind], cp = str
		    ; *symp && *cp == *symp
		    ; cp++, symp++
		    )
			continue;
		chr = *cp;
		if (*symp == '\0' && endsym(chr))
			return symind;
	}
	return 0;
}
/*
 *   getlin - expands tabs if asked for
 *            and (if compiled in) treats form-feed as an end-of-line
 */
int
getlin(line, maxline, inp, expandtabs)
	char   *line;
	int     maxline;
	FILE   *inp;
	int     expandtabs;
{
	int     tmp;
	int     num;
	int     chr;
#ifdef  FFSPECIAL
	static char havechar = NO;	/* have leftover char from last time */
	static char svchar;
#endif	/* FFSPECIAL */

	num = 0;
#ifdef  FFSPECIAL
	if (havechar) {
		havechar = NO;
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
					havechar = YES;
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
flushline(keep)
	Bool    keep;
{
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
error(code, depth)
	int     code;		/* type of error & index into error string
				 * array */
	int     depth;		/* how many ifdefs we are inside */
{
	errx(2, "error in %s line %d: %s (ifdef depth %d)",
	    filename, linenum, errs[code], depth);
}
