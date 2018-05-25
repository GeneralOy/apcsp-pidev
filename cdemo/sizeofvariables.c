#include<stdio.h>

int main()
{
  int a = 545;
  char b = b;
  float pi = 3.14;
  double db = 3.141592;
  signed int sa = -54;
  unsigned int usa = 54052;
  // print value and size of an int variable

  printf("int a value %d (oct %o, hex %x) and size %d bytes.\n", a, a, a, sizeof(a));
  printf("char b value %c (oct %o, hex %x) and size %d bytes.\n", b, b, b, sizeof(b));
  printf("float pi value %f (oct %o, hex %x) and size %d bytes.\n", pi, pi, pi, sizeof(pi));
  printf("double db value %d (oct %o, hex %x) and size %d bytes.\n", db, db, db, sizeof(db));
  printf("signed int a value %d (oct %o, hex %x) and size %d bytes.\n", sa, sa, sa, sizeof(sa));
  printf("unsigned int usa value %d (oct %o, hex %x) and size %d bytes.\n", usa, usa, usa, sizeof(usa));

}

