#include "studentInfo.h"
#include <bits/stdc++.h>
using namespace std;

Student::Student(int i)
{
    name = "";
    id = i;
    cgpa = 0;
}

Student::Student(int i, string n, float c)
{
    name = n;
    id = i;
    cgpa = c;
}

bool Student::operator==(Student s1)
{
    if(id == s1.getID()){
        return true;
    }
    return false;
}

bool Student::operator!=(Student s1)
{
    if(id != s1.getID()){
        return true;
    }
    return false;
}

void Student::print()
{
    cout << name << ", " << id << ", " << cgpa << endl;
}


