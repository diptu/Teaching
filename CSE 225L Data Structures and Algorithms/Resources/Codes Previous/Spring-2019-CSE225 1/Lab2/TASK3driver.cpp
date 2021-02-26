#include "TASK3.h"
#include <iostream>
using namespace std;

int main()
{
    int rows,columns,r,c,value;
    dynArr ob1;

        cout << "row size: ";
        cin >> rows;
        cout << "column size:";
        cin>>columns;
        ob1.allocate(rows,columns);

    cout << "Enter array elements:\n";
    for(int i=0;i<rows;i++)
    for(int j=0;j<columns;j++)
    {

        cout<<"element[" << i << "]" <<"["<<j<<"]: ";
        cin >>value;
      ob1.setValue(i,j,value);

    }
    cout<<endl;

    for(int i=0;i<rows;i++)
    for(int j=0;j<columns;j++)
    {
        cout<<"row " << i+1 << " column " <<j+1<<": "<<ob1.getValue(i,j)<<endl;
    }

    return 0;
}

