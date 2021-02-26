#include "dynarr.h"
#include "dynarr.cpp"
#include <iostream>

using namespace std;

int main()
{
    dynArr <double> d1();
    dynArr <double> d2(5);
    int i,n;
    double number;

    cout<<"Enter the number of elements you want to enter:";
    cin>>n;
    d2.allocate(n);

    cout<<"Enter the array elements";
    for(i=0;i<n;i++)
    {
        cin>>number;
        d2.setValue(i,number);
    }

    cout<<"The array values are:"<<endl;
    for(i=0;i<n;i++)
        cout<<d2.getValue(i)<<endl;

    return 0;
}
