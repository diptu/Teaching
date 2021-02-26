#include <iostream>
#include "dynarr.h"
#include "dynarr.cpp"

using namespace std;

int main()
{
    int i,n,row,col,j;
    dynArr<int> d1();
    cout<<"Type number of rows in 2D array:";
    cin>>row;
    cout<<"Type number of columns in 2D array:";
    cin>>col;
    dynArr<int> d2(row,col);
    cout<<"give value for 2D array"<<endl;
    for(i=0; i<row; i++)
    {
         for(j=0; j<col; j++){
             cout<<"["<<i<<","<<j<<"] :";
                 cin>>n;
        d2.setValue(i,j,n);}
    }
    cout<<"your array values:"<<endl;
    for(i=0; i<row; i++)
    {
         for(j=0; j<col; j++){
            cout<<"["<<i<<","<<j<<"] :";
        cout << d2.getValue(i,j) << endl;}
    }
    return 0;

}
