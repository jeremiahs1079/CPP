#ifndef OSCILLATOR_H
#define OSCILLATOR_H

#include <math.h>

class Oscillator
{
public:
    //constructor
    Oscillator();
    Oscillator(double, double, double);

    //get functions
    double getConstantK();
    double getAmplitude();
    double getMass();

    double getPhase();
    double getTime();

    //set functions
    void setConstantK(double);
    void setAmplitude(double);
    void setMass(double);

    void setPhase(double);
    
    //class functions
    double force(double);
    double position(double);
    double period();

private:
    double m_mass;
    double m_amplitude;
    double m_constantK;
    
    double m_phase;
};

#endif