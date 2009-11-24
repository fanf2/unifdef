#include <stdio.h>
#include <stdlib.h>

#if defined(FOO)
int foo() { return 0; }
#else
#error FOO not defined
#endif

int main()
{
  foo();
}
