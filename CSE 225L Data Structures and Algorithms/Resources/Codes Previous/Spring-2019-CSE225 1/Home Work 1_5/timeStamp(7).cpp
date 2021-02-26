#include<iostream>
#include "timeStamp.h"
using namespace std;

timeStamp::timeStamp()
{
    sec=minute=hour=0;
}

timeStamp::timeStamp(int s,int m,int h)
{
    sec=s;
    minute=m;
    hour=h;
}

int timeStamp::getHour()
{
    return hour;
}
void timeStamp::setHour(int h)
{
    hour=h;
}

int timeStamp::getminute()
{
    return minute;
}
void timeStamp::setminute(int m)
{
    minute=m;
}

int timeStamp::getSec()
{
    return sec;
}
void timeStamp::setSec(int s)
{
    sec=s;
}

void timeStamp::print()
{
    cout<<sec<<" "<<minute<<" "<<hour<<endl;
}

bool operator>(timeStamp &a,timeStamp &b)
{
    if(a.sec>b.sec)
    {
        if(a.minute>b.minute)

        {
            if(a.hour>b.hour)
                return true;
        }
    }
    else
        return false;
}

bool operator<(timeStamp &a, timeStamp &b)
{
    if(a.sec<b.sec)
    {
        if(a.minute<b.minute)

        {
            if(a.hour<b.hour)
                return true;
        }
    }
    else
        return false;
}

bool operator!=(timeStamp &a,timeStamp &b)
{
    if(a.sec!=b.sec)
    {
        if(a.minute!=b.minute)

        {
            if(a.hour!=b.hour)
                return true;
        }
    }
    else
        return false;
}
