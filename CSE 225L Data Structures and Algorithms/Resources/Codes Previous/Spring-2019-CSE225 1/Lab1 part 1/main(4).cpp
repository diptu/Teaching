#include <iostream>

using namespace std;

int main()
{
    // task 01

    int n;
    cout << "Array size : ";  cin >> n;

    int *a = new int[n];

    cout << "Input : ";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    cout << "Output : " << endl;
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }cout << endl;

    delete [] a;

    // task 02
    cout << endl;

    int r, c;
    char **matrix;
    cout << "Row & Column : ";
    cin >> r >> c;

    matrix = new char*[r];
    for(int i=0; i<r; i++){
        matrix[i] = new char[c];
    }

    cout << "Input : ";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> matrix[i][j];
        }
    }

    cout << "Output : " << endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0; i<r; i++){
        delete [] matrix[i];
    }
    delete [] matrix;

    // task 03
    cout << endl;

    int **matrix3;
    cout << "Row : ";
    cin >> r;

    int ar[n] = {};

    matrix3 = new int*[r];
    for(int i=0; i<r; i++){
        cout << "Column : ";
        cin >> c;
        ar[i] = c;
        matrix3[i] = new int[c];
    }

    cout << "Input : ";
    for(int i=0; i<r; i++){
        for(int j=0; j<ar[i]; j++){
            cin >> matrix3[i][j];
        }
    }

    cout << "Output : " << endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<ar[i]; j++){
            cout << matrix3[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0; i<r; i++){
        delete [] matrix3[i];
    }
    delete [] matrix3;



    return 0;
}
