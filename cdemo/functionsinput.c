#include <stdio.h>

	float areaOfCircle(float radius) {
	float area = 3.141592*(radius * radius);
	printf("Area of circle with radius %f is %f\n", radius, area);
	}


	int main(int argc, char* argv[])
	{
	if (argc != 3)
	{
	printf("%s : expected 2 arguments, please enter two integers - the first is the lower bound and the second is the upper\n", argv[0]);
	return 1;
	}

	float arg1;
	float found = sscanf(argv[1], "%f", &arg1);
	if (found != 1)
	{
	printf("first arg is not an integer, enter two ints - the first is the lower bound and the second is the upper\n");
	return 1;
	}

	float arg2;
	found = sscanf(argv[2], "%f", &arg2);
	if (found != 1)
	{
	printf("second arg is not an integer, enter two ints - the first is the lower bound and the second is the upper\n");
	return 1;
	}

	printf("great you entered two ints: %f and %f\n", arg1, arg2);

	for(float i = arg1; i < arg2 + 1; i++) {
	areaOfCircle(i);
	
	}

	}

