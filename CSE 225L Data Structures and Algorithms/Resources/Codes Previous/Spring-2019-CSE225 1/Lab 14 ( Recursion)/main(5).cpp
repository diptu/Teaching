
#include <iostream>
#include <math.h>
using namespace std;

//1

int fib(int x) {

    if (x == 1) {
        return 1;
    }
    else if (x==0 )
        return 0 ;
    else {
        return fib(x-1)+fib(x-2);
    }
}
//2

int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
//3

int sumOfDigits (int n)
{
    if(n == 0)
        return 0;
    return (n%10 + sumOfDigits(n /10));
}
//5

int DecToBin(int dec)
{
    if (dec == 0)
        return 0;
    else
         return (dec% 2 + 10 * DecToBin(dec/ 2));
}
//4

int findMinRec(int A[], int n)
{ int Min ;
  if (n==0)
    return A[0] ;
  else
    if (A[n-1]< findMinRec(A , (n-1)))
        return A[n-1] ;
    else
        return findMinRec(A , (n-1));
}

//6
double frac (int n) {

    if (n== 0 ) {
        return 1 ;
    }
    return ( 1/pow(2,n) + frac (n-1) ) ;            // 1 + 1/2 + 1/2*2 + 1/ 2*2*2 ....

}

int main()
{
    //computer was faulty , tested on online compiler
    return 0;
}

