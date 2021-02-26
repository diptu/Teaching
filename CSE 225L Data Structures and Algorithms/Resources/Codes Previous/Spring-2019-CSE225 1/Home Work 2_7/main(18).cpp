#include"quetype.cpp"
#include <iostream>
using namespace std;

int main()
{
    QueType<int> q(5);
    int i, tp;

    if(q.IsEmpty())
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;

    cout<<"Enter four integers: "<<endl;
    for(i=0; i<4; i++)
    {
        cin>>tp;
        q.Enqueue(tp);
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
    int tp;

    cout<<"Queue is: "<<endl;
    for(i=0; i<5; i++)
    {
        q.Dequeue(tp);
        cout<<tp<<" ";
        q1.Enqueue(tp);
    }
    for(i=0; i<5; i++)
    {
        q1.Dequeue(tp);
        q.Enqueue(tp);
    }
    cout<<endl;

    if(q.IsFull())
        cout<<"Queue is full"<<endl;
    else
        cout<<"Queue is not full"<<endl;

    q.Enqueue(8);

    int k;
    q.Dequeue(k);
    q.Dequeue(k);

    cout<<"Queue is: "<<endl;
    for(i=0; i<3; i++)
    {
        q.Dequeue(tp);
        cout<<tp<<" ";
        q1.Enqueue(tp);
    }
    for(i=0; i<3; i++)
    {
        q1.Dequeue(tp);
        q.Enqueue(tp);
    }
    cout<<endl;


    q.Dequeue(k);
    q.Dequeue(k);
    q.Dequeue(k);

    if(q.IsEmpty())
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;

    try
    {
        q.Dequeue(k);
    }
    catch(EmptyQueue e)
    {
        cout<<"Queue underflow"<<endl;
    }

}
