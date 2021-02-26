#include <iostream>
#include "complex.h"
using namespace std;

int main()
{

    complex A(5,2),B(5,4);
    complex C;
    C=A+B;
    cout<<"Add:";
    C.print();
   complex D;
   D=A-B;
    cout<<"Subtract1:";
    D.print();
   complex E=A-5;
   cout<<"Subtract1:";
     E.print();
     complex F=5-A;
     cout<<"Subtract1:";
     F.print();
     complex G=A*B;
     cout<<"Multiplication:";
     G.print();
         return 0;
}
