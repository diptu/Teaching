#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED
using namespace std;

class TimeStamp {
    friend bool operator>(TimeStamp &a, TimeStamp &b);
    friend bool operator<(TimeStamp &a, TimeStamp &b);
    friend bool operator!=(TimeStamp &a, TimeStamp &b);
    friend bool operator==(TimeStamp &a, TimeStamp &b);

    friend bool operator>(int a, TimeStamp &b);
    friend bool operator<(int a, TimeStamp &b);

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
