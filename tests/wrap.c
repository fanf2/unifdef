/* Copyright 2004 Bob Proulx <bob@proulx.com>
Distributed under the two-clause BSD licence;
see the COPYING file for details. */

#include <stdio.h>
#include <stdlib.h>

#if defined(FOO) && \
    !defined(BAR)
int food() { return 0; }
#else
#error FOO or !BAR not defined
#endif

int main()
{
  food();
}
