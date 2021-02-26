#include "timeStamp.h"
#include <iostream>
using namespace std;

TimeStamp::TimeStamp(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
    totalSecond = (((h*60)+m)*60)+s;
}

bool TimeStamp::operator>(TimeStamp t)
{
    if(totalSecond > t.getTotal()){ return true; }
    else{
        return false;
    }
}

bool TimeStamp::operator<(TimeStamp t)
{
    if(totalSecond < t.getTotal()){ return true; }
    else{
        return false;
    }
}

bool TimeStamp::operator==(TimeStamp t)
{
    if(totalSecond == t.getTotal()){ return true; }
    else{
        return false;
    }
}

bool TimeStamp::operator!=(TimeStamp t)
{
    if(totalSecond != t.getTotal()){ return true; }
    else{
        return false;
    }
}


void TimeStamp::print()
{
    if(hour<10){ cout << "0" << hour << ":"; }
    else{
        cout << hour << ":";
    }
    if(minute<10){ cout << "0" << minute << ":"; }
    else{
        cout << minute << ":";
    }
    if(second<10){ cout << "0" << second << endl; }
    else{
        cout << second << endl;
    }

}




