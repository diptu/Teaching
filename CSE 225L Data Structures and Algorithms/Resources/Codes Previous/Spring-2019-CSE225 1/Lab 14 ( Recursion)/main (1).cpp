#include <iostream>
#include <math.h>
using namespace std;

int fib(int n)
{
    if((n==0) || (n==1))
        return n;

    else
        return (fib(n-1)+fib(n-2));
}

int factorial(int n)
{
    if(n==1)
        return 1;
    else
        return n*factorial(n-1);
}

int sumOfDigits(int x)
{
    if(x==1)
        return 1;
    else
        return (x+sumOfDigits(x-1));
}

int findMin(int a[], int size)
{
   if(size==1)
        return a[0];

   else if(a[size-1]<findMin(a,size-1))
           return a[size-1];

    else
        return findMin(a,size-1);
}

int DecToBin(int dec)
{
    if(dec==0)
        return 0;
    else
        return ((dec%2)+(10* DecToBin(dec/2)));

}

float sumSeries(int n)
{
    if(n==0)
        return 0;
    else
        return (1/pow(2,n-1))+sumSeries(n-1);
}
int main()
{
    int n,num,series;
    int decimal;
    int A[100];
    cout <<"Enter number of terms in fibonacci series:"<< endl;
    cin>>n;
    cout<<"Fibonacci series "<<endl;
    for(int i=0;i<n;i++)
        cout<<fib(i)<<" ";
    cout<<endl;
    cout<<"Enter the number you want factorial of:";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;
    cout<<"Enter the number of digits you want to find sum of:";
    cin>>n;
    cout<<"Sum of "<<n<<" digits is "<<sumOfDigits(n)<<endl;
    cout<<"Enter number of array elements:";
    cin>>num;
    cout<<"Enter array elements:";
    for(int i=0;i<num;i++)
        cin>>A[i];
    cout<<"Minimum number in A is "<<findMin(A,num)<<endl;
    cout<<"Enter the decimal number:";
    cin>>decimal;
    cout<<"Binary number of "<<decimal<<" = "<<DecToBin(decimal)<<endl;
    cout<<"Enter number of terms in series:";
    cin>>series;
    cout<<"Sum of series = "<<sumSeries(series)<<endl;
    return 0;
}
