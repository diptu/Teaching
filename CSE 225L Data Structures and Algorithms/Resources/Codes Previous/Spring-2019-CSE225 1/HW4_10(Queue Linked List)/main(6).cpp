#include "queue.cpp"
#include <iostream>
using namespace std;

int main()
{
    QueueType<int> q;

    if(q.IsEmpty())
        cout<<"Queue  is empty."<<endl;
    else
        cout<<"Queue  is not empty."<<endl;
    cout<<endl;

    int i;
    cout<<"Enter four integers: "<<endl;
    for(i=0; i<4; i++)
    {
        int temp;
        cin>>temp;
        q.Push(temp);
    }
    cout<<endl;

    if(q.IsEmpty())
        cout<<"Queue is empty."<<endl;
    else
        cout<<"Queue is not empty."<<endl;

    if(q.IsFull())
        cout<<"Queue  is full."<<endl;
    else
        cout<<"Queue  is not full."<<endl;
    cout<<endl;

    QueueType<int> q1;
    for(i=0; i<4; i++)
    {
        q1.Push(q.Top());
        q.Pop();
    }

    cout<<endl<<"Queue: "<<endl;
    for(i=0; i<4; i++)
    {
        cout<<q1.Top()<<" ";
        q.Push(q1.Top());
        q1.Pop();
    }
    cout<<endl;

    q.Push(3);

    for(i=0; i<5; i++)
    {
        q1.Push(q.Top());
        q.Pop();
    }

    cout<<endl<<"New Queue: "<<endl;
    for(i=0; i<5; i++)
    {
        cout<<q1.Top()<<" ";
        q.Push(q1.Top());
        q1.Pop();
    }
    cout<<endl<<endl;

    if(q.IsFull())
        cout<<"Queue  is full."<<endl;
    else
        cout<<"Queue  is not full."<<endl;
    cout<<endl;

    q.Pop();
    q.Pop();

    cout<<"Top Item is "<<q.Top();



}
