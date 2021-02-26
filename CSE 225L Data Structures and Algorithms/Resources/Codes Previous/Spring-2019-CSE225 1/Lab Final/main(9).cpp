#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int N,K,i=0;

    cin>>N>>K;

    int A [N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    int B[N];
    for(int i=0;i<N;i++){
        if(A[i]<K)
        {

            A[i]=B[i];
        }
    }
    int e=0;

    do
    {
        for(int i=0;i<=N;i++)
        {
              B[i]=1*B[i]+2*B[i+1];
            e++;
        }
    }while(B[i]<K);

    cout<<e;
}


