#include "student.h"
#include<bits/stdc++.h>
#define e 100

using namespace std;

string name[e];
int id[e];
float cgpa[e];
string dept[e];

void printInfo(int i)
{
    cout<<"name: "<<name[i]<<", "<<"iD: "<<id[i]<<", "<<"department: "<<dept[i]<<", "<<"CGPA: "<<cgpa[i]<<endl;
    cout<<endl;

}

void searchStudentInfo(string n)
{
    for(int i=0; i<e; i++)
    {
        if(n==name[i])
        {
            printInfo(i);
            break;
        }
        else
        cout<<"this name doesnt exist"<<endl;
        break;
    }

}

void searchStudentInfo(int n)
{
    for(int i=0; i<e; i++)
    {
        if(n==id[i])
        {
            printInfo(i);
            break;
        }
        else
        cout<<"this id doesnt exist"<<endl;
        break;
    }

}

Student::Student(string n, int i, float c, string d)
{
    name=n;
    id=i;
    cgpa=c;
    dept=d;
}

StudentDB::StudentDB(int n)
{
    int c=0;

    for(int i=1; i<=n; i++)
    {
        cout<<"student no:  " <<i<<endl;
        cout<<"name: ";
        cin>>name[c];
        cout<<"id: ";
        cin>>id[c];
        cout<<"cgpa: ";
        cin>>cgpa[c];
        cout<<"department: ";
        cin>>dept[c];
        cout<<endl;

        c++;
    }

    string name1;
    int id1;

    cout<<"enter a name to search in this student database: ";
    cin >> name1;
    searchStudentInfo(name1);

    cout<<"enter an ID to search in this student database: ";
    cin >> id1;
    searchStudentInfo(id1);
}



