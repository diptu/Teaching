#include "dynarr.h"
#include "dynarr.cpp"
#include <iostream>

using namespace std;

int main()
{
    int v1;
    int v2;
    dynArr<double> d1(5);
    dynArr<double> d2(5);

    for(int i=0; i<5; i++)
    {
        cin>>v1;
        cin>>v2;
        d1.setValue(i,v1);
        d2.setValue(i,v2);
    }
    for(int i=0;i<5; i++)
    {
        cout<< d1.getValue(i) << " " << d2.getValue(i) <<endl;
    }

    return 0;
}
