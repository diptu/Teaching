#include "student.h"
#include<iostream>
#include<string>
using namespace std;

Student::Student(string n, int i, float c, string d)
{
    name = n;
    id = i;
    cgpa = c;
    dept = d;
}

void Student::print()
{
    cout<<name<<", "<<id<<", "<<cgpa<<", "<<dept<<endl;
}

StudentDB::StudentDB(int n){

    numSt = 0;

    /*
    string nam; int id; float c; string d;

    cout << "Enter Students info: " << endl;
    for(int i=0; i<n; i++){
        cout << "Name : "; cin >> nam; getchar();
        cout << "ID   : "; cin >> id;
        cout << "CGPA : "; cin >> c;
        cout << "Dept : "; cin >> d;   getchar();

        Student s(nam, id, c, d);
        add(s);
    }
    */
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

Student StudentDB::getStudent(int i)
{
    return st[i];
}

void StudentDB::deleteStudent(int id)
{
    Student s;
    for(int i=0;i<numSt;i++){
        if(st[i].getId() == id){
            st[i] = s;
            break;
        }
    }

}

