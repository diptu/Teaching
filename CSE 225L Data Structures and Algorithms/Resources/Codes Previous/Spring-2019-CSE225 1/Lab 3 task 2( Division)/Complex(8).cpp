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
    cout<<real<<"+"<<"("<<imaginary<<"i"<<")"<<endl<<endl;

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

Complex operator/(Complex &a,Complex &b)
{
    Complex t;
    double div = ((b.real*b.real)+(b.imaginary*b.imaginary));
    t.real = ((a.real*b.real)+(a.imaginary*b.imaginary))/div;
    t.imaginary = ((a.imaginary*b.real)-(a.real*b.imaginary))/div;
    return t;

}

Complex operator/(int n,Complex &a) {
    Complex t;
    t.real = (n * a.real) / ((a.real * a.real) + (a.imaginary * a.imaginary));
    t.imaginary = (n * a.imaginary) / ((a.real * a.real) + (a.imaginary * a.imaginary));
    return t;
}
Complex operator/(Complex &a,int n)
{
 Complex t;
 t.real = a.real / n;
 t.imaginary = a.imaginary / n ;
    return t;
}










