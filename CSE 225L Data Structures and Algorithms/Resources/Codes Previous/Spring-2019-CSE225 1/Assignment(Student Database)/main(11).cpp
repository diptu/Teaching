#include<iostream>
#include"2DdynArr.h"


using namespace std;

int main()
{
    int row,col,i,j;

    cout<<"Number of rows: "<<endl;
    cin>>row;
    cout<<"Number of columns: "<<endl;
    cin>>col;

    dynArr d(row,col);

    cout<<"Enter elements of array: "<<endl;
    for(i=0;i<row;i++)
    {

        for(j=0;j<col;j++)

            int temp;
        cin>>temp;
        d.setValue(i,j,temp);
    }


cout<<"Array: "<<endl;
for(i=0; i<row;i++)

{
    for(j=0;j<col;j++)
        cout<<d.getValue(i,j)<<" ";

    cout<<endl;
}
}
