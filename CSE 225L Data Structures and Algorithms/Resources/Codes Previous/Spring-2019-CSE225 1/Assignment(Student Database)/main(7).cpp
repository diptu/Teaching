#include "student.h"
#include<iostream>
using namespace std;

int main()
{
   StudentDB db(6);

   Student s1("Alamin",171,2.22,"CSE");
   Student s2("Rakib",181,2.00,"CSE");
   Student s3("Fatiha",191,3.34,"BIO");
   Student s4("Abir",161,3.12,"EEE");
   Student s5("Shaun",151,2.80,"BBA");
   Student s6("Ayon",141,3.98,"ENV");
   db.add(s1);
   db.add(s2);
   db.add(s3);
   db.add(s4);
   db.add(s5);
   db.add(s6);



   int input_id;
   cout << "Enter an id to search in the database: ";
   cin >> input_id;


   int k = db.searchStudent(input_id);

    if(k==-1) {cout << "NOT FOUND!" << endl;}
    else {
    cout << "Student was found at index " << k <<endl;
    }
    db.printinfo(k);

   string input_name;
    cout << "Enter a name to search in the database: ";
    cin >> input_name;

    k = db.searchStudent(input_name);
    if(k==-1) {cout << "NOT FOUND!" << endl;}
    else {
    cout << "Student was found at index " << k+1 <<endl;
    }
    db.printinfo(k);

    return 0;
}
