#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
#include <string>
using namespace std;

class Package {

    public:  
        string getSenderName( );
        string getSenderAddress( ) ;
        string getSenderCity( );
        string getSenderState( );
        string getSenderZipCode( );

        string getRecipientName( );
        string getRecipientAddress( ) ;
        string getRecipientCity( );
        string getRecipientState( );
        string getRecipientZipCode( );

        double getWeight( );
        double getCostPerOunce( );


        void setSenderName( string name );
        void setSenderAddress( string address );
        void setSenderCity ( string city );
        void setSenderState ( string state );
        void setSenderZipCode ( string zip );
        void setRecipientName( string name );
        void setRecipientAddress( string address );
        void setRecipientCity ( string city );
        void setRecipientState ( string state );
        void setRecipientZipCode ( string zip );

        void setWeight( double );
        void setCostPerOunce ( double );

        Package ( string sname, string saddress, string scity,
                string sstate, string szip, string rname,
                string raddress, string rcity, string rstate,
                string rzip, double w, double c );

        double calculateCost( );


    private:
        string senderName;
        string senderAddress;
        string senderCity;
        string senderState;
        string senderZip;

        string recipientName;
        string recipientAddress;
        string recipientCity;
        string recipientState;
        string recipientZip;

        double weight;
        double costPerOunce;



};


#endif








