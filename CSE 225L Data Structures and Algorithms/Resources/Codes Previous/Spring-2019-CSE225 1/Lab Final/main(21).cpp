#include<bits/stdc++.h>
#include"binarysearchtree.h"
#include"binarysearchtree.cpp"

using namespace std;

int main()
{
    TreeType<int>BST;

    BST.InsertItem(5);
    BST.InsertItem(3);
    BST.InsertItem(8);
    BST.InsertItem(2);
    BST.InsertItem(4);
    BST.InsertItem(6);
    BST.InsertItem(10);

    int sum = 0;
    int len = BST.LengthIs();

    BST.ResetTree(IN_ORDER);
    int arr[len];
    int x, i=0;
    bool flag = false;
    while(!flag)
    {
        BST.GetNextItem(x,IN_ORDER,flag);
        arr[i]=x;
        i++;
        sum += x;
    }


    TreeType<int>bst;
    x = sum;
    bst.InsertItem(x);
    for(i=0; i<len-1; i++)
    {
        x -= arr[i];
        bst.InsertItem(x);
    }
    bst.ResetTree(PRE_ORDER);
    flag = false;

    while(!flag)
    {
        bst.GetNextItem(x,PRE_ORDER,flag);
        cout << x << " ";
    }

    return 0;
}
