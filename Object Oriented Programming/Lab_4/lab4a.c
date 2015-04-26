// CS 271 - lab assignment #4a
// lab4a
// input int and count even and odd numbers until eof
// then print results of counts
// Jeremiah Smith
// Feburary 10, 2015

#include <stdio.h>

int main()
{
    int input = 0;
    int numberOfOdd =0, numberOfEven = 0, numberOfNegative = 0, numberOfPositive = 0;

    while((scanf("%d", &input)) != EOF)
    {
        if(input % 2 == 0)
            numberOfEven++;
        else
            numberOfOdd++;

        if(input < 0)
            numberOfNegative++;

        if(input > 0)
            numberOfPositive++;
        
    }

    printf("The number of positive numbers entered was: %d\n", numberOfPositive);
    printf("The number of negative numbers entered was: %d\n", numberOfNegative);
    printf("The number of even numbers entered was: %d\n", numberOfEven);
    printf("The number of odd numbers entered was: %d\n", numberOfOdd);

}

