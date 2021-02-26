#include "quetype.cpp"
#include <iostream>
using namespace std;

int main()
{
    QueType<int> q;

    if(q.IsEmpty())
        cout<<"Queue is Empty."<<endl;
    else
        cout<<"Queue is not Empty."<<endl;
    cout<<endl;

    int i, temp;
    cout<<"Enter four items: "<<endl;
    for(i=0; i<4; i++)
    {
        cin>>temp;
        q.Enqueue(temp);
    }

    if(q.IsEmpty())
        cout<<"Queue is Empty."<<endl;
    else
        cout<<"Queue is not Empty."<<endl;
    cout<<endl;

    QueType<int> q1;

    cout<<"Queue is: "<<endl;
    for(i=0; i<4; i++)
    {
        q.Dequeue(temp);
        cout<<temp<<" ";
        q1.Enqueue(temp);
    }
    for(i=0; i<4; i++)
    {
        q1.Dequeue(temp);
        q.Enqueue(temp);
    }
    cout<<endl<<endl;

    if(q.IsFull())
        cout<<"Queue is Full."<<endl;
    else
        cout<<"Queue is not Full."<<endl;
    cout<<endl;

    q.Dequeue(temp);

    cout<<"Queue is: "<<endl;
    for(i=0; i<3; i++)
    {
        q.Dequeue(temp);
        cout<<temp<<" ";
        q1.Enqueue(temp);
    }
    for(i=0; i<3; i++)
    {
        q1.Dequeue(temp);
        q.Enqueue(temp);
    }
}
