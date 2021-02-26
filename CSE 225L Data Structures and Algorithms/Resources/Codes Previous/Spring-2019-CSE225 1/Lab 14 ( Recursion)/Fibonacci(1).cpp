#include<iostream>
#include<cmath>
using namespace std;

int fib(int n)
{
    if(n==0 || n==1)
        return n;
    else
        return fib(n-1)+fib(n-2);
}


int factorial(int n)
{
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}

int sumOfDigits(int x)
{
    if(x>=0 && x<=9)
        return x;
    else
        return sumOfDigits(x%10)+sumOfDigits(x/10);
}

int DecToBin(int dec)
{
    if(dec==0)
        return dec;
    else
        return (dec%2)+10*DecToBin(dec/2);
}

double sum(int n)
{
    if(n==0)
        return 1;
    else
        return (1/(pow(2, n)))+sum(n-1);
}

int findMin(int a[], int size)
{
    if(size==1)
        return a[0];
    else
    {
        if(a[size-1]<findMin(a, size-1))
            return a[size-1];
        else
            return findMin(a, size-1);
    }

}

int main()
{
    /*cout<<"*FIBONACCI SERIES*"<<endl;
    cout<<"Enter a number: "<<endl;
    int a;
    cin>>a;

    cout<<"Fibonacci series of first "<<a<<" numbers: "<<endl;
    for(int i=0; i<=a; i++)
       cout<<fib(i)<<" ";
    cout<<endl;

    cout<<endl<<"*FACTORIAL*"<<endl;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    cout<<"Factorial of "<<a<<" is "<<factorial(a)<<endl;

    cout<<endl<<"*SUM OF DIGITS*"<<endl;
    cout<<"Enter a number:"<<endl;
    cin>>a;
    cout<<sumOfDigits(a)<<endl;

    cout<<endl<<"*DECIMAL TO BINARY*"<<endl;
    cout<<"Enter a number:"<<endl;
    cin>>a;
    cout<<a<<" in Binary is "<<DecToBin(a)<<endl;*/

    int a;
    cout<<endl<<"*SUM OF SERIES*"<<endl;
    cout<<"Enter a number:"<<endl;
    cin>>a;
    cout<<sum(a);

    cout<<endl<<"*MINIMUM ELEMENT*"<<endl;
    cout<<"Enter the size of an array: "<<endl;
    cin>>a;
    int arr[a];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<a; i++)
        cin>>arr[i];
    cout<<"The minimum element of the array is: "<<findMin(arr, a)<<endl;

}
