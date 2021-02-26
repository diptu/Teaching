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

    int x;
    bool f;

    cout<<"The elements in PRE ORDER are: "<<endl;
    t.ResetTree(PRE_ORDER);
    for(i=0; i<10; i++)
    {
        t.GetNextItem(x, PRE_ORDER, f);
        cout<<x<<" ";
    }
    cout<<endl<<endl;

    cout<<"The elements in IN ORDER are: "<<endl;
    t.ResetTree(IN_ORDER);
    for(i=0; i<10; i++)
    {
        t.GetNextItem(x, IN_ORDER, f);
        cout<<x<<" ";
    }
    cout<<endl<<endl;

    cout<<"The elements in POST ORDER are: "<<endl;
    t.ResetTree(POST_ORDER);
    for(i=0; i<10; i++)
    {
        t.GetNextItem(x, POST_ORDER, f);
        cout<<x<<" ";
    }

//TASK 12
    TreeType<int> tr, tr2;

    cout<<"Enter a sequence of 10 numbers: "<<endl;
    for(i=0; i<10; i++)
    {
        cin>>x;
        tr.InsertItem(x);
    }

    tr.ResetTree(IN_ORDER);

    int a[10];

    for(i=0; i<10; i++)
    {
        tr.GetNextItem(x, IN_ORDER, f);
        a[i]=x;
    }

    int l=sizeof(a)/sizeof(*a);
    tr2.InsertItem(a[l/2]);

}
