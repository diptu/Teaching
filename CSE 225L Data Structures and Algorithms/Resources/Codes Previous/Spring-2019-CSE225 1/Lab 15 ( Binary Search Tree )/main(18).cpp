#include "binarysearchtree.cpp"
#include "quetype.cpp"
#include <iostream>
using namespace std;

int main()
{
    TreeType<int> t;

    if(t.IsEmpty())
        cout<<"Tree is empty"<<endl;
    else
        cout<<"Tree is not empty"<<endl;
    cout<<endl;

    int i, temp;
    cout<<"Insert ten elements: "<<endl;
    for(i=0; i<10; i++)
    {
        cin>>temp;
        t.InsertItem(temp);
    }
    cout<<endl;

    if(t.IsEmpty())
        cout<<"Tree is empty"<<endl;
    else
        cout<<"Tree is not empty"<<endl;
    cout<<endl;

    cout<<"Length of the tree is "<<t.LengthIs()<<endl;
    cout<<endl;

    bool found;
    temp=9;
    t.RetrieveItem(temp, found);
    if(found==true)
        cout<<"9 is found"<<endl;
    else
        cout<<"9 is not found"<<endl;
    cout<<endl;

    temp=13;
    t.RetrieveItem(temp, found);
    if(found==true)
        cout<<"13 is found"<<endl;
    else
        cout<<"13 is not found"<<endl;
    cout<<endl;
}
