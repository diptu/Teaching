#include "complex.h"

int main()
{
    Complex A(3,-1), B(2,-2);
    Complex temp;

    A.Print();
    B.Print();

    cout<<"\nAddition: \n";
    temp = A.operator+(B);
    temp = A + B;
    temp.Print();

    cout<<"\nSubtraction: \n";
    temp = A - B;
    temp.Print();

    temp = A - 7;
    temp.Print();

    temp = 7 - A;
    temp.Print();

    cout<<"\nMultiplication: \n";
    temp = A*B;
    temp.Print();

    temp = 7*A;
    temp.Print();

    temp = A*7;
    temp.Print();

    cout<<"\nDivision: \n";
    temp = A/B;
    temp.Print();


    return 0;
}
