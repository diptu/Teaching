task1

#include"dynArr.h"
#include<iostream>
using namespace std;

int main()
{
dynArr d1();
dynArr d2(5);
int number,i;
cout<<"Enter the five number:";
for( i=0;i<5;i++){
    cin>>number;
d2.setValue(i,number);
}
for( i=0;i<5;i++)
    cout<<d2.getValue(i)<<endl;




    return 0;
}


task2

#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
class dynArr
{
   private:
       int *data;
       int size;
   public:
        dynArr();
        dynArr(int);
        ~dynArr();
        void setValue(int,int);
        int getValue(int);
        void allocate(int);

};
#endif // DYNARR_H_INCLUDED

task4

#include "dynarr.h"
#include "dynarr.cpp"
#include <iostream>
using namespace std;

int main()
{
    dynArr<int> di(10);
    dynArr<double> dd(10);
    int i;

    for(i=0;i<10;i++)
    {
        di.setValue(i,3*i+1);
        dd.setValue(i,7.29*i/1.45);
    }
    for(i=0;i<10;i++)
        cout << di.get(i) << " " << dd.getValue(i) << endl;

    return 0;
}

