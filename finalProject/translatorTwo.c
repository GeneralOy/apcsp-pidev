#include <stdio.h>
#include <math.h>
int decToBinary(int n/*, int notationBase*/)
{
	int returningInt;
	int k, i = 1;
	while(n >= 1) {
	//int k = n >> i;
	k = n % 2;
	if(k = 1)
	{
		printf("1");
		returningInt += k * 10^i;
	}else if(k = 0)
	{
		printf("0");
	}
	n = n/2;
//	if(n == 1)
//	{
//	returningInt += k;
//	}
	i++;
	}
	printf("\n%d\n", returningInt);
	return returningInt;
}
int binToDecimal(int bin_val, int notationBase) {
	int num, decimal_val = 0, rem, base = 1, incB = 2;
	num = bin_val;
	while (num > 0)
	{
		rem = num % notationBase;
		decimal_val += + rem * base;
		num = num / notationBase;
		base = base * incB;
	}
	printf("%d\n", decimal_val);
	return decimal_val;
}


int main()
{
	int n = 32;
	int bin1 = decToBinary(n);
	printf("%d\n",bin1);
	binToDecimal(bin1, 10);
	n = 1;
	int bin2 = decToBinary(n);
	printf("%d\n",bin2);
	binToDecimal(bin2, 10);
	n = 1515;
	int bin3 = decToBinary(n);
	printf("%d\n",bin3);
	binToDecimal(bin2, 10);
	n = 7;
	int bin4 = decToBinary(n);
	printf("%d\n",bin4);
	binToDecimal(bin2, 10);
}
