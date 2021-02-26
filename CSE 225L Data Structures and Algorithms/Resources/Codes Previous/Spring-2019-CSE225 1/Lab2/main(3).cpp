#include <iostream>
//#define"tdarray.h"
#define"tdarray.cpp"
using namespace std;

int main()
{
    int row, col, i, j;
    cout << "enter row num " << endl;
    cin>>row;
     cout << "enter column num " << endl;
    cin>>col;
    dynArr d(row,col);
    cout << "enter the ellement " << endl;
    for(int i=0; i<row; i++)
    {
        for(int i=0; j<col; i++)
        {
            int t;
            cin>>t;
            d.setValue(i,j,t);
        }
    }
cout << "array= " << endl;

    for(int i=0; i<row; i++)
    {
        for(int i=0; j<col; i++)
        {

            cout<< d.getValue(i,j);
        }
    }


    return 0;
}
