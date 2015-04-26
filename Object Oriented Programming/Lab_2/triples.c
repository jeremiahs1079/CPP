// CS 271 - lab assignment # 2
// coffee.c
// print the Pythagorean Triples for all intergers to 1000
// Jeremiah Smith
// January 23, 2015

#include <stdio.h>
#include <math.h>

int main()
{
    //variable decleration
    int i = 0;
    int j = 0;
    int k = 0;
    //print col headers
    printf("%6s    %6s    %10s\n", "Side 1", "Side 2", "Hypotenuse");
    printf("%6s    %6s    %10s\n", "------", "------", "----------");
    //triple nested for loop to generate Pythagoean Triples for integers to 1000
    for(i = 1; i <= 1000; i++)
        for(j = 1; j <= 1000; j++)
            for(k = 1; k <= 1000; k++)
                if(((pow(i,2) + pow(j,2)) == pow(k,2)) && i < j)
                    printf("%6d    %6d    %10d\n", i, j, k);   
                    
}