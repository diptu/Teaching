#include "StudentInfo.h"
#include <iostream>
using namespace std;

Student :: Student()
{
    ID = 0;
    name = "";
    GPA = 0;
}

Student :: Student(int ID, string name, double GPA)
{
    this -> ID = ID;
    this -> name = name;
    this -> GPA = GPA;
}

void Student :: setStudent(int ID, string name, double GPA)
{
    this -> ID = ID;
    this -> name = name;
    this -> GPA = GPA;
}

void Student :: print()
{
    cout << "ID : " << ID << endl;
    cout << "Name : " << name << endl;
    cout << "GPA : " << GPA << endl << endl;
}

