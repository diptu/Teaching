#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED

const int MAX_STUDENT = 10;

class StudentInfo
{
public:
    StudentInfo();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(long,char,float);
    void DeleteItem(long);
    void RetrieveItem(long&, bool&);
    void ResetList();
    void GetNextItem(long&,char&,float&);
    int GetID(long);
    char GetName(long);
    float GetCGPA(long);

private:
    long ID;
    char name;
    float cgpa;
    int currentPos;
    int length;
    long ids[MAX_STUDENT];
    char names[MAX_STUDENT];
    float grades[MAX_STUDENT];
};
#endif // STUDENTINFO_H_INCLUDED
