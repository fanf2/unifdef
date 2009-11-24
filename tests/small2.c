#include <stdio.h>
#include <stdlib.h>

#ifndef BAR
int bar() { return 0; }
#else
#error BAR not defined
#endif

int main()
{
  bar();
}
