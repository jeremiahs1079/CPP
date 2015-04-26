// CS 271 - lab assignment #8
// WordList
// implamentation file for WordList class
// Jeremiah Smith
// 03/30/2015

#include "WordList.h"

// one parameter constructor
// precondition count has to be positive
WordList::WordList(int count)
{
    if(count < 0)
        throw invalid_argument("initial word count can not be negative");

    wordCount = count;
    wordPtr = new string*[wordCount];

    for(int i = 0; i < count; i++)
        wordPtr[i] = NULL;
}

//destructor
WordList::~WordList()
{
        delete [] wordPtr;
}

//member functions
//function to print the words in the collection one word per line
//if the ptr is NULL will print NULL
void WordList::print()
{
    for(int i = 0; i < wordCount; i++)
    {
        if(wordPtr[i] == NULL)
            cout<<"NULL"<<endl;
        else
            cout<<*wordPtr[i]<<endl;
    }
}

//insert a word into the list
void WordList::insertWord(string* sp, int index)
{
    if(index > wordCount - 1 || index < 0)
        throw out_of_range("Index out of range");

    wordPtr[index] = sp;
}

//shuffel the word in the list
void WordList::shuffle()
{
    int swapOne;
    int swapTwo;
    string* temp;
    srand(time(NULL));

    for(int i = 0; i < 20; i++)
    {
        swapOne = rand() % ((wordCount - 1) + 1);
        swapTwo =rand() % ((wordCount - 1) + 1);
        while(swapOne == swapTwo)
            swapTwo =rand() % ((wordCount - 1) + 1);

        temp = wordPtr[swapOne];
        wordPtr[swapOne] = wordPtr[swapTwo];
        wordPtr[swapTwo] = temp;

    }
}

//function to return the count of words
int WordList::getWordCount()
{
    int count = 0;

    for(int i = 0; i < wordCount; i++)
        if(wordPtr[i] != NULL)
            count++;

    return count;
}

//function to sort the wordlist by length
//used bubble sort to order ascending
void WordList::sortByLength()
{
    string* temp;

    for(int i = wordCount - 2; i >= 0; i--)
    {
        for(int j = 0; j <= i; j++)
        {
            if(wordPtr[j]->length() > wordPtr[j + 1] -> length())
            {
                temp = wordPtr[j];
                wordPtr[j] = wordPtr[j + 1];
                wordPtr[j + 1] = temp;
            }
        }
    }
}

void WordList::sortByAlpha()
{
    string* temp;

    for(int i = wordCount - 2; i >= 0; i--)
    {
        for(int j = 0; j <= i; j++)
        {
            if(*wordPtr[j] > *wordPtr[j + 1])
            {
                temp = wordPtr[j];
                wordPtr[j] = wordPtr[j + 1];
                wordPtr[j + 1] = temp;
            }
        }
    }
}


