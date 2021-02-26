#include <iostream>
#include "binarysearchtree.h"
#include "binarysearchtree.cpp"
#include "quetype.h"
#include "quetype.cpp"
using namespace std;

int main()
{
    TreeType<int> *t = new TreeType<int>;
    QueType<int> *q = new QueType<int>;
    bool found;
    int n=9,m=13;
    if(t->IsEmpty())
    {
        cout <<"Tree is empty"<<endl;
    }
    else
    {
        cout <<"Tree is not empty"<<endl;
    }
    t->InsertItem(4);
    t->InsertItem(9);
    t->InsertItem(2);
    t->InsertItem(7);
    t->InsertItem(3);
    t->InsertItem(11);
    t->InsertItem(17);
    t->InsertItem(0);
    t->InsertItem(5);
    t->InsertItem(1);
     if(t->IsEmpty())
    {
        cout <<"Tree is empty"<<endl;
    }
    else
    {
        cout <<"Tree is not empty"<<endl;
    }

    cout<< "Length of the tree : " << t->LengthIs() << endl;

    t->RetrieveItem(n,found);
    if(found == true)
    {
        cout<< "Item is found" << endl;
    }
    else
    {
        cout << "Item is not found"<< endl;
    }
    t->RetrieveItem(m,found);
    if(found == true)
    {
        cout<< "Item is found" << endl;
    }
    else
    {
        cout << "Item is not found"<< endl;
    }
    t->ResetTree(IN_ORDER);




    cout << "Hello world!" << endl;
    return 0;
}
