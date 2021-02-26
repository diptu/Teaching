#ifndef COMPLEX_H
#define COMPLEX_H


class complex
{

    friend complex operator-(complex &a,complex &b);
    friend complex operator-(int value,complex &b);
    friend complex operator-(complex &a,int value);

    friend complex operator*(complex &a,complex &b);

    public:
        complex();
        complex(double,double);
        complex operator+(complex);
         void print();
        ~complex();


    protected:

    private:
        double Real,Imaginary;

};

#endif // COMPLEX_H
