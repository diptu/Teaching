#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex
{
    friend Complex operator-(Complex &a, Complex &b);
    friend Complex operator-(int value, Complex &a);
    friend Complex operator-(Complex &a,int value);
    friend Complex operator*(Complex &a, Complex &b);
    friend Complex operator*(Complex &a,int value);
    friend Complex operator*(int value, Complex &a);

public:
    Complex();
    Complex(double,double);
    Complex operator+(Complex);
    void print();

private:
    double Real, Imaginary;
};
#endif // COMPLEX_H_INCLUDED
