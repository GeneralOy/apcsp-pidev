#include <stdio.h>
#include <math.h>

int binToDec(int bin/*, int nBase*/);
int decToBin(int n);
unsigned numDigits(const unsigned n);
int checkIfBinary(int bin);

int binToDec(int bin/* int nBase*/) {
	int decimal_val = 0, tempBin = bin, rem, base = 1;
	//printf("%d\n", bin);
	while (tempBin > 0) {
		rem = tempBin % 10;
		decimal_val = decimal_val + rem * base;
		tempBin = tempBin / 10;
		base = base * 2/*nBase*/;
	}
	//printf("%d\n", decimal_val);
	return decimal_val;
}

int decToBinary(int n) {
	int bin = 0;
	for( int i = 31; i >= 0; i--) {
		int k = n >> i;
		if( k & 1) {
			//printf("1");
			bin = bin * 10;
			bin += 1;
		} else if(k & 0) {
			//printf("0");
			bin = bin * 10;
		}/* else {
		printf("That's not a binary input! Please input binary(1's and 0's only)!");
		i = -1;
		return 0;
		}*/
	}
	//printf("\n");
	//printf("%d is %d\n", n, bin);
	return bin;
}

unsigned numDigits(const unsigned n) {
if( n < 10) return 1;
return 1 + numDigits(n/10);
}

int checkIfBinary(int bin) {
	int n = bin, yn, length = numDigits(bin);
	for(int i = 0; i < length; i++) {
		n = n % 10;
		if(n == 1) {
		yn = 1;
		}else if(n == 0) {
		yn = 1;
		}else if(n > 1){
		return 0;
		}else if(n < 0){
		return 0;
		}
		n = n / 10;
	}
	return 1;

}

int main(int binaryToTranslate) {
	int check = checkIfBinary(binaryToTranslate);
	if(check == 1){
	printf("%d\n", decToBinary(binaryToTranslate));
	}else if(check == 0) {
	printf("That isn't binary! Enter a binary number(1's and 0's only)!\n");
	}
	//int n = 01011;
	//int dec1 = binToDec(n/*,2*/);
	//int bin1 = decToBinary(dec1);
	//n = 01101;
	//int dec2 = binToDec(n/*,2*/);
	//int bin2 = decToBinary(dec2);
	//n = 245;
	//int bin3 = decToBinary(n);
	//int dec3 = binToDec(bin3/*,2*/);


}
