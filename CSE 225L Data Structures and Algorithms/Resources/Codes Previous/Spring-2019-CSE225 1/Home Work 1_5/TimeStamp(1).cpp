#include "TimeStamp.h"
#include <iostream>
using namespace std;

TimeStamp::TimeStamp()
{
    sec = minutes = hours =0;
}
TimeStamp::TimeStamp(int s, int m, int h)
{
    sec = s;
    minutes = m;
    hours = h ;
}

int TimeStamp::getSec() const
{
    return sec;
}

void TimeStamp::setSec(int sec)
{
    TimeStamp::sec = sec;
}

int TimeStamp::getMinutes() const
{
    return minutes;
}

void TimeStamp::setMinutes(int minutes)
{
    TimeStamp::minutes = minutes;
}

int TimeStamp::getHours() const
{
    return hours;
}

void TimeStamp::setHours(int hours)
{
    TimeStamp::hours = hours;
}

void TimeStamp::print()
{
    cout<<getSec()<<":"<<getMinutes()<<":"<<getHours()<<endl;
}
