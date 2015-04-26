// CS 271 - lab assignment #12
// lab12.cpp
// Test Program for lab12
// Jeremiah Smith
// April 24, 2015

#include "Package.h"
#include "TwoDayPackage.h"

int main()
{
    //testing Package class by declaring an object testPackage1
    cout<<endl<<"Testing Package class by declaring an object testPackage1"<<endl;

    Package testPackage1("Jeremiah Smith", "1234 Somewhere St", "Las Cruces", "NM",
                         "88005", "Kerry Hout", "4321 Somewhere St", "Las Cruces", "NM",
                         "88005", 10.0, 1.00);

    //testing accessory functions for package
    cout<<"Testing accessory functions for testPackage1"<<endl<<endl;
    cout<<"Sender Name: "<<testPackage1.getSenderName()<<endl;
    cout<<"Sender Address:"<<testPackage1.getSenderAddress()<<" "<<testPackage1.getSenderCity()
        <<", "<<testPackage1.getSenderState()<<" "<<testPackage1.getSenderZipCode()<<endl<<endl;

    cout<<"Recipient Name: "<<testPackage1.getRecipientName()<<endl;
    cout<<"Recipient Address:"<<testPackage1.getRecipientAddress()<<" "<<testPackage1.getRecipientCity()
        <<", "<<testPackage1.getRecipientState()<<" "<<testPackage1.getRecipientZipCode()<<endl<<endl;
    cout<<"Package Weight: "<<testPackage1.getWeight()<<" oz"<<endl;
    cout<<"Package Cost Per Ounce: $"<<testPackage1.getCostPerOunce()<<endl;
    cout<<"Cost to Ship: $"<<testPackage1.calculateCost()<<endl<<endl;

    cout<<"Testing mutator functions for testPackage1"<<endl<<endl;
    testPackage1.setSenderName("Walter White");
    testPackage1.setSenderAddress("98121 Heizenburg Ave");
    testPackage1.setSenderCity("Abq");
    testPackage1.setSenderState("AL");
    testPackage1.setSenderZipCode("88303");

    testPackage1.setRecipientName("Jesse Ventura");
    testPackage1.setRecipientAddress("2323 Wrestle Mania Rd");
    testPackage1.setRecipientCity("McMan");
    testPackage1.setRecipientState("CA");
    testPackage1.setRecipientZipCode("90210");

    testPackage1.setWeight(1000.00);
    testPackage1.setCostPerOunce(2.25);

    //after change testPackage1
    cout<<"After changes to testPackage1"<<endl<<endl;
    
    cout<<"Sender Name: "<<testPackage1.getSenderName()<<endl;
    cout<<"Sender Address:"<<testPackage1.getSenderAddress()<<" "<<testPackage1.getSenderCity()
        <<", "<<testPackage1.getSenderState()<<" "<<testPackage1.getSenderZipCode()<<endl<<endl;

    cout<<"Recipient Name: "<<testPackage1.getRecipientName()<<endl;
    cout<<"Recipient Address:"<<testPackage1.getRecipientAddress()<<" "<<testPackage1.getRecipientCity()
        <<", "<<testPackage1.getRecipientState()<<" "<<testPackage1.getRecipientZipCode()<<endl<<endl;
    cout<<"Package Weight: "<<testPackage1.getWeight()<<" oz"<<endl;
    cout<<"Package Cost Per Ounce: $"<<testPackage1.getCostPerOunce()<<endl;
    cout<<"Cost to Ship: $"<<testPackage1.calculateCost()<<endl<<endl;

    cout<<"Testing TwoDayPackage by declaring an object testTwoDayPackage1"<<endl;

    TwoDayPackage testTwoDayPackage1("Jeremiah Smith", "1234 Somewhere St", "Las Cruces", "NM",
                         "88005", "Kerry Hout", "4321 Somewhere St", "Las Cruces", "NM",
                         "88005", 10.0, 1.00, 50.00);

    //testing accessory functions for TwoDayPackage
    cout<<"Testing accessory functions for testTwoDayPackage1"<<endl<<endl;
    cout<<"Sender Name: "<<testTwoDayPackage1.getSenderName()<<endl;
    cout<<"Sender Address:"<<testTwoDayPackage1.getSenderAddress()<<" "<<testTwoDayPackage1.getSenderCity()
        <<", "<<testTwoDayPackage1.getSenderState()<<" "<<testTwoDayPackage1.getSenderZipCode()<<endl<<endl;

    cout<<"Recipient Name: "<<testTwoDayPackage1.getRecipientName()<<endl;
    cout<<"Recipient Address:"<<testTwoDayPackage1.getRecipientAddress()<<" "<<testTwoDayPackage1.getRecipientCity()
        <<", "<<testTwoDayPackage1.getRecipientState()<<" "<<testTwoDayPackage1.getRecipientZipCode()<<endl<<endl;
    cout<<"Package Weight: "<<testTwoDayPackage1.getWeight()<<" oz"<<endl;
    cout<<"Package Cost Per Ounce: $"<<testTwoDayPackage1.getCostPerOunce()<<endl;
    cout<<"Package Flat Fee: $"<<testTwoDayPackage1.getFlatFee()<<endl;
    cout<<"Cost to Ship: $"<<testTwoDayPackage1.calculateCost()<<endl<<endl;

    cout<<"Testing mutator functions for testTwoDayPackage1"<<endl<<endl;
    testTwoDayPackage1.setSenderName("Walter White");
    testTwoDayPackage1.setSenderAddress("98121 Heizenburg Ave");
    testTwoDayPackage1.setSenderCity("Abq");
    testTwoDayPackage1.setSenderState("AL");
    testTwoDayPackage1.setSenderZipCode("88303");

    testTwoDayPackage1.setRecipientName("Jesse Ventura");
    testTwoDayPackage1.setRecipientAddress("2323 Wrestle Mania Rd");
    testTwoDayPackage1.setRecipientCity("McMan");
    testTwoDayPackage1.setRecipientState("CA");
    testTwoDayPackage1.setRecipientZipCode("90210");

    testTwoDayPackage1.setWeight(1000.00);
    testTwoDayPackage1.setCostPerOunce(2.25);

    //after change testTwoDayPackage1
    cout<<"After changes to testTwoDayPackage1"<<endl<<endl;
    
    cout<<"Sender Name: "<<testTwoDayPackage1.getSenderName()<<endl;
    cout<<"Sender Address:"<<testTwoDayPackage1.getSenderAddress()<<" "<<testTwoDayPackage1.getSenderCity()
        <<", "<<testTwoDayPackage1.getSenderState()<<" "<<testTwoDayPackage1.getSenderZipCode()<<endl<<endl;

    cout<<"Recipient Name: "<<testTwoDayPackage1.getRecipientName()<<endl;
    cout<<"Recipient Address:"<<testTwoDayPackage1.getRecipientAddress()<<" "<<testTwoDayPackage1.getRecipientCity()
        <<", "<<testTwoDayPackage1.getRecipientState()<<" "<<testTwoDayPackage1.getRecipientZipCode()<<endl<<endl;
    cout<<"Package Weight: "<<testTwoDayPackage1.getWeight()<<" oz"<<endl;
    cout<<"Package Cost Per Ounce: $"<<testTwoDayPackage1.getCostPerOunce()<<endl;
    cout<<"Package Flat Fee: $"<<testTwoDayPackage1.getFlatFee()<<endl;
    cout<<"Cost to Ship: $"<<testTwoDayPackage1.calculateCost()<<endl<<endl;

}


