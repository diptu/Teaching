#include <iostream>
using namespace std;

#include "Complex.h"

int main()
{
       Complex c(3,-2),d(7,-5);
       Complex r = c+d;
       r.Print();

       Complex t = c-d;
       t.Print();

       Complex m = c*3;
       m.Print();

       Complex n = c/d;
       n.Print();

       Complex f = 8/c ;
       f.Print();

       Complex g = c/8;
       g.Print();
}