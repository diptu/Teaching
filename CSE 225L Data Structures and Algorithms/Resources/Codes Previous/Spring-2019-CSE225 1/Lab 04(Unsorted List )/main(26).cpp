#include <bits/stdc++.h>
#include "unsortedtype.cpp"
#include "unsortedtype.h"

using namespace std;

int main()
{
    cout << "Chotto Matte Kudasai" << endl;

    UnsortedType <int> US;

        US.InsertItem(5);
        US.InsertItem(7);
        US.InsertItem(6);
        US.InsertItem(9);
        cout << endl;

         int len = US.LengthIs();

        int val;
        for(int i=0;i<len;i++) {
            US.GetNextItem(val);
            cout << val << " ";
        } US.ResetList();

        cout << endl;

        cout << "Length is " << US.LengthIs() << endl;

        US.InsertItem(1);


        len = US.LengthIs();
        for(int i=0;i<len;i++) {
            US.GetNextItem(val);
            cout << val << " ";
        } US.ResetList();
        cout << endl;


        if(US.RetrieveItem(4))
        {
            cout << "Item Found" << endl;
        }
        else {
            cout << "Item Not Found" << endl;
        }

        if(US.RetrieveItem(5))
        {
            cout << "Item Found" << endl;
        }
        else {
            cout << "Item Not Found" << endl;
        }

        if(US.RetrieveItem(9))
        {
            cout << "Item Found" << endl;
        }
        else {
            cout << "Item Not Found" << endl;
        }

        if(US.RetrieveItem(10))
        {
            cout << "Item Found" << endl;
        }
        else {
            cout << "Item Not Found" << endl;
        }

        if(US.IsFull())
            cout << "List is Full" << endl;
        else
            cout << "List is not Full" << endl;

        US.DeleteItem(5);

        if(US.IsFull())
            cout << "List is Full" << endl;
        else
            cout << "List is not Full" << endl;

        US.DeleteItem(1);

          len = US.LengthIs();
        for(int i=0;i<len;i++) {
            US.GetNextItem(val);
            cout << val << " ";
        } US.ResetList();
        cout << endl;

        US.DeleteItem(6);

         len = US.LengthIs();
        for(int i=0;i<len;i++) {
            US.GetNextItem(val);
            cout << val << " ";
        } US.ResetList();
        cout << endl;



    return 0;
}
