// CS 271 - lab assignment #10
// Term.cpp
// implmentation file for Term class
// Jeremiah Smith
// April 11, 2015

#include "Term.h"

//constructor
Term::Term(int coef, int exp)
{
    coefficient = coef;
    exponent = exp;
}

//mutator functions
void Term::setCoefficient(int coef)
{
    coefficient = coef;
}

void Term::setExponent(int exp)
{
    exponent = exp;
}

//accessory functions
int Term::getCoefficient()
{
    return coefficient;
}

int Term::getExponent()
{
    return exponent;
}

//operators
Term Term::operator+(const Term &rhs) const
{
    Term returnTerm;
    if(this->exponent == rhs.exponent)
    {
        returnTerm.setExponent(this->exponent);
        returnTerm.setCoefficient(this->coefficient + rhs.coefficient);
    }

    return returnTerm;
}

Term Term::operator-(const Term &rhs) const
{
    Term returnTerm;
    if(this->exponent == rhs.exponent)
    {
        returnTerm.setExponent(this->exponent);
        returnTerm.setCoefficient(this->coefficient - rhs.coefficient);
    }

    return returnTerm;
}

Term Term::operator*(const Term &rhs) const
{
    Term returnTerm;

    returnTerm.setCoefficient(this->coefficient * rhs.coefficient);
    returnTerm.setExponent(this->exponent + rhs.exponent);

    return returnTerm;
}

//friend functions
ostream& operator<<(ostream &o, const Term &rhs)
{
    return o<<rhs.coefficient<<"x^"<<rhs.exponent;
}

istream& operator>>(istream &in, Term &rhs)
{
    in>>rhs.coefficient;
    in>>rhs.exponent;

    return in;
}
