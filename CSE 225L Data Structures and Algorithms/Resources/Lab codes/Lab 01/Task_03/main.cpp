#include <iostream>

using namespace std;

int main()
{
    int rows;
    int **ptr = NULL;

    cout<< "Enter The number of rows for the matrix : ";
    cin>>rows;

    ptr = new int*[rows];
    int *cols = new int[rows];

    for(int i = 0; i<rows; i++)
    {
        cout<<"Enter the number of column for "<< i+1 << " row : ";
        cin>>cols[i];
        ptr[i] = new int[cols[i]];
        cout<< "Enter The Value of row : " << i+1 <<endl;
        for(int j = 0; j<cols[i]; j++)
        {
            cin>>ptr[i][j];
        }
    }

    cout<< "Printing the matrix : " <<endl;

    for(int i = 0; i<rows; i++)
    {
        cout<< "The Value of row : " << i+1 <<endl;
        for(int j = 0; j<cols[i]; j++)
        {
            cout<< ptr[i][j] <<" ";
        }
        cout<<endl;
    }

    for(int i = 0; i< rows; i++)
        delete [] ptr[i];

    delete [] ptr;
    delete [] cols;
    ptr = NULL;
    cols = NULL;

    return 0;
}
