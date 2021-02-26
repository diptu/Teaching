#include <iostream>

#include "pqtype.cpp"

using namespace std;

int findMin(int a[], int N)
{
    if (N == 1)
        return a[0];
    return min(a[N-1], findMin(a, N-1));
}

int Operations(int a[], int N, int K)
{
    int least=findMin(a, N);
    int least2;
    int Sweetness;
    int count=0;

    for(int i=0; i>=K; i++)
    {
        Sweetness=(1*least+2*least2);
        count++;
    }

    if(Sweetness>=K){
        cout<<count<<endl;
    }else{
        cout<<"-1"<<endl;
    }

int main()
{
    int N;
    int K;
//    a[]=new int[];
//
//    cin>>N, K;
//
//    for(int i=0; i<N; i++)
//    {
//        cin>>a[i]
//    }
return 0;
}
