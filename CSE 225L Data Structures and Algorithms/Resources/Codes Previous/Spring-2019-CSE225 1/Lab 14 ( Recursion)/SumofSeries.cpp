#include <iostream>
using namespace std;

int noTothePowerof(int no,int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return no;
    else
        return no*noTothePowerof(no,n-1);
}

double sumofRec(int n)
{
    if(n==0)
        return 1.0;
    else
        return 1.0/noTothePowerof(2,n)+sumofRec(n-1);
}


int main()
{
    int n;
    cin>>n;
    cout<<sumofRec(n);


    return 0;
}

