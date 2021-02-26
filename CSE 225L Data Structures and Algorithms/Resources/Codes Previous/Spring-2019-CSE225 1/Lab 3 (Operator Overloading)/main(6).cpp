#include<iostream>
#include "complex.h"
using namespace std;

int main()
{
    Complex A(5,5);
    Complex B(5,5);
    Complex C = A+B;
    cout << "complex + complex " << endl;
    C.Print();

    Complex D(5,5);
    Complex E(5,5);
    Complex F = D-E;
       cout << "complex - complex " << endl;
    F.Print();

    Complex G = D-2;
    cout << "complex - real " << endl;
    G.Print();

    Complex H = 4-D;
    cout << "real - complex " << endl;
    H.Print();

    Complex I(4,3);
    Complex J(5,5);
    Complex k = I*J;
    cout << "Complex*Complex : " <<endl;
    k.Print();

    Complex L =I*2;
    cout << "Complex*real : " << endl;;

    L.Print();

    Complex M = 3*I;

    cout << "real*Complex : " <<endl;
    M.Print();



    return 0;
}
