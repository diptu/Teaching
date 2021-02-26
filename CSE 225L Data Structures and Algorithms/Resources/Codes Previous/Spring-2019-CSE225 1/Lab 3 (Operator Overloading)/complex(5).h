#ifndef COMPLEX_H_INCLUDE
#define COMPLEX_H_INCLUDE
class complex{


    friend complex operator-(complex &a, complex &b);
    friend complex operator-(int value, complex &a);
    friend complex operator-(complex &a, int value);

    friend complex operator*(Complex &a,complex &b);
    friend complex operator*(int value,Complex &a);
    friend complex operator*(Complex &a,int value);

public:
    complex();
    complex (double,double);
    complex operator+(complex);
    void Print();

    private:
        double Real,Imaginary;


};
#endif // COMPLEX_H_INCLUDE
