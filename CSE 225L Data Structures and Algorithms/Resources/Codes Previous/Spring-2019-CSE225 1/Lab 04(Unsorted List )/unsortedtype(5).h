#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
#include<iostream>
using namespace std;
const int MAX_ITEMS=5;

template <class ItemType>
class UnsortedType
{
public:
    UnsortedType();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetrieveItem(ItemType&, bool&);
    void ResetList();
    void GetNextItem(ItemType&);
private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};

class studentInfo
{
    //UnsortedType<studentInfo> s;
    int id;
    string name;
    float cgpa;

public:
    studentInfo()
{
    id=cgpa=NULL;
    name="";
}

studentInfo(int i, string n, float c)
{
    id=i;
    name=n;
    cgpa=c;
}

void setName(string n)
{
    name=n;
}
string getName()
{
    return name;
}

void setId(int i)
{
    id=i;
}
int getId()
{
    return id;
}

void setCgpa(float c)
{
    cgpa=c;
}
float getCgpa()
{
    return cgpa;
}



void print()
{
    cout<<"Name: "<<name<<", ID: "<<id<<", CGPA: "<<cgpa<<endl;
}
};

#endif
