#ifndef LAB5_TIMESTAMP_H
#define LAB5_TIMESTAMP_H


class TimeStamp {
private:
    int seconds ;
    int minutes;
    int hours;
public:
    TimeStamp();
    TimeStamp(int,int,int);
    void print();

    int getSeconds();

    void setSeconds(int seconds);

    int getMinutes();

    void setMinutes(int minutes);

    int getHours();

    void setHours(int hours);

};


#endif //LAB5_TIMESTAMP_H

