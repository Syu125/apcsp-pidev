#include <stdio.h>

int main()
{
  int a = 0;
  int b = 15;

	printf("A: %d   B: %d\n",a,b);
  // if statement to test is a is equal to 0
  if (a == b)
  {
    printf("a is equal to b\n");
  }

  if (a != 0)
  {
    printf("a is not equal to b\n");
  }

  if (a > b)
  {
    printf("a is greater than b\n");
  }

  if (a >= 0)
  {
    printf("a is greater than equal to b\n");
  }

  if (a == 0 && b ==0)
  {
    printf("a is equal to 0 AND b is equal to 0\n");
  }

  if (a == 0 || b == 0)
  {
    printf("a is equal to 0 OR b is equal to 0\n");
  }

  if (!(a == 0))
  {
    printf("a is not equal to 0\n");
  }
}
