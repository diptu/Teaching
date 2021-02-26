#include <iostream>

using namespace std;

int findMin(int a[],int size)
{
    if(size==1)
        return a[size-1];
    else if( a[size-1]<findMin(a,size-1) )
        return a[size-1];
    else return findMin(a,size-1);
}

int main()
{
    int n[]={5,1,2,3};

    cout<<findMin(n,4);

    return 0;
}


