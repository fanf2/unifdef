/*
 * Copyright (c) 2012 - 2014 Tony Finch <dot@dotat.at>
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
 * already exists. Atomic replacement is not really needed, so just
 * remove anything that might be in the way before renaming.
 */
int
replace(const char *old, const char *new)
{
	if (remove(new) < 0)
		warn("can't remove \"%s\"", new);
	return (rename(old, new));
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

int c99_snprintf(char *buf, size_t buflen, const char *format, ...)
{
	va_list ap;
	int outlen;

	va_start(ap, format);
	outlen = _vsnprintf_s(buf, buflen, _TRUNCATE, format, ap);
	va_end(ap);
	if (outlen >= 0)
		return (outlen);
	/* correct return value in case of truncation */
	va_start(ap, format);
	outlen = _vscprintf(format, ap);
	va_end(ap);
	return (outlen);
}
