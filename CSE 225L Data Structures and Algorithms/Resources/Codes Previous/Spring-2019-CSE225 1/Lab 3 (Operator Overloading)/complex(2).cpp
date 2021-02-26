#include "complex.h"
#include <iostream>
using namespace std;

Complex::Complex()
{
    real=0;
    imaginary=0;
}

Complex::Complex(double r,double i)
{
    real=r;
    imaginary=i;
}

Complex Complex::operator+(Complex a)
{
    Complex t;
    t.real=real+a.real;
    t.imaginary=imaginary+a.imaginary;
    return t;
}

void Complex::Print()
{
    cout<<real<<endl<<imaginary<<endl;
}

Complex operator-(Complex&a,Complex &b)
{
    Complex t;
    t.real=a.real-b.real;
    t.imaginary=a.imaginary-b.imaginary;
    return t;
}

Complex operator-(Complex &a,int value)
{
    Complex t;
    t.real=a.real-value;
    t.imaginary=a.imaginary-value;
    return t;
}

Complex operator-(int value,Complex &a)
{
    Complex t;
    t.real=value-a.real;
    t.imaginary=value-a.imaginary;
    return t;
}

Complex operator*(Complex &a,Complex &b)
{
    Complex t;
    t.real=(a.real*b.real)-(a.imaginary*b.imaginary);
    t.imaginary=(a.imaginary*b.real)+(a.real*b.imaginary);
    return t;
}

Complex operator*(int value,Complex &a)
{
    Complex t;
    t.real=a.real*value;
    t.imaginary=a.imaginary*value;
    return t;
}

Complex operator*(Complex &a,int value)
{
    Complex t;
    t.real=a.real*value;
    t.imaginary=a.imaginary*value;
    return t;
}
