
#include "complex.h"
#include <iostream>

using namespace std;

int main()
{
    Complex A(4,5), B(2,1);
    Complex C;
    C=A+B;
    cout<<"The sum of the complex numbers is"<<endl;
    C.print();
    C=A-B;
    cout<<"The difference of the complex numbers is"<<endl;
    C.print();
    C=A-10;
    cout<<"The result of A-10"<<endl;
    C.print();
    C=8-B;
    cout<<"The result of 8-B"<<endl;
    C.print();
    C=A*B;
     cout<<"The product of the complex numbers is"<<endl;
     C.print();
     C=10*A;
     cout<<"The resut of 10*A"<<endl;
     C.print();
     C=B*4;
     cout<<"The resut of B*4"<<endl;
     C.print();

    return 0;
}




