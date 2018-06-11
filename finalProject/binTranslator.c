#include <stdio.h>
#include <math.h>

int binToDec(int bin);
int decToBin(int dec);
unsigned numDigits(const unsigned n);

int binToDec(int bin) {

	int decimal_val = 0,tempBin = bin, rem, base = 1;

		while (tempBin > 0)
	    {
	        rem = tempBin % 10;
	        decimal_val = decimal_val + rem * base;
	        tempBin = tempBin / 10 ;
	        base = base * 2;
	    }
	printf("%d\n", decimal_val);
	return decimal_val;
}


int decToBinary(int n)
{
	int bin = 0;
    // Size of an integer is assumed to be 32 bits
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1) {
            printf("1");
   	    bin = bin * 10;
	    bin += 1;
	}
        else {
            printf("0");
	    bin = bin * 10;
	}
    }

	printf("\n");
	printf("%d\n", bin);
	return bin;
}

unsigned numDigits(const unsigned n) {
    if (n < 10) return 1;
    return 1 + numDigits(n / 10);
}

int main() {
	int n = 0;
	binToDec(n);
	n = 1000;
	binToDec(n);
	n = 100001;
	binToDec(n);
	n=1;
	decToBinary(n);
	n=16;
	decToBinary(n);
	n=25;
	decToBinary(n);
}
