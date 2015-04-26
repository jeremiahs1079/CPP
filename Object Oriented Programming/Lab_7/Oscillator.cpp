// CS 271 - lab assignment #7
// SimpleHarmonicOscillator
// Implemntation of Simple Harmonic Oscillator
// Jeremiah Smith
// March 10, 2015

#include "Oscillator.h"


//constructor
Oscillator::Oscillator()
{
    m_mass = 0;
    m_amplitude = 0;
    m_constantK = 0;
    m_phase = 0;
    m_time = 0;
}

Oscillator::Oscillator(double _mass, double _amplitude, double _constantK)
{
    m_mass = _mass;
    m_amplitude = _amplitude;
    m_constantK = _constantK;
}

//accessory functions
double Oscillator::getConstantK(){return m_constantK;}
double Oscillator::getMass(){return m_mass;}
double Oscillator::getAmplitude(){return m_amplitude;}
double Oscillator::getPhase(){return m_phase;}

//modification funtions
//precondition: constantK can not be negative
void Oscillator::setConstantK(double _constantK)
{
    if(_constantK >= 0)
        m_constantK = _constantK;
}

//precondition: mass can not be negative
void Oscillator::setMass(double _mass)
{
    if(_mass >= 0)
        m_mass = _mass;
}

void Oscillator::setAmplitude(double _amplitude)
{
    m_amplitude = _amplitude;
}

void Oscillator::setPhase(double _phase)
{
    m_phase = _phase;
}

//calss functions
double Oscillator::force(double _displacment)
{
    return (double)(-1 * (m_constantK * _displacment));
}

//precondition time can not be negative
double Oscillator::position(double _time)
{
    return (double)(m_amplitude * cos(sqrt(m_constantK/m_mass) * _time + m_phase));
}

double Oscillator::period()
{
    return (double)((2 * M_PI)/ sqrt(m_constantK/m_mass));
}
