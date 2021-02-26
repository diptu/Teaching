#include "PQ.cpp"

#include <iostream>
using namespace std;


int main()
{
    int N,K;
    cin>>N;
    cin>>K;

    int arr[N];
    PQ<int>minHeap1(N);

    for(int i=0;i<N;i++)
    {
        int temp;
        cin>>temp;
        arr[i]=temp;
    }

    for(int i=0;!minHeap1.IsFull();i++)
    {
        minHeap1.Enqueue(arr[i]);
    }

    int Least,secLeast; int steps=0;
    for(;!minHeap1.IsEmpty();)
    {
        minHeap1.Dequeue(Least);
        if(Least<K)
        {
            minHeap1.Dequeue(secLeast);
            int sweetness = 1*Least+2*secLeast;
            minHeap1.Enqueue(sweetness);
            steps++;
        }

    }

    cout<<endl<<steps;



    return 0;
}
