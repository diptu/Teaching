#include <iostream>
#include "binarysearchtree.h"
#include "binarysearchtree.cpp"
#include "quetype.h"
#include "quetype.cpp"
using namespace std;

int main()
{
    TreeType<int> *t = new TreeType<int>;

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
    cout<<"Inorder print :"<<endl;
    t->ResetTree(IN_ORDER);

    int temp;
    bool found1;
    for(int i = 0 ; i<10 ; i++)
    {
        t->GetNextItem(temp,IN_ORDER,found1);
        cout <<" "<<temp<<endl;
    }


    cout<<endl;
    cout<<"Postorder print :"<<endl;

    t->ResetTree(POST_ORDER);

    int temp2;
    bool found2;
    for(int i = 0 ; i<10 ; i++)
    {
        t->GetNextItem(temp2,POST_ORDER,found2);
        cout <<" "<<temp2<<endl;
    }

    cout<<endl;
    cout<<"Preorder print :"<<endl;

    t->ResetTree(PRE_ORDER);

    int temp3;
    bool found3;
    for(int i = 0 ; i<10 ; i++)
    {
        t->GetNextItem(temp3,PRE_ORDER,found3);
        cout <<" "<<temp3<<endl;
    }

    cout<<endl;
    t->MakeEmpty();
    if(t->IsEmpty())
    {
        cout <<"Tree is empty"<<endl;
    }
    else
    {
        cout <<"Tree is not empty"<<endl;
    }



    cout << "Hello world!" << endl;
    return 0;
}
