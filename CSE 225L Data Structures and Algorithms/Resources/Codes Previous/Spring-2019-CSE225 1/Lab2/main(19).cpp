#include <iostream>
#include"Dynarr.cpp"
using namespace std;

int main()
{
    int x;
    int y;
    cout<<"Enter Array Siz: "<<endl;
    cin>> y;
    Dynarr<double> D1();
    Dynarr<double> D2();
    D1.allocate(y);

    for(int i=0;i<5;i++)
    {
        cout<<"Enter Values: "<<endl;
        cin>> x;
        D1.setValue(i,x);
    }

    for(int i=0;i<y;i++)
    {
        cout<<D2.getValue(i)<<endl;

    }
}
