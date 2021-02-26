#include "src\UnsortedType.cpp"
#include "studentinfo.h"

int main() {
    cout << "lab04_unsorted_list_1" << endl;


    cout << "first part of the code" << endl;

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



    cout << "\n\n2nd part of the code" << endl;
    UnsortedType<StudentInfo> ul;
    StudentInfo s1, s2, s3, s4, s5;

    s1.setId(15234);
    s1.setName("Jon");
    s1.setCgpa(2.6);
    ul.InsertItem(s1);

    s2.setId(13732);
    s2.setName("Tyrion");
    s2.setCgpa(3.9);
    ul.InsertItem(s2);

    s3.setId(13569);
    s3.setName("Sandor");
    s3.setCgpa(1.2);
    ul.InsertItem(s3);

    s4.setId(15467);
    s4.setName("Ramsey");
    s4.setCgpa(3.1);
    ul.InsertItem(s4);

    s5.setId(16285);
    s5.setName("Arya");
    s5.setCgpa(3.1);
    ul.InsertItem(s5);

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
    ul.DeleteItem(s4);

    cout << "\nRetrieving the record with ID 13569" << endl;
    bool isFound2 = false;
    ul.RetrieveItem(s3, isFound2);
    if(isFound2){
        cout << "Item is found" << endl;
        s3.print();
    }
    else{
        cout << "Item is not found" << endl;
    }

    cout << "\nPrinting ul list:" << endl;
    ul.ResetList();
    for(int i = 0; i < ul.LengthIs(); i++){
        ul.GetNextItem(tempSt);
        tempSt.print();
    }
    ul.ResetList();

    return 0;
}
