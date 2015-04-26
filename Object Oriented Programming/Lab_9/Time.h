#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

class Time {

  private:
    int hour;
    int minute;
    int second;

  public:
    Time (int h = 0, int m = 0, int s = 0);
    void setHour( const int );
    void setMinute( const int );
    void setSecond( const int );
    int getHour ( );
    int getMinute ( );
    int getSecond ( );
    
    void print12HourTime( ); // print in standard 12-hour format
    void print24HourTime( ); // print in universal 24-hour format
 
};
#endif