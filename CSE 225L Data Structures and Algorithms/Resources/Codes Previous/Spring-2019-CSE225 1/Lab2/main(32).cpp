#include "dynarr.h"
#include "dynarr.cpp"
#include <iostream>

using namespace std;

int main()
{
    dynArr<int>a;
    dynArr<double>b(5);

    int i;
    double x;

    cout << "Input : " << endl;
    for(i=0;i<5;i++){
        cin >> x;
        b.setValue(i, x);
    }

    cout << "Output : " ;
    for(i=0;i<5;i++){
        cout << b.getValue(i) << " " ;
    }
    cout << endl;
    return 0;
}

