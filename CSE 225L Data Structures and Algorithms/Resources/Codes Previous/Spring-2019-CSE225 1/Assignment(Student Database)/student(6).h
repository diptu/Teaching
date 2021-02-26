#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class Student {
  private:
    string name;
    int id;
    float cgpa;
    string dept;

  public:
    Student();
    Student(string n, int i, float c, string d);
    void print();   // prints info of a student object

    string getName();
    int getId();
    float getCgpa();
    string getDept();

    void setName(string n);
    void setId(int i);
    void setCgpa(float c);
    void setDept(string d);
};

#endif // STUDENT_H_INCLUDED
