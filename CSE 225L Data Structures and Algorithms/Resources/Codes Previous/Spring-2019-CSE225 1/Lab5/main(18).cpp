#include "sortedtype.cpp"


int main()
{
    cout << "Lab05_Sorted_List" << endl;

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
        cout << "Item is not found" << endl;
    }


    return 0;
}
