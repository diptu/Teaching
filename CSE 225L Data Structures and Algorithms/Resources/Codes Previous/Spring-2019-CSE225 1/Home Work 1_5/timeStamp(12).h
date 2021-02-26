#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

class TimeStamp
{
    private:
        int hour;
        int minute;
        int second;
        long long totalSecond;

    public:
        TimeStamp() { hour=minute=second=0; totalSecond=0; }
        TimeStamp(int, int, int);
        bool operator>(TimeStamp);
        bool operator<(TimeStamp);
        bool operator==(TimeStamp);
        bool operator!=(TimeStamp);
        void print();
        long long getTotal() { return totalSecond; }
};
#endif
