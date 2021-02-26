#include "complex.h"
#include<iostream>
using namespace std;

complex::complex()
{
    Real=0;
    Imaginary=0;
}
complex::complex(double r, double i)
{
    Real=r;
    Imaginary;
}
complex complex::operator+(complex a)
{
    complex t;
    t.Real=Real+a.Real;
    t.Imaginary=Imaginary+a.Imaginary;
    return t;
}
void complex::Print()
{
    cout<<Real<<endl;
    cout<<Imaginary<<endl;
}
complex operator-(complex &a,complex &b)
{
    complex t;
    t.Real=a.Real-b.Real;
    t.Imaginary=a.Imaginary-b.Imaginary;
    return complex(t);

}
complex operator-(complex &a, int value)
{
    complex t;
    t.Real=a.Real-value;
    t.Imaginary=a.Imaginary;
    return complex(t);
}

complex operator-(int value, complex &a)
{
    complex t;
    t.Real=value-a.Real;
    t.Imaginary=0-a.Imaginary;
     return complex(t);

}
complex operator*(complex &a,complex &b)
{
    complex t;
    t.Real = (a.Real * b.Real) - (a.Imaginary * b.Imaginary);
    t.Imaginary = (a.Imaginary * b.Real) + (a.Real * b.Imaginary);
    return complex(t);
}
complex operator*(int value ,complex &a)
{
    complex t;
    t.Real = a.Real * value ;
    t.Imaginary = a.Imaginary * value ;
}

complex operator*(complex &a,int value )
{
    complex t;
    t.Real = a.Real * value ;
    t.Imaginary = a.Imaginary * value ;
}


