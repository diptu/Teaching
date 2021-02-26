#include<iostream>
using namespace std;
int main()
{
    int *A = NULL;
    int numberOfRows,i,j;

    cout<<"Enter the number of rows";
    cin>>numberOfRows;

    A = new int[numberOfRows];

    cout<<"Enter the values";
    for(i=0;i<numberOfRows;i++)
        cin>>A[i];

    cout<<"The values are " ;
    for(j=0;j<numberOfRows;j++)
        cout<<A[j]<<" ";

    delete [] A;
    A=NULL;
    return 0;


}
