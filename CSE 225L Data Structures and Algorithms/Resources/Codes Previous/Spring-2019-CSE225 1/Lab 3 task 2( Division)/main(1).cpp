#include<iostream>
#include "complex.h"
using namespace std;

int main()
{
    Complex A(1, 2), B(3, 1), A1, S1, S2, S3, M1, M2, M3, D1;

    A1=A.operator+(B);
    A1.Print();
    cout<<endl;

    S1=operator-(A, B);
    S1.Print();
    cout<<endl;

    S2=operator-(2, A);
    S2.Print();
    cout<<endl;

    S3=operator-(A, 1);
    S3.Print();
    cout<<endl;

    M1=operator*(A, B);
    M1.Print();
    cout<<endl;

    M2=operator*(3, A);
    M2.Print();
    cout<<endl;

    M3=operator*(A, 2);
    M3.Print();
    cout<<endl;

    D1=operator/(A, B);
    D1.Print();
    cout<<endl;
}
