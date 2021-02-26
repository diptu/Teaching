#include <iostream>
using namespace std;
#ifndef COMPLEX_H_INCLUDE
#define COMPLEX_H_INCLUDE

class Complex

{
    public:
    Complex();
    Complex(double, double);
    Complex Add(Complex);
    Complex Substract(Complex);
    void Print();
    private:
    double Real, Imaginary;
    #endif


};
#include "complex.h"
#include <iostream>
using namespace std;
Complex::Complex()
{
    Real = 0;
    Imaginary = 0;
}

Complex::Complex(double r, double i)
{
    Real = r;
    Imaginary = i;
}
Complex Complex::Add(Complex c)
{
    Complex t;
    t.Real = Real + c.Real;
    t.Imaginary = Imaginary + c.Imaginary;
    return t;
}
Complex Complex::Substract(Complex c)
{
    Complex t;
    t.Real = Real -  c.Real;
    t.Imaginary = Imaginary - c.Imaginary;
    return t;
}

void Complex::Print()
{
    cout << Real << endl;
    cout << Imaginary << endl;
}

#include "complex.h"
#include <iostream>

using namespace std;

int main()
{

	Complex A(1,1);
	Complex B(2,3);
	Complex C;
	Complex D;
	C = A.Add(B);
	D = A.Substract(B);
 	C.Print();
 	D.Print();
	return 0;
}

