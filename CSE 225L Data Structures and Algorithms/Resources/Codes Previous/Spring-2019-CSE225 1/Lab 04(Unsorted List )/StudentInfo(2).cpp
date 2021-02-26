#include "StudentInfo.h"
StudentInfo::StudentInfo()
{
    id=cgpa=0;
    name = "";
}

StudentInfo::StudentInfo(int i, string n, float c)
{
    id = i;
    name = n;
    cgpa = c;
}

void StudentInfo::print()
{
    cout<<id<<" "<<name<<" "<<cgpa<<endl;
}





