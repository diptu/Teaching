#include<string>
using namespace std;

#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED

class Student
{
    private:
        string name;
        int id;
        float cgpa;

    public:
        Student() { id=cgpa=0; name=""; }
        Student( int );
        Student(int , string , float );
        bool operator==(Student);
        bool operator!=(Student);
        void print();
        int getID() { return id; }
};
#endif
