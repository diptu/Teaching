#include "student.h"
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    StudentDB db(6);

    string uname;
    cout<<"Enter a name: ";
    cin>>uname;

    int sbn=db.searchStudent(uname);
    for(int i=0; i<6; i++)
    {
        if(sbn==i)
           {
               Student s1=db.getStudent(sbn);
               s1.print();
           }
    }

    int k;
    cout<<"Enter ID of student you want to find: ";
    cin>>k;

    int f=db.searchStudent(k);

    for(int i=0; i<6; i++)
    {
        if(i==f)
            {
                Student s2=db.getStudent(f);
                s2.print();
            }
    }

}
