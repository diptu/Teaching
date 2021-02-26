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

    for(j=0;j<numberOfRows;j++)
        cout<<A[j]<<" ";

    delete [] A;
    A=NULL;
    return 0;
}




int main()
{
    int numberOfRows, numberOfColumns, i, j;
    char **matrix;

    cout<<"Enter the number of rows and columns";
    cin>>numberOfRows>>numberOfColumns;

    matrix = new char*[numberOfRows];

    for(i=0;i<numberOfRows;i++)
        matrix[i]=new char[numberOfColumns];

    cout<<"Enter the values";
for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfColumns;j++)
        {
           cin>>matrix[i][j];
        }
    }

    cout<<"The strings are "<<endl;
    for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfColumns;j++)
        {
           cout<<matrix[i][j];
        }
        cout<<endl;
    }


    for(i=0;i<numberOfRows;i++)
        delete[] matrix[i];
    delete [] matrix;


}




#include<iostream>
using namespace std;
int main()
{
    int numberOfRows, columns, i, j,c[10];
    int **matrix;

    cout<<"Enter the number of rows";
    cin>>numberOfRows;

    matrix = new int*[numberOfRows];

    cout<<"Specify the number of columns for each row";

    for(i=0;i<numberOfRows;i++){
        cout<<"Enter the number of columns for row " <<i<<" ";
        cin>>columns;
        c[i]=columns;
        matrix[i]=new int[columns];
        cout<<"Enter the values";
        for(j=0;j<columns;j++)
            cin>>matrix[i][j];
    }

    cout<<"The array is "<<endl;
        for(i=0;i<numberOfRows;i++){
        for(j=0;j<c[i];j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    for(i=0;i<numberOfRows;i++)
        delete[] matrix[i];
    delete [] matrix;


}

