#include <iostream>

using namespace std;

int main()
{
    int s;
    int **ptr = NULL;

    cout<< "Enter The size of a matrix : ";
    cin>>s;

    ptr = new int*[s];

    for(int i = 0; i<s; i++)
        ptr[i] = new int[s];

    cout<< "Enter The Value of " << s <<" X " << s << "matrix."<<endl;

    for(int i = 0; i<s; i++)
    {
        cout<< "Enter The Value of row : " << i+1 <<endl;
        for(int j = 0; j<s; j++)
        {
            cin>>ptr[i][j];
        }
    }

    cout<< "Printing the matrix : " <<endl;

    for(int i = 0; i<s; i++)
    {
        cout<< "The Value of row : " << i+1 <<endl;
        for(int j = 0; j<s; j++)
        {
            cout<< ptr[i][j] <<" ";
        }
        cout<<endl;
    }

    for(int i = 0; i< s; i++)
        delete [] ptr[i];

    delete [] ptr;
    ptr = NULL;

    return 0;
}
