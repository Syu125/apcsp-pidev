#include<stdio.h>

int main()
{
  int a = 545;
  char k = 's';
  float f = 12.345;
  double d = 134.624;
  unsigned int b = 450;
  signed int e = 15;

  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("char k value: %c and size: %d bytes\n", k, sizeof(k));
  printf("float f value: %f and size: %d bytes\n", f, sizeof(f));
  printf("double d value: %d and size: %d bytes\n", d, sizeof(d));
  printf("int b value: %d and size: %d bytes\n", b, sizeof(b));
  printf("int e value: %f and size: %d bytes\n", e, sizeof(e));
}

