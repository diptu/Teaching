#include "sortedtype.cpp"
#include "timestamp.h"

int main()
{
    cout << "Lab05_Sorted_List" << endl;

    //  2nd part of the code
    SortedType<TimeStamp> sList2;

    // inserting 5 elements
    TimeStamp t1;
    t1.setSecond(15);
    t1.setMinute(34);
    t1.setHour(23);
    sList2.InsertItem(t1);

    TimeStamp t2;
    t2.setSecond(13);
    t2.setMinute(13);
    t2.setHour(02);
    sList2.InsertItem(t2);

    TimeStamp t3;
    t3.setSecond(43);
    t3.setMinute(45);
    t3.setHour(12);
    sList2.InsertItem(t3);

    TimeStamp t4;
    t4.setSecond(25);
    t4.setMinute(36);
    t4.setHour(17);
    sList2.InsertItem(t4);

    TimeStamp t5;
    t5.setSecond(52);
    t5.setMinute(02);
    t5.setHour(20);
    sList2.InsertItem(t5);


    // print the list
    cout << "\nPrinting the list after insertion: " << endl;
    TimeStamp tp;
    sList2.ResetList();
    for(int i = 0; i < sList2.LengthIs(); i++){
        sList2.GetNextItem(tp);
        tp.print();
    }
    sList2.ResetList();

    // delete the TimeStamp 25 36 17
    sList2.DeleteItem(t4);

    // print the list
    cout << "\nPrinting the list after deletion: " << endl;
    TimeStamp tp2;
    sList2.ResetList();
    for(int i = 0; i < sList2.LengthIs(); i++){
        sList2.GetNextItem(tp2);
        tp2.print();
    }
    sList2.ResetList();

/*
    //  1st part of the code
    SortedType<int> sList;

    cout << "\nLength of list: " << sList.LengthIs() << endl;

    cout << "\nInsert 5 elements: ";
    int num;
    for(int i = 0; i < 5; i++){
        cin >> num;
        sList.InsertItem(num);
    }

    cout << "\nPrint the list: ";
    sList.ResetList();
    bool isFound = false;
    int x;
    for(int i = 0; i < sList.LengthIs(); i++){
        sList.GetNextItem(x);
        cout << x << " ";
    }
    sList.ResetList();

    cout << "\nRetrieve 6: ";
    x = 6; isFound = false;
    sList.RetrieveItem(x, isFound);
    if(isFound){
        cout << "Item is found" << endl;
    }
    else{
        cout << "Item is not found" << endl;
    }

    cout << "\nRetrieve 5: ";
    x = 5; isFound = false;
    sList.RetrieveItem(x, isFound);
    if(isFound){
        cout << "Item is found" << endl;
    }
    else{
        cout << "Item is not found" << endl;
    }

    cout << "\nIs list full or not? ";
    if(sList.IsFull()){
        cout << " List is full" << endl;
    }
    else{
        cout << " List is not full" << endl;
    }

    cout << "\nDelete 1: ";
    x = 1;
    sList.DeleteItem(x);

    cout << "\nPrinting list: ";
    sList.ResetList();
    isFound = false;
    for(int i = 0; i < sList.LengthIs(); i++){
        sList.GetNextItem(x);
        cout << x << " ";
    }
    sList.ResetList();

    cout << "\nIs list full or not? ";
    if(sList.IsFull()){
        cout << "List is full" << endl;
    }
    else{
        cout << "List is not full" << endl;
    }
*/

    return 0;
}
