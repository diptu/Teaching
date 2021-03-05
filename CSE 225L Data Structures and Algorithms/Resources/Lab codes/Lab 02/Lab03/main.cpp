#include "dynarr.h"
#include "dynarr.cpp"
#include <iostream>

using namespace std;

int main()
{
    int s, v1;
    double v2;
    cin>>s;

    dynArr<int> d1(s);
    dynArr<double> d2(s);

    cout <<"Insert " << s <<" integer value : "<<endl;
    for(int i = 0; i<s; i++)
    {
        cin>>v1;
        d1.setValue(i,v1);
    }

    for(int i = 0; i<s; i++)
    {

        cout<<d1.getValue(i)<<" ";
    }
    cout<<endl;
    cout <<"Insert " << s <<" float value : "<<endl;
    for(int i = 0; i<s; i++)
    {
        cin>>v2;
        d2.setValue(i,v2);
    }

    for(int i = 0; i<s; i++)
    {

        cout<<d2.getValue(i)<<" ";
    }

    return 0;
}
