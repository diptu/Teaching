

#include "complex.h"
#include <iostream>
using namespace std;

int main (void)
{
    Complex A(1,1), B(1,1);
	Complex C;
	C = A+B;
	cout << " adittion";
 	C.Print();


    Complex D(4,5), E(1,1);
	Complex F;
	F = D-E;
	cout << "substraction a and b";
 	F.Print();

 	Complex G= D - 5;
 	cout << "substraction a and value";
 	G.Print();

    Complex H = 5 - D;
    cout << "substraction value and a";
    H.Print();

    Complex I(5,5),J(5,5);
    Complex K;
    K = I*J;
    cout << "multiplication a and b";
    K.Print();

    Complex L;
    L = I*1;
    cout << "multipliucation a and value";
    L.Print();

   Complex M;
    M = 2*I;
    cout << "multiplication value and a";
    M.Print();

    Complex N(2,1),O(1,1);
    Complex P;
    P = N/O;
    cout << "division n and o";
    P.Print();

    Complex Q;
    Q = N/2;
    cout << "division n and value";
    Q.Print();

    Complex R;
    R = 3/N;
    cout << "division value and n";
    R.Print();

return 0;

}
