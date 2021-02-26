#include "SortedType.h"
class timeStamp
{
    friend bool operator>(timeStamp&,timeStamp&);
    friend bool operator<(timeStamp&,timeStamp&);
    friend bool operator!=(timeStamp&,timeStamp&);

public:
    timeStamp();
    timeStamp(int, int, int);

    void setSec(int);
    int getSec();

    void setminute(int);
    int getminute();

    void setHour(int);
    int getHour();

    void print();

private:
    int minute,hour,sec;
};

