#include "complex.h"
#include<iostream>
using namespace std;

int main()
{
    complex m(10,8),n(2,5);
    complex p=m+n;
    p.Print();

    complex q=m-n;
    q.Print();

    complex l = m*n ;
    l.Print();
}
