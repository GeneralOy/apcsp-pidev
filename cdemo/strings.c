#include <stdio.h>
#include <string.h>

int main() {
	char alph[] = "abcdefghijklmnopqrstuvwxyz";
	char alphup[27];
	char str3[53];

	for(int i = 0; i < 27; i++)
	{
	alphup[i] = alph[i];
	}

	if(strcmp(alph, alphup) == 0)
	{
	printf("Alph and Alphup are equal\n");
	}
	else
	{
	printf("Alph and Alphup are not equal\n");
	}

	for(int i = 0; i < 26; i++)
	{
	alphup[i]-=32;
	}

	printf("Alphup : %s\n",alphup);

	if(strcmp(alph, alphup) == 0)
	{
	printf("Alph and Alphup are equal\n");
	}
	else
	{
	printf("Alph and Alphup are different\n");
	}

	for(int i = 0; i < 27; i++)
	{
	str3[i] = alph[i];
	}
	for(int i = 0; i < 27; i++)
	{
	str3[26+i] = alphup[i];
	}

	printf("Alph : %s\nAlphup : %s\n Str3 : %s\n", alph, alphup, str3);
	
}
