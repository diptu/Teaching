#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED
using namespace std;

class TimeStamp
{
    public:
        TimeStamp();
        TimeStamp(int, int, int);

        void setSecond(int);
        void setMinute(int);
        void setHour(int);

        int getSecond();
        int getMinute();
        int getHour();

        void print();

    private:
        int second;
        int minute;
        int hour;
};

#endif // TIMESTAMP_H_INCLUDED
