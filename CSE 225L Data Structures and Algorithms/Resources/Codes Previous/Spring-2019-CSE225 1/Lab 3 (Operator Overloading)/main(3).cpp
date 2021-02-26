#include <iostream>
using namespace std;

#include "Complex.h"

int main()
{
       Complex c(3,4),d(5,6);
       Complex r = c+d;
       r.Print();

       Complex t = c-d;
       t.Print();

       Complex m = c*3;
       m.Print();
}