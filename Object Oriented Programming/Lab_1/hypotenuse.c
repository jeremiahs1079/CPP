// CS 271 - lab assignment # 1
// hypotenuse
// input two sides of a right triangle and output the hypotenuse
// Jeremiah Smith
// January 16, 2015

#include <stdio.h>
#include <math.h>

int main()
{
	//declare variables
	double leg1 = 0, leg2 = 0, hyp;

	//get user input for leg1 and leg2
	printf("Enter the value of leg1\n");
	scanf("%lf", &leg1);
	
	printf("Enter the value of leg2\n");
	scanf("%lf", &leg2);
	
	//calculate hypotenuse
	hyp = sqrt((pow((double)leg1, 2.0) + pow((double)leg2, 2.0)));
	
	//output the hypotenuse
	printf("The hypotenuse of a right triangle with a leg 1 length of %4.2f and a leg 2 length of %4.2f is %4.2f\n", leg1, leg2, hyp);

	return 0;
}


