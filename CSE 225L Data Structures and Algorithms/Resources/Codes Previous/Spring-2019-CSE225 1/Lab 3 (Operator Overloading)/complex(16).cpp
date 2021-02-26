#include "complex.h"
#include <iostream>
using namespace std ;

Complex :: Complex () {
    double real = imag = 0 ;
}
Complex :: Complex (double r , double i) {
    real = r ; imag = i ;
}
Complex Complex :: operator + (Complex a) {
    Complex t ;
    t.real = real + a.real ; t.imag = imag + a.imag ;
    return t ;
}
void Complex :: Print () {
cout << real << " + " << imag << "i" << endl;
}

Complex operator - (Complex &a , Complex &b) {
    Complex t ; t.real = a.real - b.real ;
    t.imag = a.imag - b.imag ;
    return Complex (t) ;
}

Complex operator - (Complex &a , int value ) {
    Complex t ; t.real = a.real - value ;
    t.imag = a.imag ;
    return Complex (t) ;
}
Complex operator - ( int value , Complex &a  ) {
    Complex t ; t.real = value - a.real ;
    t.imag = 0 - a.imag ;
    return Complex (t) ;
}
Complex operator * (Complex &a , Complex &b) {
    Complex t ;
    t.real = (a.real*b.real) - (a.imag *b.imag) ;
    t.imag = (a.real *b.imag) + (a.imag * b.real) ;
    return Complex( t) ;
}

Complex operator * (Complex &a , int value ) {
    Complex t ; t.real = a.real * value ;
    t.imag = a.imag * value ;
    return Complex (t) ;
}

Complex operator * (int value, Complex &a  ) {
    Complex t ; t.real = a.real * value ;
    t.imag = a.imag * value ;
    return Complex (t) ;
}
