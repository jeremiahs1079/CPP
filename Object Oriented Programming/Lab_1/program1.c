// CS 271 - lab assignment #1
// program1
// imputs two integers and outputs the sum
// Jeremiah Smith
// January 16, 2015

#include <stdio.h>

int main()
{
	//variable declration
	int integer1, integer2;
	int sum;
	
	//prompt for user for integer1 and integer2 input
	printf("Enter first integer\n");
	scanf("%d", &integer1);
	
	printf("Enter second integer\n");
	scanf("%d", &integer2);
	
	//perform addition and assign to sum
	sum = integer1 + integer2;
	
	//output sum
	printf("Sum is %d\n", sum);
	
}
