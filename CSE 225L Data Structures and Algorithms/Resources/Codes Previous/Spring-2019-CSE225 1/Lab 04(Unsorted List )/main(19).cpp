#include "unsortedtype.cpp"
#include <iostream>
using namespace std;

int main()
{
    UnsortedType<int> a;
    int i, x;

    cout<<"Enter four items: "<<endl;
    for(i=0; i<4; i++)
    {
        cin>>x;
        a.InsertItem(x);
    }

    cout<<"Created list: "<<endl;
    for(i=0; i<4; i++)
    {
        a.GetNextItem(x);
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"Length of list is "<<a.LengthIs()<<endl;

    int n;
    cout<<"Enter another item: "<<endl;
    cin>>n;
    a.InsertItem(n);

    a.ResetList();
    cout<<"New list: "<<endl;
    for(i=0; i<5; i++)
    {
        a.GetNextItem(x);
        cout<<x<<" ";
    }
    cout<<endl<<endl;

    bool f;
    int f1=4;
    a.RetrieveItem(f1, f);
    if(f==true)
        cout<<"4 was found"<<endl;
    else
        cout<<"4 was not found"<<endl;

    int f2=5;
    a.RetrieveItem(f2, f);
    if(f==true)
        cout<<"5 was found"<<endl;
    else
        cout<<"5 was not found"<<endl;

    int f3=9;
    a.RetrieveItem(f2, f);
    if(f==true)
        cout<<"9 was found"<<endl;
    else
        cout<<"9 was not found"<<endl;

    int f4=10;
    a.RetrieveItem(f4, f);
    if(f==true)
        cout<<"10 was found"<<endl;
    else
        cout<<"10 was not found"<<endl;

    cout<<endl;
    if(a.IsFull()==true)
        cout<<"The list is full"<<endl;
    else
        cout<<"The list is not full"<<endl;

    a.DeleteItem(5);
    if(a.IsFull()==true)
        cout<<"The list is full"<<endl;
    else
        cout<<"The list is not full"<<endl;

    a.DeleteItem(1);
    a.ResetList();
    cout<<"New list: "<<endl;
    for(i=0; i<a.LengthIs(); i++)
    {
        a.GetNextItem(x);
        cout<<x<<" ";
    }

    a.DeleteItem(6);
    a.ResetList();
    cout<<"New list: "<<endl;
    for(i=0; i<a.LengthIs(); i++)
    {
        a.GetNextItem(x);
        cout<<x<<" ";
    }
}
