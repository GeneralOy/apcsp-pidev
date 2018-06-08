#include <stdio.h>
#include <math.h>
int arrayAdd(int* array, int s, int n);
int z = 0;
int main()
{

  int arr[100];

for(int i = 1; i < 101; i++)
{

  arr[i-1] = i*i;
  printf("Square of index %d is %d \n", i, arr[i-1]);

}
  arrayAdd((int*)&arr, 100, 5);
  for(int k = 0; k < 100; k++)
  {
  printf("%d \n", arr[k]);
  }

}
int arrayAdd(int* array, int s, int n) {
  for(int x = 1; x < s+1; x++)
  {
  *(array+x) +=  n;
  }
}
//UNFINISHED - see last line?
