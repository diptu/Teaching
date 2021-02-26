#include "dynarr.h"
#include<iostream>

using namespace std;

int main()
{
    dynArr x;
    dynArr y(5);
    int a;
    int b;

    /*for(int i=0;i<5;i++)
    {
        y.setValue(i,i+10);
    }

    for(int i=0; i<5;i++)
    {
        cout<<y.getValue(i)<<endl;
    }*/

    for(int i=0; i<5;i++)
    {
        cout<<"Array values: "<<endl;
        cin>>b;

        y.setValue(i,b);
    }

    cout<<"Values are: "<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<y.getValue(i)<<endl;
    }
}

