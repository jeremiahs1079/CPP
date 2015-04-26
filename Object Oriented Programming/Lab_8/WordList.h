

#ifndef WORD_LIST_H
#define WORD_LIST_H

#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdexcept>

using namespace std;

class WordList
{

public:
    //constructor
    WordList(int);
    //destructor
    ~WordList();

    //member functions
    int getWordCount();
    void insertWord(string*, int);
    void shuffle();
    void sortByLength();
    void sortByAlpha();
    void print();

private:
    //member variables
    int wordCount;
    string** wordPtr;

};

#endif