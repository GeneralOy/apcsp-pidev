#include <stdio.h>
#include <strings.h>
#include <math.h>

int checkIntLength(int input) {
if(input>=100000000000) return 1101110;
if(input>=10000000000 && input<=100000000000) return 11;
if(input>=1000000000) return 10;
if(input>=100000000) return 9;
if(input>=10000000) return 8;
if(input>=1000000) return 7;
if(input>=100000) return 6;
if(input>=10000) return 5;
if(input>=1000) return 4;
if(input>=100) return 3;
if(input>=10) return 2;
if(input<=10) return 1;

}
int binToDec(int bin) {


}

int decTobin(int dec, int notationBase) {
int tempDec = dec;
int secondTemp = 0;
int fBin[1000];
int binLength;
int returnInt;
for(int i = 0; i < dec; i++) {
	secondTemp = tempDec % 2;
	printf("%d Mod %d : %d\n", tempDec, notationBase, secondTemp);
	tempDec = tempDec / notationBase;
	fBin[i] = secondTemp;
	if(tempDec = 0){
	binLength = i;
	i = dec+1;
	}

}
int finalBin[binLength];
for(int z = 0; z<binLength; z++) {
finalBin[z] = fBin[z];
}
for(int j = 0; j < sizeof(finalBin); j++) {
printf("%d", finalBin[j]);
returnInt += finalBin[j]*(10^j);
}
printf("\n");
return returnInt;
}


int main() {
	printf("150 to binary is %d\n", decTobin(150, 2));



}
