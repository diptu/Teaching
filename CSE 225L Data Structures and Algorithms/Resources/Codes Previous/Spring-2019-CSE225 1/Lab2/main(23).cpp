#include "dynarr.h"
#include "dynarr.cpp"
#include <iostream>
using namespace std;

int main()
{
    double n;
    //int m;
    int sizeOfArray;
    dYnArr<int> d1();
    dYnArr<double> d2(5);

    cout << "Enter array size : " ;
    cin >> sizeOfArray;

    for(int i = 0 ; i<sizeOfArray ; i++)
    {
        cin >> n;
        d2.setValue(i,n);
    }

    for(int i = 0 ; i <sizeOfArray ; i++)
    {
        cout << d2.getValue(i) << " ";
    }

    cout << endl;

    d2.allocate(7);

    cout << "Enter array size : " ;
    cin >> sizeOfArray;

    for(int i = 0 ; i<sizeOfArray ; i++)
    {
        cin >> n;
        d2.setValue(i,n);
    }

    for(int i = 0 ; i <sizeOfArray ; i++)
    {
        cout << d2.getValue(i) << " ";
    }

    cout << endl;

}
