#include <iostream>

using namespace std;

int main()
{
    int Size1;
    int *a = NULL;
     cin >> Size1;
     a = new int[Size1];

    for( int i=0; i<Size1; i++)
    {
        cin >> a[i];
    }

    for (int j = 0; j < Size1; j++)
    {
      cout << a[j] << " ";
    }
      delete [] a;
      a = NULL;


    int rows, colums;
    char **C;

    cout << "Enter number of rows and colums : ";

    cin >> rows >> colums;

    C = new char*[rows];

    for(int i = 0 ; i<rows ; i++)
    {
       C[i] = new char[colums];
    }

    for(int i = 0 ; i<rows ; i++)
    {
       for(int j = 0 ; j<colums ; j++)
       {
          cin >> C[i][j];
       }
    }
     for(int i = 0 ; i<rows ; i++)
    {
       for(int j = 0 ; j<colums ; j++)
       {
          cout << C[i][j];
       }
    }

    for(int i = 0 ; i,rows ; i++)
    {
       delete [] C[i];
    }

    delete [] C;

    cout << endl;
}

