#include "student.h"
#include<iostream>
using namespace std;

int main()
{
    StudentDB db(6);

    Student s1("Asif Mahmud", 1100, 3.56 , "CSE");
    db.add(s1);
    Student s2("Alamin Islam", 1101, 3.44 , "CSE");
    db.add(s2);
    Student s3("Yamin Islam", 1102, 3.89 , "EEE");
    db.add(s3);
    Student s4("Yearat", 1103, 3.12, "EEE");
    db.add(s4);
    Student s5("Abul", 1104, 2.04, "BBA");
    db.add(s5);
    Student s6("Saad", 1105, 1.98, "BBA");
    db.add(s6);

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
