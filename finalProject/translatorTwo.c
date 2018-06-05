#include <stdio.h>

int decToBinary(int n/*, int notationBase*/)
{
	int returningInt;
	for(int i = 31; i >= 0; i--) {
	int k = n >> i;
	if(k = 1)
	{
		printf("1");
		returningInt += k * 10^i;
	}/*else if(k = 2)
	{
		printf("2");
		returningInt += k * 10^i;
	}else if(k = 3)
	{
		printf("3");
		returningInt += k * 10^i;
	}else if(k = 4)
	{
		printf("4");
		returningInt += k * 10^i;
	}else if(k = 5)
	{
		printf("5");
		returningInt += k * 10^i;
	}else if(k = 6)
	{
		printf("6");
		returningInt += k * 10^i;
	}else if(k = 7)
	{
		printf("7");
		returningInt += k * 10^i;
	}else if(k = 8)
	{
		printf("8");
		returningInt += k * 10^i;
	}else if(k = 9)
	{
		printf("9");
		returningInt += k * 10^i;
	}/*if(k = 10)
	{
		printf("a");
		returningInt += k * 10^i;
	}if(k = 11)
	{
		printf("b");
		returningInt += 1 * 10^i;
	}if(k = 12)
	{
		printf("c");
		returningInt += 1 * 10^i;
	}if(k = 13)
	{
		printf("d");
		returningInt += 1 * 10^i;
	}if(k = 14)
	{
		printf("e");
		returningInt += 1 * 10^i;
	}if(k = 15)
	{
		printf("f");
		returningInt += 1 * 10^i;
	}if(k = 16)
	{
		printf("g");
		returningInt += 1 * 10^i;
	}*/else
	{
		printf("0");
	}
	}
	printf("\n");
}

int main()
{
	int n = 32;
	decToBinary(n);
	n = 1;
	decToBinary(n);
	n = 1954;
	decToBinary(n);
	n = 12345;
	decToBinary(n);
}
