#include "pqtype.cpp"
#include "heaptype.cpp"
#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cout<<"Enter the number of cookies and the minimum required sweetness: "<<endl;
    cin>>N>>K;

    int A[N];
    int i;
    PQType<int> pq(N);

    int temp;
    cout<<"Enter the sweetness for each cookie:"<<endl;
    for(i=0; i<N; i++)
    {
        cin>>temp;
        A[i]=temp;
        pq.Enqueue(temp);
    }


    int  min1, min2, temp1, temp2;

    for(i=0; i<N-2; i++)
        pq.Dequeue(temp);

    pq.Dequeue(temp1);
    min1=temp1;
    pq.Dequeue(temp2);
    min2=temp2;

    int sweetness=(1*min1)+(2*min2);

    int c=1;

    while(sweetness<K)
    {
        sweetness+=sweetness;
        c++;
    }

    if(sweetness>=K)
        cout<<"Number of operations to increase the cookie's sweetness is "<<c<<endl;
    else
        cout<<"-1";


}
