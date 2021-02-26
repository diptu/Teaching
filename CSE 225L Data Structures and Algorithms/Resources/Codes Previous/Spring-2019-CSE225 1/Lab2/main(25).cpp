#include "dynarr.h"
#include "dynarr.cpp"
#include <iostream>
using namespace std;

int main()
{

    int n;
    int sizearray;
    dynArr<int> d1;
    dynArr<int> d2(5);

    cout << "enter array";
    cin >> sizearray;

    for(int i=0; i<sizearray; i++)
    {
        cin >> n;
        d2.setValue(i,n);

    }
     for(int i=0;i<sizearray;i++)
    {
        cout << d2.getValue(i) << " ";

    }


 d2.allocate(7);
 cout << "enter array";
 cin >> sizearray;

 for(int i=0; i<sizearray; i++)
    {
        cin >> n;
        d2.setValue(i,n);

    }
     for(int i=0;i<sizearray;i++)
    {
        cout << d2.getValue(i) << " ";

    }


return 0;


}

