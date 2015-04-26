// CS 271 - lab assignment #5
// arrayfunctions.c
// implmentation file 
// Jeremiah Smith
// 2/17/2015

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "arrayfunctions.h"


void bubbleSort(int array[], int size)
{
    int temp, i, j, newSize = size, swapMade;

    for(i = 1; i < size; i++)
    {
        swapMade = 0;
    	for(j = 0; j < newSize - 1; j++)
        {
    		if (array[j] > array[j +1])
    		{
    			temp = array[j];
    			array[j] = array[j + 1];
    			array[j + 1] = temp;
                swapMade = 1;
    		}//end if
        }//end inner for
        newSize--;
        if(swapMade == 0)
            return;
    }//end outter for
}//end function

void fillArray(int array[], int size, int max)
{
	int i;

	srand(time(NULL));

	for(i = 0; i < size; i++)
		array[i] = rand() % max + 1;

}// end function

int linearSearch(int array[], int size, int key)
{
    int i;
    for(i = 0; i < size; i++)
        if(array[i] ==  key)
            return i;

    return -1;
}// end function

void printNperline(int array[], int size, int n)
{
    int i, j;

    for(i = 0; i < size; i = i + n)
    {
        for(j = 0; j < n; j++)
        {
            if(i + j > size - 1)
            {
                printf("\n");
                return;
            }
            printf("%d  ", array[i + j]);
        }
        printf("\n");
    }
}

void shiftElements(int array[], int size, int count)
{
    int i, j, temp;

    if(count > 0)
        for(i = 0; i < count; i++)
        {
            temp = array[(size -1)];
            for(j = size - 1; j >= 0; j--)
                array[j] = array[j - 1];
            array[0] = temp;
        }
    else if(count < 0)
        for(i = count; i < 0; i++)
        {
            temp = array[0];
            for(j = 0; j < size -1; j++)
                array[j] = array[j + 1];
            array[size - 1] = temp;
        }

}