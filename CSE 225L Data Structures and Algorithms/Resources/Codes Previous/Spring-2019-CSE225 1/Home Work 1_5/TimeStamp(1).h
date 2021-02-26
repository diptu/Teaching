
#ifndef LAB5_TIMESTAMP_H
#define LAB5_TIMESTAMP_H


class TimeStamp {
private:
    int sec ;
    int minutes;
    int hours;
public:
    TimeStamp();
    TimeStamp(int,int,int);
    void print();

    int getSec() const;

    void setSec(int sec);

    int getMinutes() const;

    void setMinutes(int minutes);

    int getHours() const;

    void setHours(int hours);


};


#endif //LAB5_TIMESTAMP_H

