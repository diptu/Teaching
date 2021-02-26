#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class StudentInfo {
    friend StudentInfo operator+(StudentInfo &s1, double &d);
    friend bool operator!=(StudentInfo &s1, StudentInfo &s2);
    friend bool operator==(StudentInfo &s1, StudentInfo &s2);
  public:
    StudentInfo();
    StudentInfo(int, string, float);

    void setId(int);
    void setName(string);
    void setCgpa(float);

    int getId();
    string getName();
    float getCgpa();

    void print();

  private:
    int id;
    string name;
    float cgpa;
};

#endif // STUDENTINFO_H_INCLUDED
