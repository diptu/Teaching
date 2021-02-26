#include <string>
#include <iostream>
using namespace std;
#include "student.h"

Student::Student(string n,int i, float c, string d)
{
    setName(n);
    setID(i);
    setCGPA(c);
    setDept(d);
   // cout<< "constrcted!";
}

void Student::print()
{
    cout << "Name: " << name << "\nID: " << id << "\nCGPA: " << cgpa << "\nDept: " << dept << endl;
}

/* STUDENT DATABASE FUNCTION DEFINITIONS */


void StudentDB::add(Student s)
{
    /// SHOMOSSHAAAA! ARGHHH!
    st[numSt]=s;
    numSt++;

}


//implementing constructor that adds first n students in database
StudentDB::StudentDB(int n)
{   string nm; int id; float c; string d;
    for(int i=0;i<n;i++)
    {
        cout << "Student" << i+1 << " info: \n";

        cout << "Enter Name: ";  cin  >> nm ;
        cout << "Enter ID: ";    cin >> id;
        cout << "Enter CGPA: ";    cin >> c;
        cout << "Enter DEPARTMENT: "; cin >> d;
        Student a(nm,id,c,d);
        add(a);                     // HERE'S THE PROBLEM!

    }
}

void StudentDB::print()
{
    for(int i=0;i<numSt;i++)
    {
        st[i].print();
    }
}



int StudentDB::searchStudent(int id)
{
    for(int i=0;i<numSt;i++)
    {
        if(st[i].getId()==id)
            return i;
    }
    return -1;
}

int StudentDB::searchStudent(string name)
{
    for(int i=0;i<numSt;i++)
    {
        if(st[i].getName()==name)
            return i;
    }
    return -1;
}

Student StudentDB::getStudent(int i)
{
    return st[i];
}

void StudentDB::deleteStudent(int id)
{
    Student* temp = &st[id];
    delete [] temp;
    numSt--;
}
