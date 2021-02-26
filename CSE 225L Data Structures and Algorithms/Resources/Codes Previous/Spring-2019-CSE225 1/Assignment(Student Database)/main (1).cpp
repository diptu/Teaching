#include "student.h"
#include<iostream>
using namespace std;

int main()
{
    StudentDB db(6);
    int k = db.searchStudent(231);
    cout << "Student was found at index " <<k<<endl;
    return 0;
}
