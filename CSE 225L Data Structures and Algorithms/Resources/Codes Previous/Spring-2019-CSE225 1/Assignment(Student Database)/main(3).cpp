#include "student.h"
#include<iostream>
using namespace std;

int main()
{
    StudentDB db(6);

    //   db.print();

    Student s;
    int flag = 0;

    string n;
    cout << "\nEnter a name to search in the database: " ; cin >> n;
    flag = db.searchStudent(n);
    if(flag != -1){
    	s = db.getStudent(flag);
    	s.print();
    }else{
        cout << "Student was not found in the database!" << endl;
    }

    int i;
    cout << "\nEnter an ID to search in the database: " ; cin >> i;
    flag = db.searchStudent(i);
    if(flag != -1){
    	s = db.getStudent(flag);
    	s.print();
    }else{
        cout << "Student was not found in the database!" << endl;
    }

    return 0;
}
