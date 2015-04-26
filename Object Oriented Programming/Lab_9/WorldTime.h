#ifndef WORLDTIME_H
#define WORLDTIME_H
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <string>
#include "Time.h"
using namespace std;

class WorldTime : public Time {

  private:
    string timeZone;

  public:
    WorldTime (const string &, int = 0, int = 0, int = 0);
    void setTimeZone( const string & );
    string getTimeZone ( );
    
    void print12HourTime( ); // print in standard 12-hour format
    void print24HourTime( ); // print in universal 24-hour format
 
};
#endif