#include "heaptype.cpp"
#include "pqtype.cpp"
#include <iostream>
using namespace std;

int main()
{
    PQType<int> pq(15);

    if(pq.IsEmpty())
        cout<<"Empty"<<endl;
    else
        cout<<"Not empty"<<endl;
    cout<<endl;

    cout<<"Insert 10 items: "<<endl;
    int temp, i;
    for(i=0; i<10; i++)
    {
        cin>>temp;
        pq.Enqueue(temp);
    }

    if(pq.IsEmpty())
        cout<<"Empty"<<endl;
    else
        cout<<"Not empty"<<endl;
    cout<<endl;

    pq.Dequeue(temp);
    cout<<temp;

    pq.Dequeue(temp);
    cout<<temp;
}
