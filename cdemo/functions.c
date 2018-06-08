#include <stdio.h>

	float areaOfCircle(float radius)
	{
	float area = 3.14*(radius*radius);
	return area;
	}


	int main(/*int argc, float* radius[]*/)
	{
//	char input[256];
//	float scanRadius[256];
	for(int i = 0; i <= 19; i ++)
	{
	float r = 3.5 + (i * 0.5);
	printf("The area of a circle with radius %f is %f \n", r, areaOfCircle(i));
/*
	if(argc > 2)
	{
	printf("That's too many arguments! ALso make sure you input arguments as a numerical value; characters of any other type do not work.");
	sscanf(radius, "%f",scanRadius);
	areaOfCircle(scanRadius);
	}
	else if(argc = 1)
	{
	areaOfCircle(radius[1]);



	}
*/
/*
	printf("What is the radius of the circle? Enter one numerical value\n");
	fgets(input, 256, stdin);
	//printf("scanRadius %f", scanRadius[1]);
	sscanf(input, "%f", scanRadius);
	//printf("scanRadius %f", scanRadius[1]);

	if(2)
	{
	printf("The area of the circle with radius %f", scanRadius[1]);
	printf(" is %f\n", areaOfCircle(scanRadius[1]));
	}
*/

}
