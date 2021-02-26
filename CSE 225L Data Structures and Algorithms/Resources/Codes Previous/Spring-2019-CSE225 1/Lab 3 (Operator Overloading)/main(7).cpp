#include <iostream>
#include"complex.h"
using namespace std;

int main(void)
{
	Complex A(2,5), B(2,4);
	Complex C,D;
	C = A.Add(B);
	D=A.Substract(B);
 	C.Print();
 	D.Print();
	return 0;
}
#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex
{
  friend  Complex operator-(Complex &a,Complex &b);
   friend  Complex operator-(int value,Complex &a);
   friend  Complex operator-(Complex &a,int value);

   public:
       Complex();
        Complex(double,double);
         Complex Add(Complex);
         Complex Substract(Complex);
         void Print();

   private:
    double Real,Imaginary;
};
#endif // COMPLEX_H_INCLUDED
#include"complex.h"
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
    t.Real=Real-c.Real;
    t.Imaginary =Imaginary-c.Imaginary;
    return t;
}
void Complex::Print()
{
    cout << Real << endl;
    cout << Imaginary << endl;
}
