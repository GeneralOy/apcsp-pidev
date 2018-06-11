#include <stdio.h>
#include <math.h>

int reverseDec(int input)
{
	int reversedNum = 0;
	while(input != 0) {
	reversedNum = 10*(reversedNum) + (input%10);
	input = input/10;
	}
	return reversedNum;
}

int decToBinary(int n )
{
	int returningInt=0;
	while(n >= 1) {
	int k = n % 2;
	if(k == 1)
	{
		printf("1");
		returningInt = (returningInt * 10) + 1;
	}else
	{
		printf("0");
		returningInt = returningInt * 10;
	}
	n = n / 2;
	if(n <= 1){
	n = 0;
	}

	}
	printf("\n");
	printf("%d \n",returningInt);
	return returningInt;
}

int binToDecimal(int n, int notationBase, int base)
{
	int num, k, dec_Val = 0,i = 1;
	while(n >= 1)
	{
		k = n % notationBase;
		num = n / notationBase;
		if(notationBase == 2)
		{
			if(k == 1)
			{
			dec_Val += 2^i;
			printf("1");
			
			}
			else if(k == 0)
			{
			printf("0");
		
			}
		}
		if(n >= 1)
		{
		n = 0;
		}
	}
	return dec_Val;

}
int main()
{
	int n = 32;
	int bin1 = decToBinary(n);
	int dec1 = binToDecimal(bin1,10,2);
	n = 1;
	int bin2 = decToBinary(n);
	int dec2 = binToDecimal(bin2,10,2);
	n = 1954;
	int bin3 = decToBinary(n);
	int dec3 = binToDecimal(bin3,10,2);
	n = 12345;
	int bin4 = decToBinary(n);
	int dec4 = binToDecimal(bin4,10,2);
}
