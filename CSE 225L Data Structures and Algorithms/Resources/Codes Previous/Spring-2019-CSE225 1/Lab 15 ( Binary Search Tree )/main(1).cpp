#include<bits/stdc++.h>
#include"binarysearchtree.h"
#include"binarysearchtree.cpp"

using namespace std;

int main()
{
    TreeType<int>BST;
    if(BST.IsEmpty())
        cout << "Tree is empty" << endl;
    else
        cout << "Tree is not empty" << endl;

    BST.InsertItem(4);
    BST.InsertItem(9);
    BST.InsertItem(2);
    BST.InsertItem(7);
    BST.InsertItem(3);
    BST.InsertItem(11);
    BST.InsertItem(17);
    BST.InsertItem(0);
    BST.InsertItem(5);
    BST.InsertItem(1);

    if(BST.IsEmpty())
        cout << "Tree is empty" << endl;
    else
        cout << "Tree is not empty" << endl;

    cout << BST.LengthIs() << endl;

    int x = 9;
    bool flag;
    BST.RetrieveItem(x,flag);

    if(flag==true)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    x = 13;
    BST.RetrieveItem(x,flag);

    if(flag==true)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    BST.ResetTree(IN_ORDER);
    BST.ResetTree(PRE_ORDER);
    BST.ResetTree(POST_ORDER);

    flag = false;
    while(!flag)
    {
        BST.GetNextItem(x,IN_ORDER,flag);
        cout << x << " " ;
    }
    cout << endl;

    flag = false;
    while(!flag)
    {
        BST.GetNextItem(x,PRE_ORDER,flag);
        cout << x << " " ;
    }
    cout << endl;

    flag = false;
    while(!flag)
    {
        BST.GetNextItem(x,POST_ORDER,flag);
        cout << x << " " ;
    }
    cout << endl;

    return 0;
}
