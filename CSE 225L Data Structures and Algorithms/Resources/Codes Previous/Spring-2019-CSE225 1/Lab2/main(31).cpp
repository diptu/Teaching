#include <bits/stdc++.h>
#include "dynArr.h"
#include "dynArr.cpp"

using namespace std;

int main()
{

    dynArr <int> b;
    dynArr <int> a(5);

    cout << "Insert Values: " << endl;

    for(int i=0;i<5;i++)
    {
        int x;
        cin >> x;
        a.setValue(i,x);
    }

    for(int i=0; i<5;i++)
    {
        int y;
        y = a.getValue(i);
        cout << y << " ";
    }
    cout << endl;

    return 0;
}
