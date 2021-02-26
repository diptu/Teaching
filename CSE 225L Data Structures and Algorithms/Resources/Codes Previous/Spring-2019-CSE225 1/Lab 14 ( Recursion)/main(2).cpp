#include<iostream>

using namespace std;

int fibonacci(int n)
{
    if((n==1)||(n==0))
    {
        return(n);
    }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));
    }
}
int factorial(int n)
{


if(n==1)
    return 1;
else
    return n*factorial (n-1);
}

 int add(int n)
{
    if(n != 0)
        return n + add(n - 1);
    return 0;
}

int findmin(const int a[], int n)
{
    if(n == 0)
        return a[0];
    else
    {
        if(a[n-1] < findmin(a,(n-1)))
            return a[n-1];
      else
            return findmin(a,(n-1));
    }
}






int find(int decimal_number)
{



    if (decimal_number == 0)
        return 0;
    else
        return (decimal_number % 2 + 10 *find(decimal_number / 2));
}
float sumSeries(int n)
if(n==0)
    return 1;
else
return( sumSeries(1/pow(2,n)))+sumSeris(1/pow(2/(n-1)))))




int main()
{
    int n,i=0;
    int A[5]={2,3,1,6,9};
    int decimal_number = 10;
    cout<<"Input the number of terms for Fibonacci Series:";
    cin>>n;
    cout<<"\nFibonacci Series is as follows\n";

    while(i<n)
    {
        cout<<" "<<fibonacci(i);
        i++;
    }
    cout<<"factorial of"<<n<<factorial(n);
    cout<<"Sum of"<<n <<" is" <<add(n);
    cout<<"Minimum number is A is "<<findmin(A,5);
    cout<<find(decimal_number);
    cout<<(Sumofseries);
    return 0;
}




