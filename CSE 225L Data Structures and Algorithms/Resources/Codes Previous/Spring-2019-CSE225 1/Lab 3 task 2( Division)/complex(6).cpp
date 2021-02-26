#include "complex.h"
#include <iostream>
using namespace std;

Complex::Complex()
{
    Real =0;
    Imaginary = 0;
}

Complex::Complex(double r , double i)
{
    Real = r;
    Imaginary = i;
}

Complex Complex :: operator+(Complex a)
{
    Complex t;
    t.Real = Real + a.Real;
    t.Imaginary =Imaginary+a.Imaginary;
    return t;
}

void Complex::print()
{
    cout<<Real<<endl;
    cout<<Imaginary<<endl;
}

Complex operator-(Complex &a, Complex &b)
{
    Complex t;
    t.Real = a.Real-b.Real;
    t.Imaginary = a.Imaginary-b.Imaginary;
    return Complex(t);
}

Complex operator-(Complex &a, int value)
{
    Complex t;
    t.Real=a.Real-value;
    t.Imaginary = a.Imaginary;
    return Complex(t);
}

Complex operator- (int value, Complex &a)
{
    Complex t;
    t.Real = value-a.Real;
    t.Imaginary = 0-a.Imaginary;
    return Complex(t);
}

Complex operator* (Complex &a, Complex &b)
{
    Complex t;
    t.Real = (a.Real*b.Real)-(a.Imaginary*b.Imaginary);
    t.Imaginary = (a.Real*b.Imaginary)+(a.Imaginary*b.Real);
    return Complex(t);
}

Complex operator*(Complex &a, int value)
{
    Complex t;
    t.Real = value*a.Real;
    t.Imaginary=value*a.Imaginary;
    return Complex(t);
}

Complex operator*(int value, Complex &a)
{
    Complex t;
    t.Real = value*a.Real;
    t.Imaginary=value*a.Imaginary;
    return Complex(t);
}

Complex Complex::operator/(Complex a)
{
    Complex t;
    t.Real=Real/a.Real;
    t.Imaginary=Imaginary/a.Imaginary;
    return t;
}
