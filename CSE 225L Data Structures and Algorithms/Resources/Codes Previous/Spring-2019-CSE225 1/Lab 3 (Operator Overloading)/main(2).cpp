#include<iostream>
using namespace std;

#include "Complex.h"

int main()
{
    Complex x(3,4), y(4,3);
    Complex z = x+y;
    z.print();

    Complex t=x-y;
    t.print();

    Complex m =x*y;
    m.print();

    Complex q = x*3;
    q.print();

}
