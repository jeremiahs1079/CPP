// CS 271 - lab assignment 3
// lab3functions.c
// implamentation file for lab3 functions
// Jeremiah Smith
// January 31, 2015

#include "lab3functions.h"

int perfect(int numberToTest)
{
	int sum = 0, i;

	for(i = 1; i < numberToTest; i++)
		if(numberToTest % i == 0)
			sum += i;

	if(sum == numberToTest)
		return 1;
	else
		return 0;
}

int prime(int numberToTest)
{
	int numberOfFactors = 0, i;

	for(i = 1; i <= numberToTest; i++)
		if(numberToTest % i == 0)
			numberOfFactors++;

	if(numberOfFactors == 2)
		return 1;

	return 0;
}

int revDigits(int numToReverse)
{
	int numInReverse = 0;

	while( numToReverse > 0)
	{
		numInReverse = (numInReverse * 10) + (numToReverse % 10);
		numToReverse /= 10;
	}

	return numInReverse;
}

