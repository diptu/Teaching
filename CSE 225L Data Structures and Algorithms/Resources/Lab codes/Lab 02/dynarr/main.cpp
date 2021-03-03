#include "dynarr.h"
#include <iostream>

using namespace std;

int main()
{
    /* 1D array
    int v;
    dynArr d1();
    dynArr d2(5);

    cout<<"Enter the value : ";
    for(int i = 0; i<5; i++)
    {
        cin>>v;
        d2.setValue(i,v);
    }
    cout<<"The values are : "<<endl;
    for(int i=0; i<5; i++)
        cout<<d2.getValue(i)<<" ";
    */
    int r,c,v;
    cout<<"Enter the number of rows and columns : ";
    cin>>r>>c;
    dynArr d1();
    dynArr d2(r,c);
    for(int i = 0; i<r; i++){
        cout<<"Enter the value of row : "<<i+1<<endl;
        for(int j = 0; j<c; j++){
            cin>>v;
            d2.setValue(i,j,v);
        }
    }

    cout<<"The values are : "<<endl;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
             cout<<d2.getValue(i,j)<<" ";
        }
        cout<<endl;
    }
    r = 2;
    c = 3;
    d2.allocate(r,c);

    for(int i = 0; i<r; i++){
        cout<<"Enter the value of row : "<<i+1<<endl;
        for(int j = 0; j<c; j++){
            cin>>v;
            d2.setValue(i,j,v);
        }
    }

    cout<<"The values are : "<<endl;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
             cout<<d2.getValue(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
