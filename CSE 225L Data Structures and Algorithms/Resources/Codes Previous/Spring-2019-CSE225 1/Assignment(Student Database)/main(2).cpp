#include <bits/stdc++.h>
#include "StudentInfo.h"
using namespace std;

int main()
{
    // print operation //
    Student *s = new Student[5];
    Student *s1 = new Student[4];
    s[0].setStudent(15234, "Jon", 2.6);
    s[1].setStudent(13732, "Tyrion", 3.9);
    s[2].setStudent(13569, "Sandor", 1.2);
    s[3].setStudent(15467, "Ramsey", 3.1);
    s[4].setStudent(16285, "Arya", 3.1);

    for(int i=0; i<5; i++)
    {
        s[i].print();
    }

    // search operation //
    int searchID = 0, flag=0;
    cout << "Searching for ID : " ;
    cin >> searchID ;

    for(int i=0; i<5; i++)
    {
        if(searchID == s[i].ID)
        {
            cout << endl << "You searched for : " << endl;
            s[i].print();
            flag = 1;
        }
    }
    if(flag==0)
        cout << "Student not found" << endl;

    //delete operation //
    int deleteID = 0;
    cout << "Deleting ID : " ;
    cin >> deleteID ;
    int j=0;
    for(int i=0; i<5; i++)
    {
        if(deleteID == s[i].ID)
        {
            delete s;
            cout << "Student " << deleteID << " is deleted\n" << endl ;

        }
        else
        {
            s1[j] = s[i];
            j++;
        }
    }

    for(int i=0; i<4; i++)
    {
        s1[i].print();
    }

    return 0;
}
