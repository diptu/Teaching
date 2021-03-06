#include<string>
using namespace std;

#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

class Student
{
private:
    string name;
    int id;
    float cgpa;
    string dept;

public:
    Student()
    {
        id=cgpa=0;
        name=dept="";
    }
    Student(string n, int i, float c, string d);
    void print();//prints the info a student object
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
};

class StudentDB
{
    int input_n;
    Student st[100];//array of Student objects
    int numSt;//number of actual Student objects in st array
public:
    StudentDB(){numSt=0;}   //default constructor

    //constructor that fills up first n elements of st array
    //by reading info of n students from user
    StudentDB(int n);

    //prints the info of all students in st array
    void print();

    //add a student in st array
    void add(Student s);

    //search a student in st array and returns its index;
    //returns -1, if not found
    int searchStudent(int id);
    int searchStudent(string name);
    //returns the student object at index i of st array
    Student getStudent(int i);
    //delete the student whose student_id is id
    void deleteStudent(int id);
    void printinfo(int index);
};

#endif // STUDENT

