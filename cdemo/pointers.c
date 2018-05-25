#include <stdio.h>

int main()
{

  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d = 65.5;
  float e = 3.14;
  float temp;
  int* ptrtod;
  int* ptrtoe;
  ptrtod = &d;
  ptrtoe = &e;
  printf("The value of d is %f, and the address of d is %d\n", d, &d);
  printf("The value of e is %f, and the address of f is %d\n", f, &f);
  
  
  
  
  
  
  
  
  printf("The value of d is %f, and the address of d is %d\n", d, &d);
  printf("The value of e is %f, and the address of f is %d\n", f, &f);
}
