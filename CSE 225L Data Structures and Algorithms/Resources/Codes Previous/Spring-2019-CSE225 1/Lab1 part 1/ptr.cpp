#include <bits/stdc++.h>

using namespace std;

int main()
{
  //TASK1
    int n;
    cin >> n;
    int *a = new int[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }

    delete [] a;

    //2D INT GRID TASK3

    cout << endl;
    int r,c;
    cin >> r >> c;
    int **matrix;

    matrix = new int*[r];
    for(int i=0; i<r; i++)
    {
        matrix[i] = new int[c];
    }

    for(int i=0;i<r;i++) {
        for(int j=0; j<c;j++) {
            cin >> matrix[i][j];
        }
    }

     for(int i=0;i<r;i++) {
        for(int j=0; j<c;j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl ;
    }



    for(int i=0; i<r; i++)
    {
        delete [] matrix[i];
    }
    delete [] matrix;


    //2D Char GRID TASK2
    cout << endl;
      int r1,c1;
    cin >> r1 >> c1;
    char **matrix1;

    matrix1 = new char*[r1];
    for(int i=0; i<r1; i++)
    {
        matrix1[i] = new char[c1];
    }

    for(int i=0;i<r1;i++) {
        for(int j=0; j<c1;j++) {
            cin >> matrix1[i][j];
        }
    }

     for(int i=0;i<r1;i++) {
        for(int j=0; j<c1;j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl ;
    }



    for(int i=0; i<r1; i++)
    {
        delete [] matrix1[i];
    }
    delete [] matrix1;

    return 0;
}
