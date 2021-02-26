#include<iostream>
#include<string>
#include "quetype.cpp"
using namespace std;


void binary(int n)
{
    QueType<string> p;

    p.Enqueue("1");
    int i=1;
    string x1 ;
    while (i++<=n)
    {
        p.Dequeue(x1);
        cout<<x1<<endl;

        string x2 = x1;

        p.Enqueue(x1.append("0"));
        p.Enqueue(x2.append("1"));
    }
}

int main()
{
    QueType<int> q(5);

    if(q.IsEmpty())
    {
        cout<<"Queue is empty."<<endl;
    }
    else
    {
        cout<<"Queue is not empty."<<endl;
    }

    q.Enqueue(5);
    q.Enqueue(7);
    q.Enqueue(4);
    q.Enqueue(2);

    if(q.IsEmpty())
    {
        cout<<"Queue is empty."<<endl;
    }
    else
    {
        cout<<"Queue is not empty"<<endl;
    }
    if(q.IsFull())
    {
        cout<<"Queue is full."<<endl;
    }
    else
    {
        cout<<"Queue is not full."<<endl;
    }

    q.Enqueue(6);


    QueType<int> q1;
    int temp;
    int i=0;



    while(q.IsEmpty() != true)
    {
        q.Dequeue(temp);
        cout<<temp<<" ";
        q1.Enqueue(temp);
    }
    cout<<endl;

   while(q1.IsEmpty() != true)
    {
        q1.Dequeue(temp);
        q.Enqueue(temp);
    }

    if(q.IsFull())
    {
        cout<<"Queue is full."<<endl;
    }
    else
    {
        cout<<"Queue is not full."<<endl;
    }

    q.Enqueue(8);



    int n;
    q.Dequeue(n);
    q.Dequeue(n);
    QueType<int> q2;
    int temp1;




    while(q.IsEmpty() != true)
    {
        q.Dequeue(temp1);
        cout<<temp1<<" ";
        q2.Enqueue(temp1);
    }
    cout<<endl;

   while(q2.IsEmpty() != true)
    {
        q2.Dequeue(temp1);
        q.Enqueue(temp1);
    }


    q.Dequeue(n);
    q.Dequeue(n);
    q.Dequeue(n);


    if(q.IsEmpty())
    {
        cout<<"Queue is empty."<<endl;
    }
    else
    {
        cout<<"Queue is not empty."<<endl;
    }


    q.Enqueue(n);


    binary(10);

}
