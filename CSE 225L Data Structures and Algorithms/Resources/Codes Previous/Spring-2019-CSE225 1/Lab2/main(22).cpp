#include "dynarr.h"
#include "dynarr.cpp"
#include <iostream>

using namespace std

int main () {
    dymArr <int> x ;
    dymArr <double> g [5] ;
}

int i ;
double d ;

cout << " Input : " << endl ;

for (i=0 ; i <5 ; i++){
    cin >> d ;
    g.setValue (i,d);
}

cout << "Output  : " ;

for (i=0 ; i <5 ; i++ ) {
    cout << g.getValue (i) << " " << endl ;
}
cout<< endl ;
return 0 ;
