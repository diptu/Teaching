#include<iostream>
#include "dynarr.h"
using namespace std;

int main()
{
     dynArr o1;
     dynArr o2(5);

     for(int i=0;i<5;i++)
     {
         o2.setValue(i,3*i+1);
     }

     for(int i=0;i<5;i++)
       {
           cout<<o2.getValue(i)<<endl;
       }
     return 0;
}
