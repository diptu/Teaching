#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED
using namespace std;
#include<string>


const int MAX_STUDENT = 10;

class StudentInfo
{
public:
    StudentInfo();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(long,string,float);
    void DeleteItem(long);
    void RetrieveItem(long&, bool&);
    void ResetList();
    void GetNextItem(long&,string&,float&);
    int GetID(long);
    string GetName(long);
    float GetCGPA(long);

private:
    long ID;
    string name;
    float cgpa;
    int currentPos;
    int length;
    long ids[MAX_STUDENT];
    string names[MAX_STUDENT];
    float grades[MAX_STUDENT];
};
#endif // STUDENTINFO_H_INCLUDED

