# include <stdio.h>
 # include <stdlib.h>

 # ifndef BAR
int bar() { return 0; }
 # else
   # error BAR defined
 # endif

int main()
{
  bar();
}
