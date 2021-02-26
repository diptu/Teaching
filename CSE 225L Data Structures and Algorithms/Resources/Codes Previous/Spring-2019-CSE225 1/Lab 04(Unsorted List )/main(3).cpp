#include "src\UnsortedType.cpp"
#include "studentinfo.h"

int main() {
    cout << "lab04_unsorted_list_1" << endl;


/*          // here is the first part of the code

    // create a list of integers
    UnsortedType<int> list1;

    int num1;
    cout << "\nInsert 4 items: ";
    for(int i = 0; i < 4; i++) {
        cin >> num1;
        list1.InsertItem(num1);
    }

    cout << "\nPrinting the list: ";
    list1.ResetList();
    int temp;
    for(int i = 0; i < list1.LengthIs(); i++) {
        list1.GetNextItem(temp) ;
        cout << temp << " ";
    }
    list1.ResetList();

    cout << "\nLength of list1 is: " << list1.LengthIs() << endl;

    cout << "\nInsert one item: ";
    cin >> num1;
    list1.InsertItem(num1);

    cout << "\nPrinting the list: ";
    list1.ResetList();
    for(int i = 0; i < list1.LengthIs(); i++) {
        list1.GetNextItem(temp) ;
        cout << temp << " ";
    }
    list1.ResetList();

    bool isFound = false;
    int temp2;
    cout << "\nRetrieve 4 and print status: ";
    temp2 = 4;
    list1.RetrieveItem(temp2, isFound);
    if(isFound) {
        cout << "Item is found" << endl;
    } else {
        cout << "Item is not found" << endl;
    }

    isFound = false;
    cout << "\nRetrieve 5 and print status: ";
    temp2 = 5;
    list1.RetrieveItem(temp2, isFound);
    if(isFound) {
        cout << "Item is found" << endl;
    } else {
        cout << "Item is not found" << endl;
    }

    isFound = false;
    cout << "\nRetrieve 9 and print status: ";
    temp2 = 9;
    list1.RetrieveItem(temp2, isFound);
    if(isFound) {
        cout << "Item is found" << endl;
    } else {
        cout << "Item is not found" << endl;
    }

    isFound = false;
    cout << "\nRetrieve 10 and print status: ";
    temp2 = 10;
    list1.RetrieveItem(temp2, isFound);
    if(isFound) {
        cout << "Item is found" << endl;
    } else {
        cout << "Item is not found" << endl;
    }

    cout << "\nIs list1 full or not?? ";
    if(list1.IsFull()) {
        cout << "List is full" << endl;
    } else {
        cout << "List is not full" << endl;
    }

    int temp3;
    cout << "\nDelete 5: ";
    temp3 = 5;
    list1.DeleteItem(temp3);

    cout << "\nIs list1 full or not?? ";
    if(list1.IsFull()) {
        cout << "List is full" << endl;
    } else {
        cout << "List is not full" << endl;
    }

    cout << "\nDelete 1: ";
    temp3 = 1;
    list1.DeleteItem(temp3);

    cout << "\nPrinting the list: ";
    list1.ResetList();
    for(int i = 0; i < list1.LengthIs(); i++) {
        list1.GetNextItem(temp) ;
        cout << temp << " ";
    }
    list1.ResetList();

    cout << "\nDelete 6: ";
    temp3 = 6;
    list1.DeleteItem(temp3);

    cout << "\nPrinting the list: ";
    list1.ResetList();
    for(int i = 0; i < list1.LengthIs(); i++) {
        list1.GetNextItem(temp) ;
        cout << temp << " ";
    }
    list1.ResetList();

*/

    UnsortedType<StudentInfo> ul;
    StudentInfo s1;

    int tId;
    string tName;
    float tCgpa;

    cout << "\nInsert 5 student records:" << endl;
    for(int i = 0; i < 5; i++){
        cout << "Input information of student-" << (i+1) << endl;
        cout << "Enter ID: ";
        cin >> tId;
        s1.setId(tId);
        cout << "Enter Name: ";
        cin >> tName;
        s1.setName(tName);
        cout << "Enter CGPA: ";
        cin >> tCgpa;
        s1.setCgpa(tCgpa);

        ul.InsertItem(s1);
    }

    cout << "\nLength of ul is: " << ul.LengthIs() << endl;

    cout << "\nPrinting ul list:" << endl;
    ul.ResetList();
    StudentInfo tempSt;
    for(int i = 0; i < ul.LengthIs(); i++){
        ul.GetNextItem(tempSt);
        tempSt.print();
    }
    ul.ResetList();

    cout << "\nDeleting the record with ID 15467" << endl;
    int idToDelete = 15467;
    for(int i = 0; i < ul.LengthIs(); i++){

    }
    //ul.DeleteItem();

    cout << "\nRetrieving the record with ID 13569" << endl;
    int idToRetrieve = 13569;



    cout << "\nPrinting ul list:" << endl;
    ul.ResetList();
    for(int i = 0; i < ul.LengthIs(); i++){
        ul.GetNextItem(tempSt);
        tempSt.print();
    }
    ul.ResetList();


    return 0;
}
