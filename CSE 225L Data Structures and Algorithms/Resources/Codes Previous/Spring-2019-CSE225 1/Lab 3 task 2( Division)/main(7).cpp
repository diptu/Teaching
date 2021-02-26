#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
   Complex A(3 ,2);
   Complex B (4 , 3);
   Complex C ;
   cout << "Addition " << endl;
   C= A+B ; C.Print() ;
   cout << "Subtraction " << endl;
   C= A-B ; C.Print() ;
   C= A- 2; C.Print() ;
   C= 2 - A ; C.Print () ;
   cout << "Multiplication  " << endl;
   C= A*B ; C.Print();
   C= A*2 ; C.Print() ;
   C= 2*A ; C.Print() ;
   cout << "Division " << endl ;
   C= A/ B ;
   C.Print() ;

  // C.Print();
    return 0;
}
