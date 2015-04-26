#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "Time.h"

using namespace std;

   // default constructor

   Time::Time (int h, int m, int s) {
      
     setHour(h);
     setMinute(m);
     setSecond(s);
   }

   // mutator for hour

   void Time::setHour( const int h ) {
      if (h >= 0 && h < 24 )
         hour = h;
      else
         hour = 0;
   }
   
   // mutator for minute

   void Time::setMinute( const int m ) {
      if (m >= 0 && m <= 59)
         minute = m;
      else
         minute = 0;
   }

   // mutator for second

   void Time::setSecond( const int s) {
      if (s >= 0 && s <= 59)
         second = s;
      else
         second = 0;
   }

   // accessor for hour

   int Time::getHour ( ) {
      return hour;
   }

   // accessor for minute

   int Time::getMinute ( ) {
      return minute;
   }

   // accessor for second

   int Time::getSecond ( ) {
       return second;
   }

   void Time::print12HourTime()
   {
      cout<<setfill('0')<<setw(2)<<((getHour() == 0 || getHour() == 12)? 12 : getHour() % 12)<<":"<<setw(2)<<getMinute()
          <<":"<<setw(2)<<getSecond()<<" "<<(getHour() < 12 ? "AM" : "PM");
   }

   void Time::print24HourTime()
   {
      cout<<setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();
   }