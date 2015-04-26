// CS 271 - lab assignment #10
// TestTerm.cpp
// Test program for Term class
// Jeremiah Smith
// April 11, 2015

#include "Term.h"


int main()
{
    //testing Term objects by declaring 4 terms
    //term1, term2 term4 and term4

    cout<<"Creating 4 term objects term1, term2, term3 and term4"<<endl;

    Term term1(9,4);
    Term term2;
    Term term3(10,4);
    Term term4(4,5);

    cout<<"Outputting all the term obects values using overloaded extraction operator"<<endl;

    cout<<"term1: "<<term1<<endl;
    cout<<"term2: "<<term2<<endl;
    cout<<"term3: "<<term3<<endl;
    cout<<"term4: "<<term4<<endl;

    cout<<"Inputing the values for term2 with overloaded incertion operator"<<endl;
    cout<<"Please input the coefficent and exponent for term2 with a space between."<<endl;

    cin>>term2;
    cout<<"After inputing term2: "<<term2<<endl;

    cout<<"Adding term1 and term3 and storing in a new term5."<<endl;

    Term term5;

    term5 = term1 + term3;

    cout<<"After adding "<<term1<<" to "<<term3<<" term5 is: "<<term5<<endl;

    cout<<"Subtracting term1 form term4 and stroing it in a new term6, term6"<<endl
        <<"will have values 0, 0"<<endl;

    Term term6;
    term6 = term4 - term1;

    cout<<"After subtracting "<<term1<<" from "<<term4<<" the result is "<<term6<<" as expected."<<endl;

    cout<<"Subtracting term1 form term3 and stroing it in term6"<<endl;

    term6 = term3 - term1;

    cout<<"After subtracting "<<term1<<" from "<<term3<<" the result is "<<term6<<endl;

    cout<<"Multiplying term2 and term4 and stroing it in a new term7"<<endl;

    Term term7;
    term7 = term4 * term2;

    cout<<"After multiplying "<<term4<<" and "<<term2<<" the result is "<<term7<<endl;
}