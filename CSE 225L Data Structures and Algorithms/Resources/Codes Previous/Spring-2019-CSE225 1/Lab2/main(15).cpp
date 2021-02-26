#include "dynarr.h"
#include "dynarr.cpp"
#include <iostream>

using namespace std;

int main()
{
    int r, c, i, j, x;
    cout << "Enter rows and columns number : ";
    cin >> r >> c;

    dynArr<int>ar;
    dynArr<double>ar2(r,c);

    cout << "\nInput : " << endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin >> x;
            ar2.setValue(i, j, x);
        }

    }

    cout << "\nOutput :" << endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout << ar2.getValue(i, j) << " " ;
        }
        cout << endl;
    }
    return 0;
}


