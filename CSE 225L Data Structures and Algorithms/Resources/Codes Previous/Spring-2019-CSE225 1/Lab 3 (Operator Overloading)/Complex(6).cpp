#include "Complex.h"
#include<iostream>
using  namespace std ;

Complex::Complex()
{
    real = 0;
    imaginary = 0;
}

Complex::Complex(double r , double i)
{
    real = r ;
    imaginary = i ;
}

Complex Complex::operator+(Complex a)
{
    Complex t;
    t.real = real + a.real ;
    t.imaginary = imaginary + a.imaginary ;
    return t ;
}

void Complex::Print()
{
    cout<<real<<"+"<<imaginary<<"i"<<endl;

}
Complex operator-(Complex &a, Complex &b)
{
    Complex t;
    t.real = a.real - b.real ;
    t.imaginary = a.imaginary - b.imaginary ;
    return Complex(t);
}

Complex operator-(Complex &a,int value)
{
    Complex t;
    t.real = a.real -value ;
    t.imaginary = a.imaginary ;
    return Complex(t);
}

Complex operator-(int value, Complex &a)
{
    Complex t;
    t.real = value - a.real ;
    t.imaginary = 0 - a.imaginary ;
    return Complex(t);
}

Complex operator*(Complex &a,Complex &b)
{
    Complex t ;
    t.real = (a.real * b.real) - (a.imaginary * b.imaginary);
    t.imaginary = (a.imaginary * b.real) +  (a.real * b.imaginary);
    return Complex(t);
}

Complex operator*(int value,Complex &a)
{
    Complex t;
    t.real = a.real * value;
    t.imaginary = a.imaginary * value;
    return Complex(t);

}
Complex operator*(Complex &a,int value)
{
    Complex t;
    t.real = a.real * value;
    t.imaginary = a.imaginary * value;
    return Complex(t);

}












