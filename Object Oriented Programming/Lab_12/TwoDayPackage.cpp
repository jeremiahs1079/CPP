// CS 271 - lab assignment #12
// TwoDayPackage.cpp
// Implamentation file for TwoDayPackage.h
// Jeremiah Smith
// April 24, 2015

#include "TwoDayPackage.h"

//constructor
TwoDayPackage::TwoDayPackage(string sname, string saddress, string scity, string sstate,
                             string szip, string rname, string raddress, string rcity, 
                             string rstate,string rzip, double w, double c, double f) : 
                            Package(sname, saddress, scity, sstate, szip, rname, raddress, 
                                    rcity, rstate, rzip, w, c)
{
    setFlatFee(f);
}

//Accessory Functions
double TwoDayPackage::getFlatFee(){return flatFee;}

//Mutator Functions
void TwoDayPackage::setFlatFee(double f)
{
    if(f > 0)
        flatFee = f;
}

//class functions
double TwoDayPackage::calculateCost()
{
    return ((getWeight() * getCostPerOunce()) + getFlatFee());
}