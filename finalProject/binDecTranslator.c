#include <stdio.h>
#include <math.h>

int printIntArr(int* arr) {
	int returnInt;
	
	for(int i = sizeof(*arr); i > 0; i--) {
	returnInt += arr[i] * (10 ^ i);
	printf("%d", arr[i]);
	}
	
	return returnInt;
}
int decToBinary(int n)
{
	int binaryNum[1000];
	int i = 0,k = 0, l = 0, bin;
	int tf = 0;
	while(n > 0) {
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
		//if(binaryNum[i] == 1) {
		//	tf = 1;
		//}else if(tf == 0){
		//k++;
		//l = 0;
		//} if(tf == 1) {
		//l++;
		
		//}
		printf("%d", binaryNum[i]);
	}
	for(int a = k; a < l; a++) {
	bin += binaryNum[a];
	
	}
	printf("%d\n", bin);
	return bin;
}
int binToDec(int n, int notationBase) {
	int decArr[512];
	int x = 0, k;
	while(n > 1) {
		k = n % notationBase;
		if(k = 1) {
			decArr[x] = k;
			printf("1");
		} else if(notationBase = 2){
			printf("0");
		}
		n = n / 2;
		x++;
	}
	printf("\n");
	return printIntArr((int*)&decArr);
}


int decToBin(int n, int notationBase) {
	int bin;
	int x = 0, k;
	while(n > 1) {
		k = n % 10;
		bin += k * (2 ^ x);
		printf("%d \n", bin);
		
		
		n = n / 10;
		x++;
	}
	
	return bin;
}

int main()
{
	int n = 32;
	decToBinary(n);
	//int bin1 = decToBin(n, 2);
	//int dec1 = binToDec(n, 10);
	n = 2;
	decToBinary(n);
	//int bin2 = decToBin(n,2);
	//int dec2 = binToDec(n,10);
	n = 1;
	decToBinary(n);
	//int bin3 = decToBin(n,2);
	//int dec3 = binToDec(n,10);

}
