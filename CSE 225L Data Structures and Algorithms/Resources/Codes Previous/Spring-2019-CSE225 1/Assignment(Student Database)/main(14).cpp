#include"dynArr.h"
#include<iostream>
using namespace std;

int main()
{
    dynArr d1();
    dynArr d2(5);
    int number=0, i=0, j=0 ;
    cout<<"Enter the five number : ";
    for(i=0; i<5; i++)
    {
        for(j=0; j<i; j++)
        {
            cin>>number;
            d2.setValue(i,j,number);
        }

    }

    for( i=0; i<5; i++)
        cout<<d2.getValue(i)<<endl;

    return 0;
}
