// CS 271 - lab assignment #4
// genRamdon.c
// generate a file of random numbers to test lab4a
// Jeremiah Smith
// Date

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int number = 0, i;
    srand(time(NULL));
    for(i = 0; i < 100; i++)
    {
        if(i % 2 ==0)
            printf("%d\n", (rand() % 101 + 1));
        else
            printf("%d\n", (rand() % 101 + 1) * -1);

    }
}