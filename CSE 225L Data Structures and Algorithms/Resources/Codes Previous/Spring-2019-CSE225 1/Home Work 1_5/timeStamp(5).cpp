#include "timeStamp.h"
#include <iostream>
using namespace std;

TimeStamp::TimeStamp()
{
    seconds = minutes = hours =0;
}
TimeStamp::TimeStamp(int s, int m, int h)
{
    seconds = s;
    minutes = m;
    hours = h ;
}

int TimeStamp::getSeconds()
{
    return seconds;
}

void TimeStamp::setSeconds(int seconds)
{
    TimeStamp::seconds = seconds;
}

int TimeStamp::getMinutes()
{
    return minutes;
}

void TimeStamp::setMinutes(int minutes)
{
    TimeStamp::minutes = minutes;
}

int TimeStamp::getHours()
{
    return hours;
}

void TimeStamp::setHours(int hours)
{
    TimeStamp::hours = hours;
}

void TimeStamp::print()
{
    cout<<getSeconds()<<":"<<getMinutes()<<":"<<getHours()<<endl;
}
