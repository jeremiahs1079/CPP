// CS 271 - lab assignment #9
// TimeTest
// Test program for time class
// Jeremiah Smith
// April 10, 2015

#include "Time.h"
#include "WorldTime.h"

int main()
{

    cout<<"*****Begin testing time objects*****"<<endl;   
    //creating 4 time objects, one default and three with argunments
    cout<<"Declaring 4 Time objects: time1, time2, time3 and time4"<<endl<<endl;
    Time time1;
    Time time2(12);
    Time time3(17,45);
    Time time4(11,20,45);

    //testing print functions on each time object
    //time1 object
    cout<<"Testing both print12HourTime and print24HourTime on time1 before mutators:"<<endl;
    cout<<"time1 12 hour: ";
    time1.print12HourTime();
    cout<<endl<<"time1 24 hour: ";
    time1.print24HourTime();
    cout<<endl;

    //time2 object
    cout<<"Testing both print12HourTime and print24HourTime on time2 before mutators:"<<endl;
    cout<<"time2 12 hour: ";
    time2.print12HourTime();
    cout<<endl<<"time2 24 hour: ";
    time2.print24HourTime();
    cout<<endl;

    //time3 object
    cout<<"Testing both print12HourTime and print24HourTime on time3 before mutators:"<<endl;
    cout<<"time3 12 hour: ";
    time3.print12HourTime();
    cout<<endl<<"time3 24 hour: ";
    time3.print24HourTime();
    cout<<endl;

    //time4 object
    cout<<"Testing both print12HourTime and print24HourTime on time4 before mutators:"<<endl;
    cout<<"time4 12 hour: ";
    time4.print12HourTime();
    cout<<endl<<"time4 24 hour: ";
    time4.print24HourTime();
    cout<<endl;

    //testing accessors for time objects
    //time1
    cout<<"time1 current hour: "<<time1.getHour()<<endl;
    cout<<"time1 current minute: "<<time1.getMinute()<<endl;
    cout<<"time1 current second: "<<time1.getSecond()<<endl;

    //time2
    cout<<"time2 current hour: "<<time2.getHour()<<endl;
    cout<<"time2 current minute: "<<time2.getMinute()<<endl;
    cout<<"time2 current second: "<<time2.getSecond()<<endl;

    //time3
    cout<<"time3 current hour: "<<time3.getHour()<<endl;
    cout<<"time3 current minute: "<<time3.getMinute()<<endl;
    cout<<"time3 current second: "<<time3.getSecond()<<endl;

    //time4
    cout<<"time4 current hour: "<<time4.getHour()<<endl;
    cout<<"time4 current minute: "<<time4.getMinute()<<endl;
    cout<<"time4 current second: "<<time4.getSecond()<<endl;

    //testing mutators for time object
    //time1
    cout<<"Setting time1 hour to 23:"<<endl;
    time1.setHour(23);
    cout<<"Setting time1 minute to 40:"<<endl;
    time1.setMinute(40);
    cout<<"Setting time1 second to 33:"<<endl;
    time1.setSecond(33);
    cout<<"Printing time1 after changes:"<<endl;
    cout<<"12 hour time: ";
    time1.print12HourTime();
    cout<<endl;
    cout<<"24 Hour Time: ";
    time1.print24HourTime();
    cout<<endl<<endl;

    //time2
    cout<<"Setting time2 hour to 9:"<<endl;
    time2.setHour(9);
    cout<<"Setting time2 minute to 20:"<<endl;
    time2.setMinute(20);
    cout<<"Setting time2 second to 45:"<<endl;
    time2.setSecond(45);
    cout<<"Printing time2 after changes:"<<endl;
    cout<<"12 hour time: ";
    time2.print12HourTime();
    cout<<endl;
    cout<<"24 Hour Time: ";
    time2.print24HourTime();
    cout<<endl<<endl;

    //time3
    cout<<"Setting time3 hour to 10:"<<endl;
    time3.setHour(10);
    cout<<"Setting time3 minute to 55:"<<endl;
    time3.setMinute(55);
    cout<<"Setting time3 second to 49:"<<endl;
    time3.setSecond(49);
    cout<<"Printing time3 after changes:"<<endl;
    cout<<"12 hour time: ";
    time3.print12HourTime();
    cout<<endl;
    cout<<"24 Hour Time: ";
    time3.print24HourTime();
    cout<<endl<<endl;

    //time4
    cout<<"Setting time4 hour to 7:"<<endl;
    time4.setHour(7);
    cout<<"Setting time4 minute to 12:"<<endl;
    time4.setMinute(12);
    cout<<"Setting time4 second to 37:"<<endl;
    time4.setSecond(37);
    cout<<"Printing time4 after changes:"<<endl;
    cout<<"12 hour time: ";
    time4.print12HourTime();
    cout<<endl;
    cout<<"24 Hour Time: ";
    time4.print24HourTime();
    cout<<endl<<endl;


    //begin testing WorldTime
    cout<<"*****Begin testing WorldTime objects*****"<<endl<<endl;

    //declaring 4 WorldTime objects
    cout<<"Declaring 4 WorldTime objects: wt1, wt2, wt3 and wt4"<<endl<<endl;
    WorldTime wt1("EDT");
    WorldTime wt2("CDT",22);
    WorldTime wt3("MDT", 13, 22);
    WorldTime wt4("PDT", 10, 39, 45);


    //testing WorldTime object print12HourTime and print24HourTime
    //wt1
    cout<<"Testing wt1 print12HourTime and print24HourTime"<<endl;
    cout<<"wt1 12 hour: ";
    wt1.print12HourTime();
    cout<<endl<<"wt2 24 hour: ";
    wt1.print24HourTime();
    cout<<endl<<endl;

    //wt2
    cout<<"Testing wt2 print12HourTime and print24HourTime"<<endl;
    cout<<"wt2 12 hour: ";
    wt2.print12HourTime();
    cout<<endl<<"wt2 24 hour:";
    wt2.print24HourTime();
    cout<<endl<<endl;

    //wt3
    cout<<"Testing wt3 print12HourTime and print24HourTime"<<endl;
    cout<<"wt3 12 hour: ";
    wt3.print12HourTime();
    cout<<endl<<"wt3 24 hour: ";
    wt3.print24HourTime();
    cout<<endl<<endl;

    //wt4
    cout<<"Testing wt4 print12HourTime and print24HourTime"<<endl;
    cout<<"wt4 12 hour: ";
    wt4.print12HourTime();
    cout<<endl<<"wt4 24 hour: ";
    wt4.print24HourTime();
    cout<<endl<<endl;

    //testing WorldTime mutator
    //wt1
    cout<<"Setting wt1 time zone to EST"<<endl;
    wt1.setTimeZone("EST");
    cout<<"wt1 12 hour: ";
    wt1.print12HourTime();
    cout<<endl<<"wt2 24 hour: ";
    wt1.print24HourTime();
    cout<<endl<<endl;

    //wt2
    cout<<"Setting wt2 time zone to CST"<<endl;
    wt2.setTimeZone("CST");
    cout<<"wt2 12 hour: ";
    wt2.print12HourTime();
    cout<<endl<<"wt2 24 hour: ";
    wt2.print24HourTime();
    cout<<endl<<endl;

    //wt3
    cout<<"Setting wt3 time zone to MST"<<endl;
    wt3.setTimeZone("MST");
    cout<<"wt3 12 hour: ";
    wt3.print12HourTime();
    cout<<endl<<"wt2 24 hour: ";
    wt3.print24HourTime();
    cout<<endl<<endl;

    //wt4
    cout<<"Setting wt4 time zone to PST"<<endl;
    wt4.setTimeZone("PST");
    cout<<"wt4 12 hour: ";
    wt4.print12HourTime();
    cout<<endl<<"wt2 24 hour: ";
    wt4.print24HourTime();
    cout<<endl<<endl;

    //testing accessor for WorldTime objects
    cout<<"Testing WorldTime accessors"<<endl<<endl;
    cout<<"wt1 current time zone is: "<<wt1.getTimeZone()<<endl;
    cout<<"wt2 current time zone is: "<<wt2.getTimeZone()<<endl;
    cout<<"wt3 current time zone is: "<<wt3.getTimeZone()<<endl;
    cout<<"wt4 current time zone is: "<<wt4.getTimeZone()<<endl;


    //testing inherited mutators
    cout<<"Testing WorldTime objects inherited mutatotrs"<<endl<<endl;

    //wt1
    cout<<"Setting wt1 hour to 9:"<<endl;
    cout<<"Setting wt1 minute to 20:"<<endl;
    cout<<"Setting wt1 second to 45:"<<endl<<endl;
    cout<<"wt1 before changes"<<endl;
    cout<<"12 hour time: ";
    wt1.print12HourTime();
    cout<<endl;
    cout<<"24 Hour Time: ";
    wt1.print24HourTime();
    cout<<endl<<endl;
    wt1.setHour(9);
    wt1.setMinute(20);
    wt1.setSecond(45);
    cout<<"Printing wt1 after changes:"<<endl;
    cout<<"12 hour time: ";
    wt1.print12HourTime();
    cout<<endl;
    cout<<"24 Hour Time: ";
    wt1.print24HourTime();
    cout<<endl<<endl;

    //wt2
    cout<<"Setting wt2 hour to 20:"<<endl;
    cout<<"Setting wt2 minute to 35:"<<endl;
    cout<<"Setting wt2 second to 22:"<<endl<<endl;
    cout<<"wt2 before changes"<<endl;
    cout<<"12 hour time: ";
    wt2.print12HourTime();
    cout<<endl;
    cout<<"24 Hour Time: ";
    wt2.print24HourTime();
    cout<<endl<<endl;
    wt2.setHour(20);
    wt2.setMinute(35);
    wt2.setSecond(22);
    cout<<"Printing wt2 after changes:"<<endl;
    cout<<"12 hour time: ";
    wt2.print12HourTime();
    cout<<endl;
    cout<<"24 Hour Time: ";
    wt2.print24HourTime();
    cout<<endl<<endl;

    //wt3
    cout<<"Setting wt3 hour to 10:"<<endl;
    cout<<"Setting wt3 minute to 43:"<<endl;
    cout<<"Setting wt3 second to 33:"<<endl<<endl;
    cout<<"wt3 before changes"<<endl;
    cout<<"12 hour time: ";
    wt3.print12HourTime();
    cout<<endl;
    cout<<"24 Hour Time: ";
    wt3.print24HourTime();
    cout<<endl<<endl;
    wt3.setHour(12);
    wt3.setMinute(43);
    wt3.setSecond(33);
    cout<<"Printing wt3 after changes:"<<endl;
    cout<<"12 hour time: ";
    wt3.print12HourTime();
    cout<<endl;
    cout<<"24 Hour Time: ";
    wt3.print24HourTime();
    cout<<endl<<endl;

    //wt1
    cout<<"Setting wt1 hour to 8:"<<endl;
    cout<<"Setting wt1 minute to 12:"<<endl;
    cout<<"Setting wt1 second to 52:"<<endl<<endl;
    cout<<"wt1 before changes"<<endl;
    cout<<"12 hour time: ";
    wt1.print12HourTime();
    cout<<endl;
    cout<<"24 Hour Time: ";
    wt1.print24HourTime();
    cout<<endl<<endl;
    wt1.setHour(8);
    wt1.setMinute(12);
    wt1.setSecond(52);
    cout<<"Printing wt1 after changes:"<<endl;
    cout<<"12 hour time: ";
    wt1.print12HourTime();
    cout<<endl;
    cout<<"24 Hour Time: ";
    wt1.print24HourTime();
    cout<<endl<<endl;









    return 0;
}
