// CS 271 - lab assignment #12
// Package.cpp
// implmentation file for Package class
// Jeremiah Smith
// April 23, 2015

#include "Package.h"

//constructor
Package::Package(string sname, string saddress, string scity, string sstate,
                 string szip, string rname, string raddress, string rcity,
                 string rstate, string rzip, double w, double c)
{
    setSenderName(sname);
    setSenderAddress(saddress);
    setSenderCity(scity);
    setSenderState(sstate);
    setSenderZipCode(szip);
    
    setRecipientName(rname);
    setRecipientAddress(raddress);
    setRecipientCity(rcity);
    setRecipientState(rstate);
    setRecipientZipCode(rzip);

    setWeight(w);
    setCostPerOunce(c);
}

//Asscecory Functions
string Package::getSenderName(){return senderName;}
string Package::getSenderAddress(){return senderAddress;}
string Package::getSenderCity(){return senderCity;}
string Package::getSenderState(){return senderState;}
string Package::getSenderZipCode(){return senderZip;}

string Package::getRecipientName(){return recipientName;}
string Package::getRecipientAddress(){return recipientAddress;}
string Package::getRecipientCity(){return recipientCity;}
string Package::getRecipientState(){return recipientState;}
string Package::getRecipientZipCode(){return recipientZip;}

double Package::getWeight(){return weight;}
double Package::getCostPerOunce(){return costPerOunce;}

//Mutator Functions
void Package::setSenderName(string name){senderName = name;}
void Package::setSenderAddress(string address){senderAddress = address;}
void Package::setSenderCity(string city){senderCity = city;}
void Package::setSenderState(string state){senderState = state;}
void Package::setSenderZipCode(string zip){senderZip = zip;}

void Package::setRecipientName(string name){recipientName = name;}
void Package::setRecipientAddress(string address){recipientAddress = address;}
void Package::setRecipientCity(string city){recipientCity = city;}
void Package::setRecipientState(string state){recipientState = state;}
void Package::setRecipientZipCode(string zip){recipientZip = zip;}

void Package::setWeight(double w)
{
    if(w > 0)
        weight = w;
}

void Package::setCostPerOunce(double c)
{
    if(c > 0)
        costPerOunce = c;
}
//calculate cost for shiping the package
double Package::calculateCost()
{
    return getWeight() * getCostPerOunce();
}


