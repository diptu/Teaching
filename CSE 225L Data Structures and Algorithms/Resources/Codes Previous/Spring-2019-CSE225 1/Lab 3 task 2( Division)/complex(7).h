//complex.h
#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUEDE

class complex
{
   public:
       complex();
       complex(double,double);
       complex division(complex);
       void print();

   private:
    double real,imaginary;
};
//complex.cpp
#endif // COMPLEX_H_INCLUDED
#include "complex.h"
#include <iostream>
using namespace std;

complex::complex()
{
    real=0;
    imaginary=0;
}
complex::complex(double r ,double i)
{
    real=r;
    imaginary=i;
}
complex complex::division(complex c)
{
     complex div;
  div.real = (real*c.real + imaginary*c.imaginary)/(c.real*c.real + c.imaginary*c.imaginary);
  div.imaginary = (imaginary*c.real + real*c.imaginary)/(c.real*c.real + c.imaginary*c.imaginary);
  return div;
}
void complex::print()
{
    cout <<"("<< real <<","<< imaginary<<")"<<endl ;


}
//main.cpp
#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
    complex A(1,1),B(2,2);
    complex D;
    D=A.division(B);
    D.print();
}
