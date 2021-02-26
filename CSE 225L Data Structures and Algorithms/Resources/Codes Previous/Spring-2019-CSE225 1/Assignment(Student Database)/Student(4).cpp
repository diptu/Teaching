#include<string>
#include<iostream>
#include "Student.h"
using namespace std;

Student::Student(string n,int i,float c,string d)
{
    name = n;
    id = i;
    cgpa = c;
    dept = d;
}

void Student::print()
{
   cout << "Name : " << name << ",ID : " << id << ",Dept : " << dept << ",CGPA : " << cgpa << endl;
}

StudentDB::StudentDB(int n)
{
   numSt = n;
}

void StudentDB::add(Student s)
{
   st[numSt] = s;
   numSt++;
}

void StudentDB::print()
{
   for(int i = 0 ; i <numSt ; i++)
   {
      st[i].print();
   }
}
int StudentDB::searchStudent(int id)
{
   for(int i = 0 ; i<numSt ; i++)
   {
      if(st[i].getId() == id)
      {
         st[i].print();
      }
   }
   return -1;
}

int StudentDB::searchStudent(string name)
{
    for(int i = 0 ; i<numSt ; i++)
   {
      if(st[i].getName() == name)
      {
         st[i].print();
      }
   }
   return -1;
}

Student StudentDB::getStudent(int n)
{
   for(int i = 0 ; i<numSt ; i++)
   {
      if(st[i].getId() == n)
      {
         Student s = st[i];
         return s;
      }

   }

}

void StudentDB::deleteStudent(int id)
{
   for(int i = 0 ; i<numSt ; i++)
   {
      if(st[i].getId() == id)
      {
         for(int x = i ; x<numSt ; x++)
         {
            st[x] = st[x+1];
         }
      }
   }
}
