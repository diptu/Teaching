#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include <iostream>
using namespace std;

class Complex {
    friend Complex operator-(Complex &a, Complex &b);
    friend Complex operator-(double value, Complex &a);
    friend Complex operator-(Complex &a, double value);

    friend Complex operator*(Complex &a, Complex &b);
    friend Complex operator*(double value, Complex &a);
    friend Complex operator*(Complex &a, double value);

    friend Complex operator/(Complex &a, Complex &b);

  public:
    Complex();
    Complex(double, double);
    Complex operator+(Complex);
    void print();

  private:
    double real, imaginary;
};

#endif // COMPLEX_H_INCLUDED
