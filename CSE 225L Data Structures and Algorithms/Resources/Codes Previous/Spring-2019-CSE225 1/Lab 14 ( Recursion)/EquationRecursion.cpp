#include <iostream>
#include<math.h>
using namespace std;

double sum(int n)
{
    if(n==0)
        return 1;
    else
        return (1/(pow(2,n)))+sum(n-1);
}


int main()
{
    int x;

    cin>>x;
    cout<<sum(x);
}
