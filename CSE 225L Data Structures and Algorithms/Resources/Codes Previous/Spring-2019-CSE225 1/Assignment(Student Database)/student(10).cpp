#include "student.h"
#include<iostream>
#include<string>
#include<stdio.h>
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
    cout<<"Name: "<<name<<" "<<"ID: "<<id<<" "<<"CGPA: "<<cgpa<<" "<<"Department: "<<dept<<endl;
}

StudentDB::StudentDB(int n)
{
    string na[n]; int ia[n]; float ca[n]; string da[n];
   for(int i=0; i<n; i++)
   {
       cout<<"Enter the information of student no."<<i+1<<endl;
       cout<<"Name: "<<endl;
       cin>>na[i];
       cout<<"Id: "<<endl;
       cin>>ia[i];
       cout<<"Cgpa: "<<endl;
       cin>>ca[i];
       cout<<"Dept: "<<endl;
       cin>>da[i];
       cout<<endl;

       st[i].setName(na[i]);
       st[i].setId(ia[i]);
       st[i].setCgpa(ca[i]);
       st[i].setDept(da[i]);

       numSt=+n;
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
            {
                return i;
            }
    }
    return -1;
}

int StudentDB::searchStudent(string name)
{
    for(int i=0;i<numSt;i++){
        if(st[i].getName() == name)
            {
                return i;
            }
    }
    return -1;
}

Student StudentDB::getStudent(int i)
{
    Student temp;
    for(int j=0; j<numSt; j++)
    {
        if(i==j)
            temp.setName(st[i].getName());
            temp.setId(st[i].getId());
            temp.setCgpa(st[i].getCgpa());
            temp.setDept(st[i].getDept());

            return temp;
    }
}

void StudentDB::deleteStudent(int id)
{
    for(int i=0; i<numSt; i++)
    {
        if(id==st[i].getId())
        {
            Student *p=&st[i];
            delete p;
        }
    }
}
