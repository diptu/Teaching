#include <iostream>
#include "TreeType.cpp"
//#include "QueType.cpp"
using namespace std;

int main()
{
    TreeType<int> t;

    if(!t.isEmpty())
        cout<<"Tree is not empty";
    else
        cout<<"Tree is Empty";
    cout<<endl;

    t.insertItem(4);
    t.insertItem(9);
    t.insertItem(2);
    t.insertItem(7);
    t.insertItem(3);
    t.insertItem(11);
    t.insertItem(17);
    t.insertItem(0);
    t.insertItem(5);
    t.insertItem(1);

    if(!t.isEmpty())
        cout<<"Tree is not empty";
    else
        cout<<"Tree is Empty";
    cout<<endl;

    cout<<t.lengthIs()<<endl;

    int n;
    bool found1 = false;

    t.retrieveItem(n,found1);

    if(found1 == true)
        cout<<"Item is found"<<endl;
    else
        cout<<"Item is not found"<<endl;

    





}