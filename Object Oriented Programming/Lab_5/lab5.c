// CS 271 - lab assignment #5
// lab5.c
// test case file for lab 5
// Jeremiah Smith
// Feburary 19, 2015

#include <stdio.h>
#include "arrayfunctions.h"

int main()
{
    //variable declrations
    int myArray[50], myArray2[] = {1, 2, 3, 4, 5}, myArray3[] = {1, 2, 3, 4, 5};
    int index, searchResults, key;


    //testing fillArray
    fillArray(myArray, 50, 1000);
    //testing printNperline()
    printf("Before sort printing 10 per line\n");
    printNperline(myArray, 50, 10);

    printf("\n");
    printf("Before sort printing 4 per line\n");
    printNperline(myArray, 50, 4);

    printf("\n");
    printf("Before sort printing 6 per line\n");
    printNperline(myArray, 50, 6);

    //testing bubble sort on myArray
    bubbleSort(myArray, 50);

    //printing myArray after sort
    printf("\n");
    printf("After sort printing 6 per line\n");
    printNperline(myArray, 50, 6);

    printf("\n");
    printf("After sort printing 15 per line\n");
    printNperline(myArray, 50, 15);

    printf("\n");
    printf("After sort printing 11 per line\n");
    printNperline(myArray, 50, 11);

    //testing linear search
    printf("\n");
    printf("Testing linear search for 82\n");
    key = 82;
    searchResults = linearSearch(myArray, 50, key);

    if(searchResults >= 0)
        printf("The key value %d was found in myArray at position %d\n", key, searchResults);
    else
        printf("The key value %d was not found in myArray\n", key);

    printf("\n");
    printf("Testing linear search for %d which is the last element in the array\n", myArray[49]);
    key = myArray[49];
    searchResults = linearSearch(myArray, 50, key);

    if(searchResults >= 0)
        printf("The key value %d was found in myArray at position %d\n", key, searchResults);
    else
        printf("The key value %d was not found in myArray\n", key);

    printf("\n");
    printf("Testing linear search for %d which is the first element in the array\n", myArray[0]);
    key = myArray[0];
    searchResults = linearSearch(myArray, 50, key);

    if(searchResults >= 0)
        printf("The key value %d was found in myArray at position %d\n", key, searchResults);
    else
        printf("The key value %d was not found in myArray\n", key);

    //testing shiftElements
    printf("\n");
    printf("Shifting the elements in the array right 6 elements\n");
    shiftElements(myArray, 50, 6);
    printNperline(myArray, 50, 10);

    printf("\n");
    printf("Shifting the elements in the array left 4 elements\n");
    shiftElements(myArray, 50, -4);
    printNperline(myArray, 50, 10);

}
