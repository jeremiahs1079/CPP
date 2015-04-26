// CS 271 - lab assignment #11
// lab11.cpp
// calculate the total sales of product for employees
// Jeremiah Smith
// April 23, 2015

#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //variable decleration
    float sales[6][5];
    int employeeID, productID;
    float amount = 0;

    //initialize sales array
    for(int i = 0; i < 6; i++)
        for(int j = 0; j < 5; j++)
            sales[i][j] = 0.0f;
    //testing output
    /*for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 5; j++)
            cout<<sales[i][j]<<" ";
        cout<<endl;
    }*/



    //cout<<"Creating a in file stream object: inFile"<<endl;

    //creating file object
    ifstream inFile("Sales.dat");
    if(!inFile)
    {
        cout<<"File not opened"<<endl;
        return 1;
    }

    //processing input from file
    while(!inFile.eof())
    {
        inFile>>employeeID;
        inFile>>productID;
        inFile>>amount;
        sales[employeeID - 1][productID - 1] += amount;  
    }
    inFile.close();

    //calculate totals
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            sales[i][4] += sales[i][j];
            sales[5][j] += sales[i][j];
        }
        sales[5][4] += sales[i][4];
    }
        
    //creating out file and filling with data

    ofstream outFile("SalesReport.txt");
    if(!outFile)
    {
        cout<<"File not opened"<<endl;
        return 1;
    }

    for(int i = 0; i < 5; i++)
    {
        if(i == 0)
            for(int j = 0; j < 14; j++)
                outFile<<" ";

        if(i == 4)
            outFile<<setw(11)<<"Totals";
        else
            outFile<<setw(10)<<"Product #"<<i + 1;
    }

    outFile<<endl;

    for(int i = 0; i < 6; i++)
    {   if(i<5)
            outFile<<"Salesperson #"<<i+1;
        else
            outFile<<setw(14)<<"Totals";

        for(int j = 0; j < 5; j++)
            outFile<<setw(11)<<fixed<<setprecision(2)<<sales[i][j];
        outFile<<endl;
    }


}
