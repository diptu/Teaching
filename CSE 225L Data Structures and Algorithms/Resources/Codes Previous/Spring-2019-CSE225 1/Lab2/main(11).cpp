#include "dynarr.h"
#include <iostream>

using namespace std;

int main()
{
    dynArr d1();
    dynArr d2(5);
    int i,number,n,j;

    cout<<"Enter the number of rows and columns:";
    cin>>n;
    d2.allocate(n);

    cout<<"Enter the array elements";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>number;
            d2.setValue(i,j,number);
        }
    }

    cout<<"The array values are:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          cout<<d2.getValue(i,j)<<endl;
        }
    }

    return 0;
}
