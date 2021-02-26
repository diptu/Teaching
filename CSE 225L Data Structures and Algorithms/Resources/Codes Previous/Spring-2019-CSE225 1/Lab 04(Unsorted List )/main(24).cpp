#include <iostream>
#include "unsortedType.h"
#include "unsortedType.cpp"

using namespace std;

int main()
{
    unsortedType<int> a;
    int item;


    cout << "Insert items: ";

    for(int i = 0 ; i< 4 ; i++)
    {
        cin >> item;
        a.IntsertItem(item);
    }

    a.RestList();
    int temp = 0;
    cout << "List is : ";
    for(int i = 0 ; i<4 ; i++)
    {
         a.GetNextItem(temp);
         cout <<  temp << " ";
    }
    cout << endl;
    cout <<  "Length is : " << a.LengthIS();
    cout << endl;

    a.IntsertItem(1);

    a.RestList();
    int temp1 = 0;
    cout << "List is : ";
    for(int i = 0 ; i<5 ; i++)
    {
         a.GetNextItem(temp1);
         cout <<  temp1 << " ";
    }
    cout << endl;


    int temp2;
    cout << "Retrieve : ";
    cin >> temp2;
    bool found;

    a.RetrieveItem(temp2,found);
    {
        if(found == true)
        {
        cout << "item is found";
        }
        else
        {
        cout << "item not found";
        }
    }











    return 0;
}
