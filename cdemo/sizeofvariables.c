#include<stdio.h>

int main()
{
  int a = 545;
  char c = "s";
  float f = 12.345;
  double d = 134.624;

  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("char c value: %d and size: %d bytes\n", c, sizeof(c));
  printf("float f value: %d and size: %d bytes\n", f, sizeof(f));
  printf("double d value: %d and size: %d bytes\n", d, sizeof(d));
}

