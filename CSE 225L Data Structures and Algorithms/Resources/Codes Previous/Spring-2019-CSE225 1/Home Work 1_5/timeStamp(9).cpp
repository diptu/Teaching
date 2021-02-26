#include "timeStamp.h"
#include <iostream>
using namespace std;

timeStamp::timeStamp()
{
    seconds=minutes=hours;
}

timeStamp::timeStamp(int ss,int mm,int hh)
{
    seconds=ss;
    minutes=mm;
    hours=hh;
}

void timeStamp::PRINTALL()
{
        cout << seconds << ":" << minutes << ":" << hours<<endl;
}


//OPERATORS
bool operator>(timeStamp&a,timeStamp&b)
{
    if(((a.hours*60*60)+(a.minutes*60)+(a.seconds))>((b.hours*60*60)+(b.minutes*60)+(b.seconds)))
        return true;
}

bool operator!=(timeStamp &a,timeStamp &b)
{
    if(a.seconds!=b.seconds)
        return true;
    else if(a.minutes!=b.minutes)
        return true;
    else if(a.hours!=b.hours)
        return true;
    else return false;

}

bool operator==(timeStamp &a,timeStamp &b)
{
    if(a.seconds==b.seconds)
        {
            if(a.minutes==b.minutes)
            {
                if(a.hours==b.hours)
                    return true;
            }
        }
    else return false;
}


