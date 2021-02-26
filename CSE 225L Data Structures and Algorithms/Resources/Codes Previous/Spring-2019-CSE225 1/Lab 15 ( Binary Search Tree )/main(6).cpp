#include <iostream>
#include "binarysearchtree.h"
#include "binarysearchtree.cpp"
#include "quetype.h"
#include "quetype.cpp"
using namespace std;

int main()
{
    TreeType<int> *a = new TreeType<int>;

    bool found;
    int n=9,m=13;

    if(a->IsEmpty())
    {
        cout <<"Tree is empty"<<endl;
    }
    else
    {
        cout <<"Tree is not empty"<<endl;
    }
    a->InsertItem(4);
    a->InsertItem(9);
    a->InsertItem(2);
    a->InsertItem(7);
    a->InsertItem(3);
    a->InsertItem(11);
    a->InsertItem(17);
    a->InsertItem(0);
    a->InsertItem(5);
    a->InsertItem(1);
    if(a->IsEmpty())
    {
        cout <<"Tree is empty"<<endl;
    }
    else
    {
        cout <<"Tree is not empty"<<endl;
    }

    cout<< "Length of the tree : " << a->LengthIs() << endl;

    a->RetrieveItem(n,found);
    if(found == true)
    {
        cout<< "Item is found" << endl;
    }
    else
    {
        cout << "Item is not found"<< endl;
    }
    a->RetrieveItem(m,found);
    if(found == true)
    {
        cout<< "Item is found" << endl;
    }
    else
    {
        cout << "Item is not found"<< endl;
    }
    cout<<"Inorder  :"<<endl;
    a->ResetTree(IN_ORDER);

    int temp;
    bool found1;
    for(int i = 0 ; i<10 ; i++)
    {
        a->GetNextItem(temp,IN_ORDER,found1);
        cout <<" "<<temp<<endl;
    }


    cout<<endl;
    cout<<"Postorder  :"<<endl;

    a->ResetTree(POST_ORDER);

    int temp2;
    bool found2;
    for(int i = 0 ; i<10 ; i++)
    {
        a->GetNextItem(temp2,POST_ORDER,found2);
        cout <<" "<<temp2<<endl;
    }

    cout<<endl;
    cout<<"Preorder print :"<<endl;

    a->ResetTree(PRE_ORDER);

    int temp3;
    bool found3;
    for(int i = 0 ; i<10 ; i++)
    {
        a->GetNextItem(temp3,PRE_ORDER,found3);
        cout <<" "<<temp3<<endl;
    }

    cout<<endl;
    a->MakeEmpty();
    if(a->IsEmpty())
    {
        cout <<"Tree is empty"<<endl;
    }
    else
    {
        cout <<"Tree is not empty"<<endl;
    }
}
