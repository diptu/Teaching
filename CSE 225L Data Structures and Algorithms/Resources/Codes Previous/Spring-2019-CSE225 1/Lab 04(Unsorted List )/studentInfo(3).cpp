#include <string>
#include <string.h>
#include "studentInfo.h"
#include "unsortedtype.cpp"
using namespace std;

studentInfo::studentInfo()
{
    name=""; ID=0; CGPA=0;
}

studentInfo::studentInfo(string n,int id,double cgpa)
{
    name=n;
    ID=id;
    CGPA=cgpa;
}

void studentInfo::PrintStudentInfo()
{
    cout<<ID<<","<<name<<","<<CGPA<<endl;
}

/*Getters and Setters*/
int studentInfo::getID()
{
    return ID;
}
string studentInfo::getName()
{
    return name;
}
double studentInfo::getCGPA()
{
    return CGPA;
}
void studentInfo::setID(int id)
{
    ID=id;
}
void studentInfo::setName(string n)
{
    name=n;
}
void studentInfo::setCGPA(double cgpa)
{
    CGPA=cgpa;
}


studentInfo operator+(studentInfo &a,double &cgpa)
{
    double temp=a.getCGPA();
    a.setCGPA((temp+cgpa));
    return a;
}

bool operator!=(studentInfo &a,studentInfo &b)
{
    if(a.getID()!=b.getID())
        return true;
    else return false;

}
bool operator==(studentInfo &a,studentInfo &b)
{
    if(a.getID()==b.getID())
        return true;
    else return false;

}

/*void operator=(studentInfo &a,studentInfo &b)
{
    int tempID; double tempCGPA; string tempName;

    tempID=b.getID();
    tempCGPA=b.getCGPA();
    tempName=b.getName();

    a.ID=tempID;
    a.CGPA=tempCGPA;
    a.Name=tempName;

}*/

