#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED


const int MAX_ITEMS=5;

class TimeStamp
{
public:
    TimeStamp();
    void makeEmpty();
    void ResetList();
    int LengthIs();
    void InsertTime(int,int,int);
    void DeleteTime(int,int,int);
    void GetNextItem(int&,int&,int&);

private:
    int hour,minute,second;
    int length;
    int currentPos;
    int hours[MAX_ITEMS];
    int minutes[MAX_ITEMS];
    int secs[MAX_ITEMS];
};
#endif // TIMESTAMP_H_INCLUDED
