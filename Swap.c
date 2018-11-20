#include <stdio.h>

int main(void)
{
  int x = 28;
  int y = 50;

  printf("x is %i\n", x);
  printf("y is %i\n", y);

  int temp = x;

  temp = y;
  //Swapping....

  printf("x is now %i\n", x);
  printf("y is now %i\n", y);
}
