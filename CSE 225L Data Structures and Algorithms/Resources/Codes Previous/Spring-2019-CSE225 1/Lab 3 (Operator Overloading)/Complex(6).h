#ifndef LAB3_COMPLEX_H
#define LAB3_COMPLEX_H


class Complex
{
    friend Complex operator-(Complex &a,Complex &b);
    friend Complex operator-(int value,Complex &a);
    friend Complex operator-(Complex &a,int value);

    friend  Complex operator*(Complex &a,Complex &b);
    friend Complex operator*(int value,Complex &a);
    friend Complex operator*(Complex &a,int value);

public:
    Complex ();
    Complex (double, double);
    Complex operator+(Complex);
    void Print();

private:
    double real , imaginary ;
};


#endif //LAB3_COMPLEX_H
