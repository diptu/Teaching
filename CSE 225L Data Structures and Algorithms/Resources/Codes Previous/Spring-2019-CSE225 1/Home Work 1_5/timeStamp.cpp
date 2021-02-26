#include<iostream>
#include "timeStamp.h"
using namespace std;

timeStamp::timeStamp()
{
    sec=mint=hour=0;
}

timeStamp::timeStamp(int s, int m, int h)
{
    sec=s;
    mint=m;
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

int timeStamp::getMin()
{
    return mint;
}
void timeStamp::setMin(int m)
{
    mint=m;
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
    cout<<sec<<" "<<mint<<" "<<hour<<endl;
}

bool operator>(timeStamp &a, timeStamp &b)
{
    if(a.sec>b.sec)
    {
        if(a.mint>b.mint)

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
        if(a.mint<b.mint)

        {
            if(a.hour<b.hour)
                return true;
        }
    }
    else
        return false;
}

bool operator!=(timeStamp &a, timeStamp &b)
{
    if(a.sec!=b.sec)
    {
        if(a.mint!=b.mint)

        {
            if(a.hour!=b.hour)
                return true;
        }
    }
    else
        return false;
}
