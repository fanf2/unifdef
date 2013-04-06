/*
 * Copyright (c) 2012 Tony Finch <dot@dotat.at>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#include "unifdef.h"

/*
 * The Windows implementation of rename() fails if the new filename
 * already exists. This uses ReplaceFile() instead, and it includes
 * Windows-ish error handling rather than returning to the caller's
 * Unix-style handling.
 */
int
replace(const char *old, const char *new)
{
	const char *message;
	int count;

	if(ReplaceFile(old, new, NULL, 0, NULL, NULL))
		return (0);
	count = FormatMessage(
	    FORMAT_MESSAGE_ALLOCATE_BUFFER |
	    FORMAT_MESSAGE_FROM_SYSTEM |
	    FORMAT_MESSAGE_MAX_WIDTH_MASK,
	    NULL,
	    GetLastError(),
	    MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
	    (LPTSTR)&message,
	    0,
	    NULL);
	if (count != 0)
		fprintf(stderr, "unifdef: can't rename \"%s\" to \"%s\": %s\n",
			old, new, message);
	else
		fprintf(stderr, "unifdef: can't rename \"%s\" to \"%s\"\n",
			old, new);
	exit(2);
}

FILE *
mktempmode(char *tmp, int mode)
{
	mode = mode;
	return (fopen(_mktemp(tmp), "wb"));
}

FILE *
fbinmode(FILE *fp)
{
	_setmode(_fileno(fp), _O_BINARY);
	return (fp);
}
