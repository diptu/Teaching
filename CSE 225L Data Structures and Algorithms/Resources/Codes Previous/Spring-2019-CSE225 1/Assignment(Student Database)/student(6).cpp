#include "student.h"
#include<iostream>
#include<string>
using namespace std;

Student::Student(string n, int i,
                 float c, string d)
{
    name = n;
    id = i;
    cgpa = c;
    dept = d;
}

void Student::print()
{
    cout<<"Name: "<<name<<" "<<"ID: "<<id<<" "<<"CGPA: "<<cgpa<<" "<<"Dept: "<<dept<<endl;
}

StudentDB::StudentDB(int n)
{
    input_n = n;
}

void StudentDB::printinfo(int index)
{
    if(index != -1)
    {
        st[index].print();
    }
}

void StudentDB::print()
{
    for(int i=0;i<numSt;i++){
        st[i].print();
    }
}

void StudentDB::add(Student s)
{
    st[numSt] = s;
    numSt++;
}

int StudentDB::searchStudent(int id)
{
    for(int i=0;i<numSt;i++){
        if(st[i].getId() == id)
            return i;
    }
    return -1;
}

int StudentDB::searchStudent(string name)
{
    for(int i=0;i<numSt;i++){
        if(st[i].getName() == name)
            return i;
    }
    return -1;
}
