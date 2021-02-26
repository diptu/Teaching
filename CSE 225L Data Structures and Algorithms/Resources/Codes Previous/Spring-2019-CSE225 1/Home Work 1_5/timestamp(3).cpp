#include "timestamp.h"
#include "sortedtype.h"

TimeStamp::TimeStamp() {
    second = 0;
    minute = 0;
    hour = 0;
}
TimeStamp::TimeStamp(int s, int m, int h) {
    second = s;
    minute = m;
    hour = h;
}
void TimeStamp::setSecond(int s) {
    second = s;
}
void TimeStamp::setMinute(int m) {
    minute = m;
}
void TimeStamp::setHour(int h) {
    hour = h;
}
int TimeStamp::getSecond() {
    return second;
}
int TimeStamp::getMinute() {
    return minute;
}
int TimeStamp::getHour() {
    return hour;
}
void TimeStamp::print() {
    cout << second << ":" << minute << ":" << hour << endl;
}

bool operator>(int a, TimeStamp &b){
    TimeStamp t2;
    t2.second = b.second + (b.minute * 60) + (b.hour * 3600);
    if(a > t2.second){
        return true;
    }
    else{
        return false;
    }
}
bool operator<(int a, TimeStamp &b){
    TimeStamp t2;
    t2.second = b.second + (b.minute * 60) + (b.hour * 3600);
    if(a < t2.second){
        return true;
    }
    else{
        return false;
    }
}

bool operator>(TimeStamp &a, TimeStamp &b){
    TimeStamp t1, t2;
    t1.second = a.second + (a.minute * 60) + (a.hour * 3600);
    t2.second = b.second + (b.minute * 60) + (b.hour * 3600);
    if(t1.second > t2.second){
        return true;
    }
    else{
        return false;
    }
}
bool operator<(TimeStamp &a, TimeStamp &b){
    TimeStamp t1, t2;
    t1.second = a.second + (a.minute * 60) + (a.hour * 3600);
    t2.second = b.second + (b.minute * 60) + (b.hour * 3600);
    if(t1.second < t2.second){
        return true;
    }
    else{
        return false;
    }
}
bool operator!=(TimeStamp &a, TimeStamp &b){
    TimeStamp t1, t2;
    t1.second = a.second + (a.minute * 60) + (a.hour * 3600);
    t2.second = b.second + (b.minute * 60) + (b.hour * 3600);
    if(t1.second != t2.second){
        return true;
    }
    else{
        return false;
    }
}

bool operator==(TimeStamp &a, TimeStamp &b){
    TimeStamp t1, t2;
    t1.second = a.second + (a.minute * 60) + (a.hour * 3600);
    t2.second = b.second + (b.minute * 60) + (b.hour * 3600);
    if(t1.second == t2.second){
        return true;
    }
    else{
        return false;
    }
}

