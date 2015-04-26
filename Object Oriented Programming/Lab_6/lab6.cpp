// CS 271 - lab assignment #6
// Lab6.cpp
// implmentation for lab6
// Jeremiah Smith
// 3/2/2015

#include <iostream>
#include <iomanip>
using namespace std;


// write the prototype for a function called swap that accepts two
// integer pointers as parameters. The function will swap the contents
// of the two addresses. The function will not return anything.
// Hint: this function appears on page 293

void swap(int*, int*);

// write the prototype for a function called maximum. The function will
// accept two parameters: a pointer to a float, and an integer.
// The integer represents the size of an array and the float pointer
// is the address of the first array element.
// The function will find and return the maximum value in the array.

float maximum(float*, int);

// write the prototype for
void printNperline(int[], int, int);



// start the main function
int main()
{
    // define an array of integers called values with 20 elements
    int values[20];

    // using a for loop, assign the even, positive integers (starting with 2)
    // to the array elements
    for(int i = 1; i <= 20; i++)
        values[i - 1] = i * 2;


    // declare an integer named x and initialize it to 1
    // declare an integer named y and initialize it to 2
    int x = 1, y = 2;

    // call the swap function using addresses of values[x] and values[y]

    swap(&values[x], &values[y]);
    // print a message "After the first swap:\n".
    cout<<"After the first swap:"<<endl;

    // using the printNperline function, print the contents of the array values,
    // 10 elements per line
    printNperline(values, 20, 10);

    // print a blank line
    cout<<endl;

    // define a pointer named aPtr that points to an object of type int
    int* aPtr;

    // assign the starting address of the array values to aPtr
    aPtr = values;

    // define a pointer named vPtr that points to an object of type int
    // assign vPtr the address of values[1]
    int* vPtr;
    vPtr = &values[1];
    
    // define a pointer named wPtr that points to an object of type int
    // assign wPtr the address of values[2]
    int* wPtr;
    wPtr = &values[2];

    // call the swap function using parameters vPtr and wPtr
    swap(vPtr, wPtr);

    // print a message "After the second swap:\n".
    cout<<"After the second swap:"<<endl;

    // using the printNperline, print the contents of the array values,
    // 10 elements per line
    printNperline(values, 20, 10);

    // print a blank line
    cout<<endl;

    // print a message "Using Pointer/Offset Notation:\n"
    // using a for loop and pointer/offset notation, print the contents
    // of the array values, all on one line
    cout<<"Using Pointer/Offser Notation"<<endl;
    for( int offset = 0; offset < 20; offset++)
        cout<<*(aPtr + offset)<<" ";

    cout<<endl;

    // print a message "Using Pointer subscripting:\n"
    // using a for loop and pointer subscripting, print the contents
    // of the array values, all on one line
    cout<<"using Pointer subscripting"<<endl;
    for(int subscript = 0; subscript < 20; subscript++)
        cout<<aPtr[subscript]<<" ";

    cout<<endl;

    // print the pointer aPtr (with an informative message)
    // print the pointer aPtr + 3 (with an informative message)
    // print the value stored at aPtr + 3 (with an informative message)
    cout<<"The address stored in aPtr is: "<<aPtr<<endl;
    cout<<"The value stored in aPtr + 3 is: "<<*(aPtr + 3)<<endl;

    // declare an array called list with 10 elements of type float
    // using a for loop, input numbers from the user and store them
    // in the array list
    // call the maximum function with the array list and 10. Store the return
    // value in a variable called max.
    // print max (with an informative message)
    // end the main function

    float list[10];

    cout<<"Please enter 10 float values"<<endl;
    for(int i = 0; i < 10; i++)
        cin>>list[i];

    float max = maximum(list, 10);

    cout<<"The maximum float value strored in the float array list was "<<max<<endl;

}//end main function

// (This function performs the same task as the function in Lab 5. However, you
// must change the output statements to C++.
// write the definition of the printNperline function (see the description above)

void printNperline ( int array[ ] , int size, int n )
{

    for(int i = 0; i < size; i = i + n)
    {
        for(int j = 0; j < n; j++)
        {
            if(i + j > size - 1)
            {
                cout<<endl;
                return;
            }
            cout<< array[i+j]<<" ";
        }
        cout<<endl;
    }
}//end function printNperline

// write the definition of the swap function (see the description
// above)
void swap(int* iPointerOne, int* iPointerTwo)
{
    int temp = *iPointerOne;
    *iPointerOne = *iPointerTwo;
    *iPointerTwo = temp;
}//end function swap

// write the definition of the maximum function (see the description
// above)

float maximum(float* arrayHead, int size)
{
    float max = arrayHead[0];
    for(int i = 1; i < size; i++)
        if(arrayHead[i] > max)
            max = arrayHead[i];

    return max;
}//end function maximum

