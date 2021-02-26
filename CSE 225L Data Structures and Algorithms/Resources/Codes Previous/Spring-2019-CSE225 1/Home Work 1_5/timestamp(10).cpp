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
void TimeStamp::print()
{
    cout << second << ":" << minute << ":" << hour << endl;
}
