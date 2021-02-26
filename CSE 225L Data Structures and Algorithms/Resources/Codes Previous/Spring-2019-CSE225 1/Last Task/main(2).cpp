#include<iostream>
using namespace std;
#include "binarysearchtree.cpp"

int main()
{

    cout << "Lab15_BST" << endl;
    // create tree object
    TreeType<int> tr;

    // insert elements in tree
    tr.InsertItem(5);
    tr.InsertItem(3);
    tr.InsertItem(8);
    tr.InsertItem(2);
    tr.InsertItem(4);
    tr.InsertItem(6);
    tr.InsertItem(10);

    // reset tree element in in order
    tr.ResetTree(IN_ORDER);

    // set the sum of all greater values in the current node
    sumOfGreaterValue(tr);
    // print in order tree
    tr.Print();

    // print post order tree
    tr.ResetTree(POST_ORDER);
    // print in order tree
    tr.Print();









    return 0;
}
