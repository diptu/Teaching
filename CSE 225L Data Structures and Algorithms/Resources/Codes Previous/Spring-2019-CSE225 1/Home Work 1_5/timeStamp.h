#include "SortedType.h"
class timeStamp
{
    friend bool operator>(timeStamp&, timeStamp&);
    friend bool operator<(timeStamp&, timeStamp&);
    friend bool operator!=(timeStamp&, timeStamp&);
   // friend bool operator==(timeStamp&, timeStamp&);

public:
    timeStamp();
    timeStamp(int, int, int);

    void setSec(int);
    int getSec();

    void setMin(int);
    int getMin();

    void setHour(int);
    int getHour();

    void print();
   // friend void InsertItem>(timeStamp);
    //void DeleteItem(timeStamp);

private:
    int mint, hour, sec;
};

