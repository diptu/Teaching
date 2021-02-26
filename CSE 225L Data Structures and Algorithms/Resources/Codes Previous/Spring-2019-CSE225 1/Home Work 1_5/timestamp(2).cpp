#include "timestamp.h"
#include <iostream>

TimeStamp::TimeStamp()
{
    hour=0;
    minute=0;
    second=0;
    length=0;
    currentPos=-1;
}

void TimeStamp::makeEmpty()
{
    length=0;
}

void TimeStamp::ResetList()
{
    currentPos=-1;
}

int TimeStamp::LengthIs()
{
    return length;
}

void TimeStamp::InsertTime(int sec, int mint, int hour)
{
    int location=0;
    while(location<length)
    {
        if(hour>hours[location])
            location++;
        else break;
    }
    for(int i=length-1;i>=location;i--)
    {
      hours[i+1]=hours[i];
      minutes[i+1]=minutes[i];
      secs[i+1]=secs[i];
    }
    hours[location]=hour;
    minutes[location]=mint;
    secs[location]=sec;
    length++;
}

void TimeStamp::DeleteTime(int sec,int mint,int hour)
{
    int location=0;
    if(hour!=hours[location] && mint!=minutes[location] && sec!=secs[location])
        location++;
    for(int i=location+1;i<length;i++)
    {
        hours[i-1]=hours[i];
        minutes[i-1]=minutes[i];
        secs[i-1]=secs[i];
    }
    length--;
}

void TimeStamp::GetNextItem(int& s,int& m,int& h)
{
    currentPos++;
    h=hours[currentPos];
    m=minutes[currentPos];
    s=secs[currentPos];
}
