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
