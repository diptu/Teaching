#include<string>
using namespace std;
#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

class Student {

private:

    string name;
    int id;
    float cgpa;
    string dept;

public:

    Student();

    Student(string n, int i, float c, string d);
      void print();
      int getId();
    string getName();
    };


    class StudentDB {
         Student st[100];
         int numSt;

    public:

        StudentDB();
        StudentDB(int n);

        void print();
        void add(Student s);
        int searchStudent(int id);
        int searchStudent(string name);
        Student getStudent(int i);
        void deleteStudent(int id);

        };

#endif

