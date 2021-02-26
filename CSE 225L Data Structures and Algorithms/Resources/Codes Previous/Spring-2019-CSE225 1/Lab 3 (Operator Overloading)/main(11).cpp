#include "complex.h"
#include <iostream>

using namespace std;

int main()
{
    Complex A(5,3), B(6,1);
    Complex C;
    C=A+B;
    cout<<"The sum of the complex numbers is"<<endl;
    C.print();
    C=A-B;
    cout<<"The difference of the complex numbers is"<<endl;
    C.print();
    C=A-5;
    cout<<"The result of A-5"<<endl;
    C.print();
    C=9-B;
    cout<<"The result of 9-B"<<endl;
    C.print();
    C=A*B;
    cout<<"The product of the complex numbers is"<<endl;
    C.print();
    C=5*A;
    cout<<"The result of 5*A"<<endl;
    C.print();
    C=B*10;
    cout<<"The result of B*10"<<endl;
    C.print();
    return 0;
}
