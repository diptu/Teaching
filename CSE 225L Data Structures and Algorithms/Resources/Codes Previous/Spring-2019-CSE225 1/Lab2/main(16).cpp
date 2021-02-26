#include<iostream>
//#include "dynarr.h"
#include "dynarr.cpp"
using namespace std;

int main()
{
    //Task1
    dynArr<int> d1();
    dynArr<int> d2(5);

    int i, temp;

    cout<<"Enter values: "<<endl;
    for(i=0; i<5; i++)
    {
        cin>>temp;
        d2.setValue(i, temp);
    }
    cout<<endl;
    cout<<"Array: "<<endl;
    for(i=0; i<5; i++)
        cout<<d2.getValue(i)<<" ";

    d2.allocate(7);
    cout<<endl<<endl;
    cout<<"Enter values of new array: "<<endl;
    for(i=0; i<7; i++)
    {
        int v;
        cin>>v;
        d2.setValue(i, v);
    }

    cout<<endl;
    cout<<"The new array is: "<<endl;
    for(i=0; i<7; i++)
    {
        cout<<d2.getValue(i)<<" ";
    }

}
