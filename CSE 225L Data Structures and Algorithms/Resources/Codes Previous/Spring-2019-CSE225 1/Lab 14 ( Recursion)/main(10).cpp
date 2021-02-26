#include <iostream>

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
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
int sumofdigit(int n)
{

    if(n==1){

        return 1;
    }
    else{

        return(n%10+sumofdigit(n/10));

    }


}
int doctobin(int dec){



if(dec==0)
{

    return 1;

}

else


    return (1/pow(2,n))+sum(n-1);
}
double serise (int n)
{
    double i, s = 1;
    for (i = 2; i <= n;i=i*2)
    s = s + 1/i;
    return s;
}
int main()
{

     int n,i=0;
    cout<<"Input the number of terms for Fibonacci Series:";
    cin>>n;
   // cout<<"\nFibonacci Series is as follows\n";

    while(i<n)
    {
        cout<<" "<<fibonacci(i);
        i++;
    }




    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factorial of " << n << " = " << factorial(n);
   cout<<"sumofdigit"<<sumofdigit(n);
cout<<"doctobin"<<doctobin( dec) ;
cout<<"seise"<<serise (n) ;
    cout << "Hello world!" << endl;
    return 0;
}
