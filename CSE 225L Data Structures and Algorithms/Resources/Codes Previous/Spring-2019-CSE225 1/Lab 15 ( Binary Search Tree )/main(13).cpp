#include <iostream>
#include "binarysearchtree.h"
#include "binarysearchtree.cpp"

using namespace std;

int main()
{
    TreeType<int> T1,T2;
    bool foundItem;
    bool finished=false;
    int item,item1;
    if(T1.IsEmpty())
        cout<<"Tree is empty"<<endl;
    else
        cout<<"Tree is not empty"<<endl;

    T1.InsertItem(4);
    T1.InsertItem(9);
    T1.InsertItem(2);
    T1.InsertItem(7);
    T1.InsertItem(3);
    T1.InsertItem(11);
    T1.InsertItem(17);
    T1.InsertItem(0);
    T1.InsertItem(5);
    T1.InsertItem(1);
    if(T1.IsEmpty())
        cout<<"Tree is empty"<<endl;
    else
        cout<<"Tree is not empty"<<endl;

    cout<<"Length of the tree is "<<T1.LengthIs()<<endl;
    item=9;
    T1.RetrieveItem(item,foundItem);
    if(foundItem==true)
        cout<<"Item "<<item<<" is found"<<endl;
    else
        cout<<"Item "<<item<<" is not found"<<endl;

    item=13;
    T1.RetrieveItem(item,foundItem);
    if(foundItem==true)
        cout<<"Item "<<item<<" is found"<<endl;
    else
        cout<<"Item "<<item<<" is not found"<<endl;

    T1.ResetTree(IN_ORDER);
    cout<<"Elements in InOrder :";
    for(int i=0;i<T1.LengthIs();i++)
    {
        T1.GetNextItem(item1,IN_ORDER,finished);
        cout<<item1<<" ";
    }
    cout<<endl;

    T1.ResetTree(PRE_ORDER);
    cout<<"Elements in PreOrder :";
    for(int i=0;i<T1.LengthIs();i++)
    {
        T1.GetNextItem(item1,PRE_ORDER,finished);
        cout<<item1<<" ";
    }
    cout<<endl;

    T1.ResetTree(POST_ORDER);
    cout<<"Elements in PostOrder :";
    for(int i=0;i<T1.LengthIs();i++)
    {
        T1.GetNextItem(item1,POST_ORDER,finished);
        cout<<item1<<" ";
    }
    cout<<endl;
    T1.MakeEmpty();

    return 0;
}
