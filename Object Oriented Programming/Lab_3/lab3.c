// CS 271 - lab assignment 3
// lab3.c
// main file for lab3 functions
// Jeremiah Smith
// January 31, 2015

#include "lab3functions.h"
#include <stdio.h>


int main(void)
{
    //variable declrations
    int i;

    //for loop to test perfect function
    printf("Printing the perfect numbers from 1 to 1000\n");
    for(i = 1; i<= 1000; i++)
        if(perfect(i) == 1)
            printf("%d\n", i);

    //for loop to test perfect function
    printf("Printing the prime numbers from 1 to 20\n");
    for(i = 1; i<= 20; i++)
        if(prime(i) == 1)
            printf("%d\n", i);

    //test revDigits
    printf("Reversing number 4567\n");
    printf("%d\n", revDigits(4567));

    //test revDigits
    printf("Reversing number 9846\n");
    printf("%d\n", revDigits(9846));

    //test revDigits
    printf("Reversing number 13482\n");
    printf("%d\n", revDigits(13482));

    //for loop to test revDigits for values 105 to 505 in incrments of 10
    for(i = 105; i <= 505; i = i + 10)
    {
        printf("Reversing %d\n", i);
        printf("%d\n", revDigits(i));
    }

}