#include<iostream>
using namespace std;

#include "Complex.h"

int main()
{
    Complex x(2,5), y(1,3);

    Complex z = x+y;

    Complex t=x-y;

    Complex m =x*y;

    Complex q = x/y;

    z.print();
    t.print();
    m.print();
    q.print();

}
