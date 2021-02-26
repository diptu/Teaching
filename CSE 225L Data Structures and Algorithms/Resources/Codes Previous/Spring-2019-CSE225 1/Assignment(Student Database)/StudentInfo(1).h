#ifndef STUDENTINFO_H
#define STUDENTINFO_H

#include <string>
using namespace std;

class Student
{
    public:
        int ID;
        string name;
        double GPA;
        Student();
        Student(int ID, string name, double GPA);
        void setStudent(int ID, string name, double GPA);
        void print();
};
#endif

