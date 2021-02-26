#include<iostream>
using namespace std;
#include "binarysearchtree.cpp"

int main()
{

    cout << "Lab15_BST" << endl;

    TreeType<int> tr;

    tr.InsertItem(5);
    tr.InsertItem(3);
    tr.InsertItem(8);
    tr.InsertItem(2);
    tr.InsertItem(4);
    tr.InsertItem(6);
    tr.InsertItem(10);

    tr.ResetTree(IN_ORDER);



    tr.ResetTree(POST_ORDER);
    tr.Print();









    return 0;
}
