#include <iostream>
#include<math.h>
using namespace std;


int Factorial(int n)
{
	if (n ==0)
 		return (1);
	else
     return (n * Factorial(n-1));
}

int Fibonacci(int n)
{
	if(n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return Fibonacci(n-1)+Fibonacci(n-2);
}


double sumofSeries(int n)
{

    if(n==0)
        return 1;
    else return (sumofSeries(n-1)+ 1/pow(2,n));


}
int DectoBin(int dec)
{
    if (dec == 0)
    {
        return 0;
    }
    else
    {
        return (dec % 2 + 10 * DectoBin(dec / 2));
    }
}

int sumofDigit (int x)
{
    if (x != 0)
    {
        return (x % 10 + sumofDigit (x / 10));
    }
    else
    {
       return 0;
    }
}



int main()
{
    cout << Fibonacci(7)<< endl;
    cout << Factorial(6)<< endl;
    cout << sumofDigit(123)<< endl;
    cout << DectoBin(10)<< endl;
    cout << sumofSeries(1)<< endl;

    return 0;
}
