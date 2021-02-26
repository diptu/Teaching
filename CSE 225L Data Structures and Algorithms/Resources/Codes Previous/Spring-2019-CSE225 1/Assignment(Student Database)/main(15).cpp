#include <iostream>
#include "2Ddynarr.h"
#include "2Ddynarr.cpp"

using namespace std;

int main()
{
    int row, column;

    cout<<"Number of rows: "<<endl;
    cin>>row;
    cout<<"Number of columns: "<<endl;
    cin>>column;

    dynArr d(row, column);
    cout<<"Enter elements of the array: "<<endl;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            int temp;
            cin>>temp;
            d.setValue(i);
            d.setValue(j);
            d.setValue(temp);
        }
    }
    cout<<"Array: "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
            cout<< d.getValue(i)<< d.getValue(j)<<" "<<endl;
    }
}
