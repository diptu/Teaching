#include<iostream>
using namespace std;
#include "binarysearchtree.cpp"

int main()
{

    cout << "Lab15_BST" << endl;

    // create a tree object
    TreeType<int> t1;

    // tree is empty?
    if(t1.IsEmpty()){
        cout << "\nTree is empty" << endl;
    }
    else{
        cout << "\nTree is not empty" << endl;
    }

    // insert 10 items
    int num1;
    cout << "\nInset 10 items: ";
    for(int i = 0; i < 10; i++){
        cin >> num1;
        t1.InsertItem(num1);
    }

    // tree is empty?
    if(t1.IsEmpty()){
        cout << "\nTree is empty" << endl;
    }
    else{
        cout << "\nTree is not empty" << endl;
    }

    // print tree length
    cout << "\nLength of Tree is: " << t1.LengthIs() << endl;

    bool isFound = false;
    int tempNum;

    // retrieve 9
    tempNum = 9;
    t1.RetrieveItem(tempNum, isFound);

    if(isFound){
        cout << "\nItem is found" << endl;
    }
    else{
        cout << "\nItem is not found" << endl;
    }

    // retrieve 13
    tempNum = 13;
    t1.RetrieveItem(tempNum, isFound);

    if(isFound){
        cout << "\nItem is found" << endl;
    }
    else{
        cout << "\nItem is not found" << endl;
    }

    // inorder tree print
    cout << "\nPrint tree in_order: ";
    t1.ResetTree(IN_ORDER);
    int x;

    bool isFinished = false;
    for(int i = 0; i < t1.LengthIs(); i++){
        t1.GetNextItem(x, IN_ORDER, isFinished);
        cout << " " << x;
    }

    // preorder tree print
    cout << "\nPrint tree pre_order: ";
    t1.ResetTree(PRE_ORDER);

    isFinished = false;
    for(int i = 0; i < t1.LengthIs(); i++){
        t1.GetNextItem(x, PRE_ORDER, isFinished);
        cout << " " << x;
    }

    // postorder tree print
    cout << "\nPrint tree post_order: ";
    t1.ResetTree(POST_ORDER);

    isFinished = false;
    for(int i = 0; i < t1.LengthIs(); i++){
        t1.GetNextItem(x, POST_ORDER, isFinished);
        cout << " " << x;
    }

    // make tree empty
    t1.MakeEmpty();


    // extra task
    TreeType<int> t2;

    cout << "\nInsert 10 items: ";
    for(int i = 0; i < 10; i++){
        cin >> num1;
        t2.InsertItem(num);
    }

    t1.ResetTree(IN_ORDER);











    return 0;
}
