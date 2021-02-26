#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

#include <iostream>
using namespace std;


class timeStamp{
    friend bool operator>(timeStamp&,timeStamp&);
    friend timeStamp operator<(timeStamp&,timeStamp&);
    friend bool operator!=(timeStamp&,timeStamp&);
    friend bool operator==(timeStamp&,timeStamp&);


    public:
    timeStamp();
    timeStamp(int,int,int);
    void PRINTALL();


    private:
    int seconds,hours,minutes;


};


#endif // TIMESTAMP_H_INCLUDED


