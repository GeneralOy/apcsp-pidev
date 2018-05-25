#include <stdio.h>

int main()
{
  int a = 0;
  int b = 5;
  // if statement to test is a is equal to 0

  if (a == 0)
  {
    printf("a is 0\n");
  }
  else if(a != 0)
  {
    printf("a is not 0\n");
    if(a > 0)
    {
    printf("a is greater than 0\n");
    }
    else if(a < 0)
    {
    printf("a is less than 0\n");
    }
  if (b == 0)
  {
    printf("b is 0\n");
  }
  else if(b != 0)
  {
    printf("b is not 0\n");
    if(b > 0)
    {
    printf("b is greater than 0\n");
    }
    else if(b < 0)
    {
    printf("b is less than 0\n");
    }
  }
  if(b > a && b - a > 0)
  {
  printf("b is greater than a and greater than 0\n");
  }

}
