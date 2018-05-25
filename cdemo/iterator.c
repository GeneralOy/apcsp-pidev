#include <stdio.h>

int main() {
int a = 3;
int check = 0;
for(int i = 0; i < 100000; i++) {
if((i%a)==0)
{
  printf("%d divides evenly into %d\n", i, a);
  check++;
}
if(check>=100)
{
  break;
}
}
}
