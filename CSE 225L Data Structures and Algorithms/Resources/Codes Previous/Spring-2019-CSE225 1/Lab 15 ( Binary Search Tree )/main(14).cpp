#include"binarysearchtree.cpp"
#include"binarysearchtree.h"
#include"quetype.h"
#include"quetype.cpp"
#include<iostream>
using namespace std;

int main()
{
    TreeType<int> *a= new TreeType<int>;
    if(a->IsEmpty())
    {
        cout<<"tree is empty"<<endl;
    }
    else
    {
        cout<<"tree is not empty"<<endl;
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
        cout<<"tree is empty"<<endl;
    }
    else
    {
        cout<<"tree is not empty"<<endl;
    }
    cout<<"length of the tree is : "<<a->LengthIs()<<endl;
  int n =9;
  bool found;
    a->RetrieveItem(n,found);
    if(found == true)
    {
        cout<<"item found"<<endl;
    }
    else
    {
        cout<<"item not found"<<endl;
    }
 int m= 13;
  a->RetrieveItem(m,found);
    if(found == true)
    {
        cout<<"item found"<<endl;
    }
    else
    {
        cout<<"item not found"<<endl;
    }






}

