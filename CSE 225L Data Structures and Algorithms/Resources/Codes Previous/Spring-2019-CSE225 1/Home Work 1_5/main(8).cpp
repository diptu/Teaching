#include "SortedType.cpp"
#include "timeStamp.h"
#include <iostream>
using namespace std;

int main()
{
    SortedType<int> a;

    cout<<"Length of list: "<<a.LengthIs()<<endl;
    a.ResetList();

    int i,x;
    cout<<"Enter 5 items: "<<endl;
    for(i=0; i<5; i++)
    {
        cin>>x;
        a.InsertItem(x);
    }

    cout<<"List of items: "<<endl;
    for(i=0; i<5; i++)
    {
        a.GetNextItem(x);
        cout<<x<<" ";
    }
    cout<<endl<<endl;

    int n1=6, n2=5;
    bool b;
    a.RetrieveItem(n1, b);
    if(b==true)
        cout<<"Item is found"<<endl;
    else
        cout<<"Item not found"<<endl;

    a.RetrieveItem(n2, b);
    if(b==true)
        cout<<"Item is found"<<endl;
    else
        cout<<"Item not found"<<endl;

    cout<<endl;
    if(a.IsFull()==true)
        cout<<"List is full"<<endl;
    else
        cout<<"List is not full"<<endl;

    int n3=1;
    a.DeleteItem(n3);
    a.ResetList();
    cout<<"New list: "<<endl;
    for(i=0; i<a.LengthIs(); i++)
    {
        a.GetNextItem(x);
        cout<<x<<" ";
    }

    //a.ResetList();
    cout<<endl;
    if(a.IsFull()==true)
        cout<<"List is full"<<endl;
    else
        cout<<"List is not full"<<endl;

    SortedType<timeStamp> t;
    timeStamp t1(15, 34, 23), t2(13, 13, 02), t3(43, 45, 12), t4(25, 36, 17), t5(52, 02, 20);

    t.InsertItem(t1);
    t.InsertItem(t2);
    t.InsertItem(t3);
    t.InsertItem(t4);
    t.InsertItem(t5);

    t.DeleteItem(t4);

    timeStamp ti;
    for(i=0; i<t.LengthIs(); i++)
    {
        t.GetNextItem(ti);
        ti.print();
    }
}

