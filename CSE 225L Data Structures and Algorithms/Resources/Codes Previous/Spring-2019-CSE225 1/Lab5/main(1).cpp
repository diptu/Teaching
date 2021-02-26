#include "SortedType.cpp"
#include <iostream>
using namespace std;

int main()
{
    SortedType<int> a;

    cout<<"Length of List: "<<a.LengthIs()<<endl;
    a.ResetList();

    int i,x;
    cout<<"Insert 5 Items: "<<endl;
    for(i=0;i<5;i++)
    {
        cin>>x;
        a.InsertItem(x);
    }

    cout<<"Items List: "<<endl;
    for(i=0;i<5;i++)
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

    cout<<endl;
    if(a.IsFull()==true)
        cout<<"List is full"<<endl;
    else
        cout<<"List is not full"<<endl;

}
