#include <iostream>
#include "unsorted.h"
#include "unsorted.cpp"
using namespace std;

int main()
{

    int item[5],length;
    unsorted<int>e1;
    cout<<"insert four items "<<endl;
    for(int i=0; i<4 ; i++)
    {
        int a;
        cin>>a;
        e1.Insertitem(a);
    }
    cout<<"list"<<endl;
    e1.print();
    cout<<"length of the list is: "<<e1.LengthIs()<<endl;
    int b;
    cout<<"insert another item :"<<endl;
    cin>>b;
    e1.Insertitem(b);
    cout<<"updated list :"<<endl;
    e1.print();
    e1.RetrieveItem(4);
    e1.RetrieveItem(5);
    e1.RetrieveItem(1);
    e1.RetrieveItem(10);
    e1.IsFull();
    e1.DeleteItem(5);
    e1.IsFull();
    e1.DeleteItem(1);
    cout<<"updated list :"<<endl;
    e1.print();
    e1.DeleteItem(6);
    cout<<"updated list :"<<endl;
    e1.print();

}

