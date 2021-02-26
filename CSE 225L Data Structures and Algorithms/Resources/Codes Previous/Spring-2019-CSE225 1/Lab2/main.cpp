#include<iostream>
#include"dynarr.cpp"
using namespace std;

int main()
{
    dynArr<int>q;
    dynArr<int>d(5);
    int i;
    int n;
    int p;
    for(i=0;i<5;i++)
    {

        cout<<"enter values" <<endl;
        cin>>n;
        d.setvalue(i,n);


    }
    for(i=0;i<5;i++)

        cout<<d.getValue(i)<<endl;

        d.alloacate(7);
        for(i=0;i<7;i++)
        {
            cout<< "enter values"<<endl;
            cin>>p;
            d.setValue(i,p);
        }

    for(i=0;i<7;i++)
        cout<<d.getValue(i)<<endl;

    return 0;



}
