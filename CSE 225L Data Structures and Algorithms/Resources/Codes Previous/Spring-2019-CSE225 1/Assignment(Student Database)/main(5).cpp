#include<string>
#include<iostream>
#include "Student.h"
using namespace std;

int main()
{

    string name;
    int id;
    float cgpa;
    string dept;
    string FindN;
    int FindI;
    //int StNumber;
    StudentDB db(3);

    //cout << "Enter number of student : ";
    //cin >> StNumber;

    for(int i = 0 ; i<3 ; i++)
    {
      cout<< "Enter name : ";
      cin >> name;
      cout<< "Enter id : ";
      cin >> id;
      cout<< "Enter cgpa : ";
      cin >> cgpa;
      cout<< "Enter dept : ";
      cin >> dept;
      Student s(name,id,cgpa,dept);
      db.add(s);
    }

    cout<<endl;

   // db.print();

    cout<<endl;

    cout << "Enter name in database : ";
    cin >> FindN;

    cout<<endl;

    db.searchStudent(FindN);

    cout<<endl;

    cout << "Enter id in database : ";
    cin >> FindI;

    cout<<endl;

    db.searchStudent(FindI);






}
