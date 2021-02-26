#include <string>
#include <iostream>
using namespace std;
#include "student.h"

int main()
{
    StudentDB s(6);
    string name;
    cout << "Enter name to search: ";
    cin >> name;
    int t=s.searchStudent(name);
    if(t>=0)
        s.st[t].print();
    else cout<<"student not found\n";
    int id;
    cout << "Enter id to search: ";
    cin >> id;
    t=s.searchStudent(id);
    if(t>=0)
        s.st[t].print();
    else cout<<"student not found\n";

    return 0;
}

