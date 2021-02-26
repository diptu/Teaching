#include<string>
using namespace std;
#include<iostream>
#include "student.h"

Student:: Student() {
        id=cgpa=0;
        name=dept="";}

Student:: Student(string n, int i, float c, string d){
        name=n;
        id=i;
        cgpa=c;
        dept=d;

}
int Student::getId()   {
          return id;}

string Student ::getName() {
         return name;
         }


void Student:: print() {
cout << "Name: "<<name<<" Id: "<<id<< " CGPA= "<< cgpa<< " Depertment= " <<dept<<endl;
}


StudentDB::StudentDB(){
    numSt=0;
    }

StudentDB::StudentDB(int n){
    numSt=6;
    for (int i=0;i<numSt;i++){
        st [i]= new Student(string n, int i, float c, string d);
    }
}

void StudentDB:: print(){
for (int i=0;i<numSt;i++){

    st[i].print();
}
}
void  StudentDB::add(Student s){
   st[numSt]=s;
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

Student StudentDB::getStudent(int i){
        return st[i];
    }

void StudentDB::deleteStudent(int id){
    for (int i=0;i<numSt;i++){

    if (st[i].getId()==id){
        st[i]==st[i+1];
        st[numSt-1]==NULL;
        }
    }
}


