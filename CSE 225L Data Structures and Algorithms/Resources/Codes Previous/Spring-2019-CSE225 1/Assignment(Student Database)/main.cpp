#include "student.h"
#include "student.cpp"



int main()
{
    cout << "Assignment-1_StudentDB" << endl;

    StudentDB db(2);
    db.print();

    Student stObj;

    string nameToSearch;
    cout << "\nEnter a name to search: ";
    cin >> nameToSearch;
    int nameSearchIdx;
    nameSearchIdx = db.searchStudent(nameToSearch);
    if(nameSearchIdx >= 0){
        stObj = db.getStudent(nameSearchIdx);
        stObj.print();
    }
    else{
        cout << "\nNot found details of Name " << nameToSearch << endl;
    }


    int idToSearch, searchIdIndex;
    cout << "\nEnter an id to search in the database: ";
    cin >> idToSearch;
    searchIdIndex = db.searchStudent(idToSearch);
    if(searchIdIndex >= 0){
        stObj = db.getStudent(searchIdIndex);
        stObj.print();
    }
    else{
        cout << "\nNot found details of ID " << idToSearch << endl;
    }

    return 0;
}

