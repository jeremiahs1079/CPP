// CS 271 - lab assignment #1
// circle1
// outputs the area of two circles
// Jeremiah Smith
// January 16, 2015

#include <stdio.h>
#include <math.h>

int main()
{
	//variable declration
	int radius;
	double area;
	
	//calculate and print area of circle with radius 10
	radius = 10;
	area = M_PI * (pow((double)radius, 2.0));
	printf("The area of a circle with a radius of %d is %4.2f\n", radius, area);

	//calculate and print area of circle with radius 10
	radius = 20;
	area = M_PI * (pow((double)radius, 2.0));
	printf("The area of a circle with a radius of %d is %4.2f\n", radius, area);

	return 0;

}
