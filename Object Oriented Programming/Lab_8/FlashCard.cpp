// CS 271 - lab assignment #8
// FlashCard.cpp
// test program for WordList
// Jeremiah Smith
// 04/01/2015

#include <iostream>
#include <new>

#include "WordList.h"


int main()
{
    int numberOfWords = 0;
    char input[60];


    cout<<"How many words would you like in the list?"<<endl;
    cin>>numberOfWords;
    cout<<endl;
    cout<<"Enter the words for the list"<<endl;

    string ** userInput = new string*[numberOfWords];


    try
    {
        WordList wl2(numberOfWords);
        cin.ignore();
        for(int i = 0; i < numberOfWords; i++)
        {

            cout<<i<<endl;
            cin.getline(input, 60);
            userInput[i] = new string(input);
            wl2.insertWord(userInput[i], i);
        }

        wl2.print();

        cout<<endl<<"Shuffling"<<endl;
        wl2.shuffle();

        wl2.print();

        cout<<"The number of words in the list wl2 is: "<<wl2.getWordCount()<<endl;

        cout<<"Sorting by length"<<endl;
        wl2.sortByLength();
        wl2.print();

        cout<<"Sorting by alpha"<<endl;
        wl2.sortByAlpha();
        wl2.print();
    }
    catch(invalid_argument e)
    {
        cout<<"Exception Caught: "<<e.what()<<endl;
    }
   
}
