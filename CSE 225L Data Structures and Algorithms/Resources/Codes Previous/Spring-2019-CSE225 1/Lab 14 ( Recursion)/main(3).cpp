#include <iostream>
#include <math.h>

using namespace std;


int fib(int n)
{
	if(n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib(n-1)+fib(n-2);
}

int factorial(int n)
{
	if (n ==0)
 		return (1);
	else
     return (n * factorial(n-1));
}

int sumOfDigits(int x)
{
    if (x == 0)
       return 0;
    return (x % 10 + sumOfDigits(x / 10));
}

int findMin(int a[], int size)
{
    // if size = 0 means whole array has been traversed
    if (size == 1)
        return a[0];
    return min(a[size-1], findMin(a, size-1));
}

int DecToBin(int dec)
{
    if (dec == 0)
        return 0;
    else
        return (dec % 2 + 10 *
                DecToBin(dec / 2));
}
double sum(int n)
{

    if(n==0)
        return 1;
    else return (sum(n-1)+ 1/pow(2,n));


}

int main()
{
    cout<<"fib is :"<< DecToBin(5)<<endl;
    cout<< " fac is : " << factorial(5)<<endl;
cout<< "sum of dig :" << sumOfDigits(5)<< endl;

    int A[] = {1, 4, 45, 6, -50, 10, 2};
    int n = sizeof(A)/sizeof(A[0]);
    cout <<  findMin(A, n);

   cout<< "Dec is : "<<DecToBin(5)<<endl;



    cout  <<"sum is: " << sum(5)<<endl;
    return 0;
}

