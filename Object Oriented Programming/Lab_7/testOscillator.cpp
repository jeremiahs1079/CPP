//
//  testOscillator.cpp
//  
//
//  Created by Jeremiah Smith on 3/10/15.
//
//

#include <iostream>
#include "Oscillator.h"

int main()
{   
    //testing 3 argument constructor
    std::cout<<"Testing the three argument constructor by creating oscillator1 with 1.0 in amplitude, mass and constantK"<<std::endl;
    Oscillator oscillator1(1.0, 1.0, 1.0);

    std::cout<<"Testing ascessory and period functions for oscillator1"<<std::endl;
    std::cout<<"The period for the harmonic oscillator with mass:"<<oscillator1.getMass()<<" constant: "<< oscillator1.getConstantK()
             <<" and amplitude: "<<oscillator1.getAmplitude()<<" is: "<<oscillator1.period()<<std::endl;

    std::cout<<"Testing position function for oscillator1"<<std::endl;
    std::cout<<"At time 2.34 seconds the osilators position will be: "<<oscillator1.position(2.34)<<std::endl;
    std::cout<<"At time 0 second sthe osilators position will be: "<<oscillator1.position(0.0)<<std::endl;
    std::cout<<"At time 10 seconds the osilators position will be: "<<oscillator1.position(10.0)<<std::endl;
    std::cout<<"At time 25 second sthe osilators position will be: "<<oscillator1.position(25.0)<<std::endl;

    //testing force function
    std::cout<<"Testing force function for oscillator1"<<std::endl;
    std::cout<<"The force applied to the mass with displacment 0.5 is: "<<oscillator1.force(0.5)<<std::endl;
    std::cout<<"The force applied to the mass with displacment -1 is: "<<oscillator1.force(-1.0)<<std::endl;



    //testing no argunment constructor
    Oscillator oscillator2;

    //testing accessory functions
    std::cout<<"The current values for amplitude, mass and constant K for oscillator2 are: "<<oscillator2.getAmplitude()
             <<", "<<oscillator2.getMass()<<" and "<<oscillator2.getConstantK()<<std::endl;

    //testing modification methods
    std::cout<<"Testing modification methods for oscillator2:"<<std::endl;
    std::cout<<"Setting oscillator2 amplitude to 7"<<std::endl;
    oscillator2.setAmplitude(7.0);
    std::cout<<"Setting oscillator2 mass to 5.78"<<std::endl;
    oscillator2.setMass(5.78);
    std::cout<<"Setting oscillator2 constant K to 10"<<std::endl;
    oscillator2.setConstantK(10.0);

    std::cout<<"Testing position function for oscillator2"<<std::endl;
    std::cout<<"At time 2.34 seconds the osilators position will be: "<<oscillator2.position(2.34)<<std::endl;
    std::cout<<"At time 0 second sthe osilators position will be: "<<oscillator2.position(0.0)<<std::endl;
    std::cout<<"At time 10 seconds the osilators position will be: "<<oscillator2.position(10.0)<<std::endl;
    std::cout<<"At time 25 second sthe osilators position will be: "<<oscillator2.position(25.0)<<std::endl;

    //testing force function
    std::cout<<"Testing force function for oscillator1"<<std::endl;
    std::cout<<"The force applied to the mass with displacment 3.25 is: "<<oscillator2.force(3.25)<<std::endl;
    std::cout<<"The force applied to the mass with displacment 7 is: "<<oscillator2.force(7.0)<<std::endl;

    

}
