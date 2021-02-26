#include "sortedType.h"
#include "sortedType.cpp"
#include <iostream>

using namespace std;

int main()
{
    int item;
    int item2 = 0;
    int item3 = 6;
    int item4 = 5;
    int item5 = 1;

    sortedtype<int> a;

    cout << "Length of the list : " << a.LenghtIs() << endl;

   cout << "Insert items : ";

    for(int i = 0 ;  i <5 ; i++)
    {
          cin >> item;
          a.InsertItem(item);
    }

    a.ResetList();
    cout << "List is : ";
    for(int i = 0 ; i < 5 ; i++)
    {
        a.GetNextItem(item2);
        cout << " "  << item2  ;
    }

    cout << endl;

    bool found = false;
    a.RetrieveItem(item3,found);
    if(found)
    {
        cout << item3 <<"  " << " is found" << endl;
    }
    else
    {
        cout << item3 <<"  " << " is not found" << endl;
    }

    found = false;
    a.RetrieveItem(item4,found);
    if(found)
    {
        cout << item4 <<"  " << " is found" << endl;
    }
    else
    {
        cout << item4 <<"  " << " is not found" << endl;
    }



    if(a.IsFull())
    {
        cout << "List is full" << endl;
    }
    else
    {
        cout << "List is not full" << endl;
    }

    a.DeleteItem(1);
    a.ResetList();
    cout << "List is : ";
    for(int i = 0 ; i < 4 ; i++)
    {
        a.GetNextItem(item2);
        cout << " "  << item2  ;
    }

    cout << endl;

    if(a.IsFull())
    {
        cout << "List is full" << endl;
    }
    else
    {
        cout << "List is not full" << endl;
    }


//    a.RetrieveItem(item)




}
