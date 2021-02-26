#include "pqtype.cpp"
#include <iostream>
using namespace std;

int main()
{
    PQType<int>pq(15);

    if(pq.IsEmpty())
        cout<<"Queue is Empty"<<endl;
    else cout<<"Queue is not Empty"<<endl;

    {int i=0; int temp;
    while(i<10)
    {
        cin>>temp;
        pq.Enqueue(temp);
        i++;
    }
    }

    if(pq.IsEmpty())
        cout<<"Queue is Empty"<<endl;
    else cout<<"Queue is not Empty"<<endl;

    int temp;
    pq.Dequeue(temp);
    cout<<temp<<endl;

    pq.Dequeue(temp);
    cout<<temp<<endl;

    //Last task
    int N,minutes;
    cin>>N;
    cin>>minutes;

    PQType<int>MagicBags(N);

    for(int i=0;i<N;i++)
    {
        cin>>temp;
        MagicBags.Enqueue(temp);
    }

    int maximumCANDIESeaten=0;
    for(int i=0;i<minutes;i++)
    {
        MagicBags.Dequeue(temp);
        maximumCANDIESeaten=maximumCANDIESeaten+temp;
        MagicBags.Enqueue((temp/2));
    }

    cout<<maximumCANDIESeaten;


    return 0;
}
