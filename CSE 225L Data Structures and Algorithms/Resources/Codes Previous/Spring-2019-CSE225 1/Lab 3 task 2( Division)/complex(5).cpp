
#include<math.h>
#include <iostream>
#include "complex.h"
using namespace std;

complex::complex()
{
    Real=0;
    Imaginary=0;
}

complex::complex(double r,double i)
{
    Real=r;
    Imaginary=i;
}
complex complex::operator+(complex a)
{
  complex t;
  t.Real=Real+a.Real;
  t.Imaginary=Imaginary+a.Imaginary;
  return t;
}
void complex::print()
{
    cout<<Real<<",";
    cout<<Imaginary<<endl;
    cout<"      ";

}

complex operator-(complex &a,complex &b)
{
    complex t;
    t.Real=a.Real-b.Real;
    t.Imaginary=a.Imaginary-b.Imaginary;
    return complex(t);

}

complex operator-(complex &a,int value)
{
    complex t;
    t.Real=a.Real-value;
    t.Imaginary=a.Imaginary;
    return complex(t);
}
complex operator-(int value,complex &a)
{
complex t;
t.Real=value-a.Real;
t.Imaginary=0-a.Imaginary;
return complex(t);
}

complex operator*(complex &a,complex &b)
{
    complex t;
    t.Real=(a.Real*a.Real)-(a.Imaginary*b.Imaginary);
    t.Imaginary=(a.Real*b.Imaginary)+(a.Imaginary*b.Real);
    return complex(t);

}
 complex operator /(complex &a,complex &b)
{
     complex t;
	t.Real=(((a.Real)*(b.Real))+((a.Imaginary)*(b.Imaginary)))/(pow(b.Real,2)+pow(b.Imaginary,2));
t.Imaginary=(((b.Real)*(a.Imaginary))-((a.Real)*(b.Imaginary)))/(pow(b.Real,2)+pow(b.Imaginary,2));
return complex(t);
}
complex::~complex()
{
    //dtor
}
