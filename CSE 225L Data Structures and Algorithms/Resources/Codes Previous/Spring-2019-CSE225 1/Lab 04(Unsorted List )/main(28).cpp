#include "unsortedtype.h"
#include "unsortedtype.cpp"
#include <bits/stdc++.h>

using namespace std;

int main()
{
    UnsortedType<int>ut;

    ut.InsertItem(5);
    ut.InsertItem(7);
    ut.InsertItem(6);
    ut.InsertItem(9);

    int x;
    int len = ut.LengthIs();
    for(int i=0; i<len; i++){
        ut.GetNextItem(x);
        cout << x << " ";
    } cout << endl;
    ut.ResetList();

    cout << "Length : " << len << endl;

    ut.InsertItem(1);

    len = ut.LengthIs();
    for(int i=0; i<len; i++){
        ut.GetNextItem(x);
        cout << x << " ";
    } cout << endl;
    ut.ResetList();

    bool flag;  x = 4;
    ut.RetrieveItem(x, flag);
    if(flag){
        cout << "Item is found" << endl;
    } else {
        cout << "Item is not found" << endl;
    }

    flag;  x = 5;
    ut.RetrieveItem(x, flag);
    if(flag){
        cout << "Item is found" << endl;
    } else {
        cout << "Item is not found" << endl;
    }

    flag;  x = 9;
    ut.RetrieveItem(x, flag);
    if(flag){
        cout << "Item is found" << endl;
    } else {
        cout << "Item is not found" << endl;
    }

    flag;  x = 10;
    ut.RetrieveItem(x, flag);
    if(flag){
        cout << "Item is found" << endl;
    } else {
        cout << "Item is not found" << endl;
    }

    flag = ut.IsFull();
    if(flag){
        cout << "List is full" << endl;
    } else {
        cout << "List is not full" << endl;
    }

    ut.DeleteItem(5);

    flag = ut.IsFull();
    if(flag){
        cout << "List is full" << endl;
    } else {
        cout << "List is not full" << endl;
    }

    ut.DeleteItem(1);

    len = ut.LengthIs();
    for(int i=0; i<len; i++){
        ut.GetNextItem(x);
        cout << x << " ";
    } cout << endl;
    ut.ResetList();

    ut.DeleteItem(6);

    len = ut.LengthIs();
    for(int i=0; i<len; i++){
        ut.GetNextItem(x);
        cout << x << " ";
    } cout << endl;
    ut.ResetList();

    return 0;
}
