/* Copyright 2004 Bob Proulx <bob@proulx.com>
   You may freely use, modify and/or distribute this file. */

#include <stdio.h>
#include <stdlib.h>

#if ! defined(BAR)
int foo() { return 0; }
#else
#error BAR defined
#endif

int main()
{
  foo();
}
