#include<iostream>
#include<math.h>
using namespace std;

int fib(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fib(n-2)+fib(n-1);
}


int factorial(int n)
{
    if(n<1)
        return 1;
    else
        return n*factorial(n-1);
}


int sumOfDigit(int n)
{
    if (n == 0)
       return 0;
    else
        return (n % 10 + sumOfDigit(n / 10));

}


int findMin(int a[],int size)
{
    if(size==0)
        return a[0];
    else
    {
        if(a[size-1] < findMin(a,(size-1)))
            return a[size-1];
        else
            return findMin(a,(size-1));
    }
}


int decToBin(int dec)
{
    if (dec == 0)
        return 0;
    else
        return (dec % 2 + 10 *decToBin(dec / 2));


}

double sum(int n)
{
    if(n==0)
        return 1;
    else
        return (1/(pow(2,n)))+sum(n-1);
}



int main()

{

    cout<<"8 th fibonacci number: "<<fib(8)<<" "<<endl;



    cout<<"6th factorial number: "<<factorial(6)<<" "<<endl;


    int a[]={7,23,8,1,6};
    cout<<"Sum of Digit of 123: "<<sumOfDigit(123)<<" "<<endl;



    cout<<"Minimum element: "<<findMin(a,5);


    cout<<"decimal(12) to binary: "<<decToBin(12)<<endl;

    cout<<"Sum of series (n=8): "<<sum(8)<<endl;
}

