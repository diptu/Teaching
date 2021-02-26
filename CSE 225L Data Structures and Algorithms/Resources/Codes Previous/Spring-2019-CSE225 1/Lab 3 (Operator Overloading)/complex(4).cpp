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
Complex Complex::operator+(Complex a)
{
    Complex t;
    t.Real = Real + a.Real;
    t.Imaginary = Imaginary + a.Imaginary;
    return t;
}
void Complex::Print()
{
    cout << "real part: " << Real << ", imaginary part: " << Imaginary << endl;
}


// this part is out of the class
Complex operator-(Complex &a,Complex &b)
{
    Complex t;
    t.Real = a.Real - b.Real;
    t.Imaginary = a.Imaginary - b.Imaginary;
    return t;
}
Complex operator-(int value, Complex &a)
{
    Complex t;
    t.Real = value - a.Real;
    t.Imaginary = value - a.Imaginary;
    return t;
}
Complex operator-(Complex &a, int value)
{
    Complex t;
    t.Real = a.Real - value;
    t.Imaginary = a.Imaginary - value;
    return t;
}
Complex operator*(Complex &a,Complex &b)
{
    Complex t;
    t.Real = a.Real*b.Real;
    t.Imaginary = a.Imaginary*b.Imaginary;

    return t;
}
Complex operator*(Complex &a,int value)
{
    Complex t;
    t.Real=a.Real*value;
    t.Imaginary=a.Imaginary;
    return t;
}

Complex operator*(int value,Complex &a)
{
    Complex t;
    t.Real = value*a.Real;
    t.Imaginary=a.Imaginary;
    return t;
}
