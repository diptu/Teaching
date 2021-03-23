#include "studentInfo.h"

StudentInfo::StudentInfo()
{
    this->id = 0;
    this->name = "";
    this->cgpa = 0;
}

StudentInfo::StudentInfo(int id, string name, float cgpa)
{
    this->id = id;
    this->name = name;
    this->cgpa = cgpa;
}
void StudentInfo::setID(int id)
{
    this->id = id;
}
void StudentInfo::setName(string name)
{
    this->name = name;
}
void StudentInfo::setCGPA(float cgpa)
{
    this->cgpa = cgpa;
}
int StudentInfo::getID()
{
    return this->id;
}
string StudentInfo::getName()
{
    return this->name;
}
float StudentInfo::getCGPA()
{
    return this->cgpa;
}
void StudentInfo::Print()
{
    cout<<this->id<<" "<<this->name<<" "<<this->cgpa<<endl;
}
bool operator!=(StudentInfo &a,StudentInfo &b)
{
    if(a.getID()!=b.getID())
        return true;
    else return false;

}

bool operator==(StudentInfo &a,StudentInfo &b)
{
    if(a.getID()==b.getID())
        return true;
    else return false;

}
