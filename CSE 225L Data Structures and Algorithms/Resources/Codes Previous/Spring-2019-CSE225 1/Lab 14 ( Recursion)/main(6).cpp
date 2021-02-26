#include <iostream>
#include "math.h"

using namespace std;

int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
int factorial(int n)
{
      if(n==1)
      {
          return 1;
      }
      else
      {
          return (n*factorial((n-1)));
      }
}

int sumOfDigits(int x)
{
    if(x==1)
    {
        return 1;
    }
    else
    {
        return (x%10 + sumOfDigits(x/10));
    }
}
int findMin(int a[],int size)
{
     if(size == 1)
     {
         return a[0];
     }
     else
     {
         return min(a[size-1],findMin(a,size-1));
     }

}
int DecToBin(int dec)
{
    if(dec==0)
    {
        return 0;
    }
    else
    {
        return (dec%2 + 10 * DecToBin(dec/2));
    }
}
double sum(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return (1/pow(2,n)+sum(n-1));
    }

}













int main()
{
    int n;
    cout << "enter number : ";
    cin >> n;
    cout << "Fibonacci number : " <<fib(n);


    cout << endl;


    int m;
    cout<<"enter factorial number: ";
    cin >> m;
    cout << "factorial is : "<<factorial(m)<<endl;


    int p = 12345;
    cout << "Sum of digit is : " << sumOfDigits(p)<<endl;


    int a[]={12,87,25,90,78,34};
    int size = sizeof(a)/sizeof(a[0]);
    cout << "Minimum element : "<< findMin(a,size) << endl;

    int q;
    cout << "Enter decimal number : ";
    cin >> q;
    cout << "Binary number : " << DecToBin(q)<<endl;

    int b;
    cout << "enter length of series : ";
    cin >> b;
    cout << "Sum = " << sum(b)<<endl;



    cout << "Hello world!" << endl;
    return 0;
}
