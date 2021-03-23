#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED
#include<iostream>
using namespace std;
class StudentInfo
{
    friend bool operator!=(StudentInfo &a,StudentInfo &b);
    friend bool operator==(StudentInfo &a,StudentInfo &b);
private:
    int id;
    string name;
    float cgpa;
public:
    StudentInfo();
    StudentInfo(int, string, float);
    void setID(int);
    void setName(string);
    void setCGPA(float);
    int getID();
    string getName();
    float getCGPA();
    void Print();
};

#endif // STUDENTINFO_H_INCLUDED
