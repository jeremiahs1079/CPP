// CS 271 - lab assignment #4b
// lab4b
// intput characters until EOF then print the total number of letters, spaces, digits and punctuation
// Jeremiah Smith
// Feb 11, 2015

#include <stdio.h>
#include <ctype.h>

int main()
{
	char input;
	int numberOfLetters = 0, numberOfSpaces = 0, numberOfDigits = 0 , numberOfPunctuation = 0;

	while((input = getchar()) != EOF)
	{
		if(ispunct(input))
			numberOfPunctuation++;

		if(isdigit(input))
			numberOfDigits++;

		if(isalpha(input))
			numberOfLetters++;

		if(isspace(input))
			numberOfSpaces++;
	}

	printf("The number of letters: %d\n", numberOfLetters);
	printf("The number of digits: %d\n", numberOfDigits);
	printf("The number of spaces: %d\n", numberOfSpaces);
	printf("The number of punctuation: %d\n", numberOfPunctuation);
}
