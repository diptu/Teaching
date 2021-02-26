#include "sortedtype.cpp"


int main()
{
    cout << "Lab05_Sorted_List" << endl;

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


    return 0;
}
