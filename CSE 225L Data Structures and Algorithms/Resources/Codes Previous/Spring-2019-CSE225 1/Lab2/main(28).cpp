#include <iostream>
#include "dynArr.h"
using namespace std;

int main()
{  int n ;
    int arrsize;
    dynArr Ob1;
    dynArr Ob2 (5) ;
    cout<<"Enter 5 numbers"<<endl;
    for (int i = 0; i<arrsize ; i++ ) {
        cin>>n;
     Ob2.setValue(i,n ) ;

    }
}
