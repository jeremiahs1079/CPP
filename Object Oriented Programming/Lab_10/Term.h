#ifndef TERM_H
#define TERM_H

#include <iostream>

using namespace std;
class Term
{
    friend ostream &operator<<( ostream &, const Term & );
    friend istream &operator>>( istream &, Term & );

private:
    int coefficient;
    int exponent;

public:
    Term ( int coef = 0, int exp = 0 );
    void setCoefficient ( int );
    void setExponent ( int );
    int getCoefficient ();
    int getExponent( );
    Term operator+ (const Term & ) const;
    Term operator- (const Term & ) const;
    Term operator* (const Term & ) const;
};
#endif