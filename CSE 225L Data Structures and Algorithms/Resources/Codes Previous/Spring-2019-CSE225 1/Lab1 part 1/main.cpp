#include <iostream>

using namespace std;

int main()
{
    // part 01

    int s;
    cout << "Array size : ";  cin >> s;

    int *a = new int[s];

    cout << "Input : ";
    for(int j=0; j<s; j++){
        cin >> a[j];
    }

    cout << "Output : " << endl;
    for(int j=0; j<s; j++){
        cout << a[j] << " ";
    }cout << endl;

    delete [] a;

    // part 02
    cout << endl;

    int o, p;
    char **matrix;
    cout << "Row & Column : ";
    cin >> o >> p;

    matrix = new char*[o];
    for(int j=0; j<o; j++){
        matrix[j] = new char[p];
    }

    cout << "Input : ";
    for(int j=0; j<o; j++){
        for(int k=0; k<p; k++){
            cin >> matrix[j][k];
        }
    }

    cout << "Output : " << endl;
    for(int j=0; j<o; j++){
        for(int k=0; k<p; k++){
            cout << matrix[j][k] << " ";
        }
        cout << endl;
    }

    for(int j=0; j<o; j++){
        delete [] matrix[j];
    }
    delete [] matrix;

    // part 03
    cout << endl;

    int **matrix3;
    cout << "Row : ";
    cin >> o;

    int ar[s] = {};

    matrix3 = new int*[o];
    for(int j=0; j<o; j++){
        cout << "Column : ";
        cin >> p;
        ar[j] = p;
        matrix3[j] = new int[p];
    }

    cout << "Input : ";
    for(int j=0; j<o; j++){
        for(int k=0; k<ar[j]; k++){
            cin >> matrix3[j][k];
        }
    }

    cout << "Output : " << endl;
    for(int j=0; j<o; j++){
        for(int k=0; k<ar[j]; k++){
            cout << matrix3[j][k] << " ";
        }
        cout << endl;
    }

    for(int j=0; j<o; j++){
        delete [] matrix3[j];
    }
    delete [] matrix3;



    return 0;
}
