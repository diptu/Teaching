#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
        return 1;
    else
        return (n*(factorial(n-1)));
}

int main()
{
    int x;

    cin>>x;

    cout<<factorial(x);
}
