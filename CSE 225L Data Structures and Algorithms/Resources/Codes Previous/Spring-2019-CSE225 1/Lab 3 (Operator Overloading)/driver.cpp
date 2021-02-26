#include "complex.h"

int main()
{
    Complex A(1,2), B(2,3);
    Complex temp;

    A.Print();
    B.Print();

    temp = A.operator+(B);
    temp = A + B;
    temp.Print();

    temp = A - B;
    temp.Print();

    temp = A - 7;
    temp.Print();

    temp = 7 - A;
    temp.Print();

    temp = A*B;
    temp.Print();

    temp = 7*A;
    temp.Print();

    temp = A*7;
    temp.Print();



    return 0;
}
