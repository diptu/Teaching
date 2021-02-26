#include <iostream>
#include"Dynarr.h"
using namespace std;

int main()
{
    int x;
    int y;
    cin>> y;
    Dynarr D1();
    Dynarr D2();
    D1.allocate(y);

    for(int i=0;i<5;i++)
    {
        cin>> x;
        D1.setValue(x);
    }

    for(int i=0;i<y;i++)
    {
        cout<<D2.getValue(i)<<endl;

    }
}
