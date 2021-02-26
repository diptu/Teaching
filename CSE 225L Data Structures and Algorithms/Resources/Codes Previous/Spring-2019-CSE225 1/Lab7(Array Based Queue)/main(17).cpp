#include"quetype.cpp"
#include <iostream>
using namespace std;

int main()
{
    QueType<int> q(5);
    int i, temp;

    if(q.IsEmpty())
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;

    cout<<"Enter four integers: "<<endl;
    for(i=0; i<4; i++)
    {
        cin>>temp;
        q.Enqueue(temp);
    }

    if(q.IsEmpty())
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;

    if(q.IsFull())
        cout<<"Queue is full"<<endl;
    else
        cout<<"Queue is not full"<<endl;

    cout<<"Enter another integer: "<<endl;
    int a;
    cin>>a;
    q.Enqueue(a);

    QueType<int> q1(5);
    int t;

    cout<<"Queue is: "<<endl;
    for(i=0; i<5; i++)
    {
        q.Dequeue(t);
        cout<<t<<" ";
        q1.Enqueue(t);
    }
    for(i=0; i<5; i++)
    {
        q1.Dequeue(t);
        q.Enqueue(t);
    }
    cout<<endl;

    if(q.IsFull())
        cout<<"Queue is full"<<endl;
    else
        cout<<"Queue is not full"<<endl;

    q.Enqueue(8);

    int x=5, y=7, z;
    q.Dequeue(x);
    q.Dequeue(y);

    cout<<"Queue is: "<<endl;
    for(i=0; i<3; i++)
    {
        q.Dequeue(t);
        cout<<t<<" ";
        q1.Enqueue(t);
    }
    for(i=0; i<3; i++)
    {
        q1.Dequeue(t);
        q.Enqueue(t);
    }
    cout<<endl;

    x=4, y=2, z=6;
    q.Dequeue(x);
    q.Dequeue(y);
    q.Dequeue(z);

    if(q.IsEmpty())
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;

    try
    {
        q.Dequeue(x);
    }
    catch(EmptyQueue e)
    {
        cout<<"Queue underflow"<<endl;
    }

}
