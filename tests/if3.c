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
