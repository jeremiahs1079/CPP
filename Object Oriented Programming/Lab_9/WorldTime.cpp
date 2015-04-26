// CS 271 - lab assignment #9
// WorldTime.cpp
// Implmetation for the world time class
// Jeremiah Smith
// April 10, 2015

#include "WorldTime.h"

WorldTime::WorldTime(const string &timeZone,int h, int m, int s) : Time(h, m, s)
{
    setTimeZone(timeZone);
}

void WorldTime::setTimeZone(const string &tZone)
{
    if((tZone == "EDT") || (tZone == "EST") || (tZone == "CDT") || (tZone == "CST") || (tZone == "MDT") || (tZone == "MST") || (tZone == "PDT") || (tZone == "PST"))
        timeZone = tZone;
  
}

string WorldTime::getTimeZone()
{
    return timeZone;
}

void WorldTime::print12HourTime()
{
    Time::print12HourTime();
    cout<<"  "<<timeZone;
}

void WorldTime::print24HourTime()
{
    Time::print24HourTime();
    cout<<"  "<<timeZone;
}