#include <iostream>

using namespace std;

int sumOfDigits(int x)
{
    if(x==0)
        return 0;
    else
        return (x%10)+sumOfDigits(x/10);
}

int main()
{
    int n;
    cin>>n;
    cout<<sumOfDigits(n);


    return 0;
}
