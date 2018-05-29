#include <stdio.h>

float areaOfCircle(float radius)
{
  float area = 3.14*(radius*radius);
  return area;
}

int main()
{
  for(int i = 0; i <= 19; i ++)
{
  float r = 3.5 + (i * 0.5);
  printf("The area of a circle with radius %f is %f \n", r, areaOfCircle(i));
}
}
