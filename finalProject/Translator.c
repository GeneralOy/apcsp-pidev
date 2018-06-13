#include <stdio.h>
#include <math.h>

int binToDec(int bin);
int decToBin(int dec);
unsigned numDigits(const unsigned n);
int checkIfBinary(int num);


int binToDec(int bin) {
	int decimal_val = 0, tempBin = bin, rem, base = 1;
	//while(tempBin > 0) {
	for(int i = 0; i < (numDigits(bin)); i++) {
		rem = tempBin % 10;
		decimal_val = decimal_val + (rem * base);
		tempBin = tempBin / 10;
		base = base * 2;
	}
	//printf("%d\n", decimal_val);
	return decimal_val;
}

int decToBin(int n) {
	int bin = 0;
	for(int i = 31; i >= 0; i--) {
		int k = n >> i;
		if(k & 1) {
			//printf("1");
			bin = bin * 10;
			bin += 1;
		} else /*if(k & 0) */{
			//printf("0");
			bin = bin * 10;
		}
	}
	//printf("\n");
	//printf("%d\n", bin);
	return bin;
}

unsigned numDigits(const unsigned n) {
	if(n < 10) return 1;
	return 1 + numDigits(n/10);
}

int checkIfBinary(int num) {
	int tempNum, tempNum2;
	int length = numDigits(num);
	for(int i = 0; i < length; i++) {
		tempNum = num % 10;
		if(tempNum == 1 || tempNum == 0) {
		tempNum2 = tempNum2 / 10;
		}else if(tempNum != 1 && tempNum != 0) {
		return 0;
		}
	}
	return 1;

}

int main(int argC, char* argv[]) {
	int arg1, arg2;
	int found = sscanf(argv[1], "%d", &arg1);
	int found2 = sscanf(argv[2], "%d", &arg2);
	if(argC != 3) {
		printf("You didn't fill both inputs!");
		return 1;
	}else if(found != 1) {
		printf("That's not a number! Input a binary number!\n");
		return 1;
	}else if(arg2 != 1 && arg2 != 0) {
		printf("That's not 1 or 0! 0 is for decimal to binary, 1 is for binary to decimal!\n");
		return 1;
	}else if(checkIfBinary(arg1) == 0 && arg2 == 1) {
		printf("That's not binary! Input a binary number(0's and 1's)!\n");
		return 1;
	}else {
		int length = numDigits(arg1);
		if(arg2 == 0) {
			int finBin = decToBin(arg1);
			printf("%d to binary is %d\n", arg1, finBin);
		}else if(arg2 == 1) {
			int finDec = binToDec(arg1);
			printf("%d to decimal is %d\n", arg1, finDec);
	}
	}


}
