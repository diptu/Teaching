#include <iostream>
using namespace std;
int main()
{
    int rows ,columns,a,b,value;
    dynArr ob1;
    cout<< "row size: ";
    cin>>rows;
    cout<<"column size:";
    cin>>columns;
    ob1.allocate(rows,columns);

    cout<<"Enter array elements:\n";
    for(int i=0;i<rows;i++)
        for(int j=0;j<columns;j++)
    {
        cout<<"element[" <<i << "]" <<"["<<j<<"]:";
        cin>>value;
        ob1.setValue(i,j,value);
    }

}
