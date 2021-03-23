#include "complex.h"
#include <iostream>

using namespace std;

int main()
{
    Complex a(1,2);
    Complex b(2,5);
    Complex x = a + b;
    Complex y = a * b;
    Complex z = 3 * a;
    x.Print();
    y.Print();
    z.Print();
    return 0;
}
