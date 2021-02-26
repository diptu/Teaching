#include<iostream>
#include"math.h"
using namespace std;

int fib (int n)
{
    if(n==0)
    {

        return 0;
    }
    else if (n == 1)
    {
        return 1;
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
        return (n*factorial (n-1));
    }
}

int sumOfDigits(int x)
{
    if(x==0)
    {
        return 0;
    }
    else
    {
        return (x%10 + sumOfDigits(x/10));
    }
}


int findMin(int a[], int size)
{
if (size == 1)
{
   return a[0];
}
   else
   {
      return min(a[size-1], findMin(a, size-1));
   }

}

int DecToBin(int dec)
{
    if( dec == 0 )
   {
      return 0;
   }

   else
   {
       return (dec % 2 +10 * DecToBin(dec/2));
   }
}


double recursion(int n)
{
    if(n==0)
        return 0;
    else return (1/pow(2,n) + recursion(n-1));
}




int main ()
{
   int a;
     cout<<"enter numbers"<<endl;
       cin>>a;
       cout<<"fibonacci : "<<endl;
       for(int i=0;i<a;i++)

       {
         cout<<fib(i) <<endl;
       }
       cout<<endl;




       int b;
       cout<<"factorial : "<<endl;
       cin>>b;
       cout<<"factorial is :"<< factorial(b);
       cout<<endl;



       int c=123456789;
       cout<<"sum of digits  :"<<sumOfDigits(c)<<endl;


       int d[] = {1,2,3,6,8,9};
         int size = sizeof(d)/sizeof(d[0]);
    cout <<  "finding minimum : "<<findMin(d, size) << endl;

    cout<<"decimal to binary " <<DecToBin(10)<<endl;

    cout<<" recursion series" << recursion(7)<<endl;
    return 0;



}













