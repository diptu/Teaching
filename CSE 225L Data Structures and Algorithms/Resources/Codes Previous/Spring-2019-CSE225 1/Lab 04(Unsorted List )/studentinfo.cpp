#include "studentinfo.h"

StudentInfo::StudentInfo()
{
    length=0;
    currentPos=-1;
}

void StudentInfo::MakeEmpty()
{
    length=0;
}

bool StudentInfo::IsFull()
{
    return (length==MAX_STUDENT);
}

int StudentInfo::LengthIs()
{
    return length;
}

void StudentInfo::ResetList()
{
    currentPos=-1;
}

void StudentInfo::GetNextItem(long& item1, string& item2, float& item3)
{
    currentPos++;
    item1=ids[currentPos];
    item2=names[currentPos];
    item3=grades[currentPos];

}

void StudentInfo::RetrieveItem(long& item, bool& found)
{
    found=false;
    for(int i=0;i<length;i++)
    {
        if(item==ids[i])
        {
            found=true;
            break;
        }
        else
        {
            found = false;
        }

    }

}

void StudentInfo::InsertItem(long item1, string item2, float item3)
{
    if(length!=MAX_STUDENT)
    {
        ids[length]=item1;
        names[length]=item2;
        grades[length]=item3;
        length++;

    }
}

void StudentInfo::DeleteItem(long item)
{
    int location=0;
    while(item!=ids[location])
        location++;
    ids[location]=ids[length-1];
    names[location]=names[length-1];
    grades[location]=grades[length-1];
    length--;
}

int StudentInfo::GetID(long item1)
{
    int location=0;
    while(item1!=ids[location])
        location++;

    return ids[location];

}

string StudentInfo::GetName(long item1)
{
    int location=0;
    while(item1!=ids[location])
        location++;

    return names[location];

}

float StudentInfo::GetCGPA(long item1)
{
    int location=0;
    while(item1!=ids[location])
        location++;

    return grades[location];

}

