#include <bits/stdc++.h>
#include "quetype.h"
#include "quetype.cpp"

using namespace std;

int main()
{


    QueType<int>q(5);
    if(q.IsEmpty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    q.Enqueue(5);

    q.Enqueue(7);

    q.Enqueue(4);

    q.Enqueue(2);


     if(q.IsEmpty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

        if(q.IsFull())
        cout << "Queue is Full" << endl;
    else
        cout << "Queue is not Full" << endl;


    q.Enqueue(6);


    QueType<int>tmpq;

    while(!q.IsEmpty())
    {
        int val;
        q.Dequeue(val);
        cout << val << " ";
        tmpq.Enqueue(val);
    }
    while(!tmpq.IsEmpty())
    {
        int val;
        tmpq.Dequeue(val);
        q.Enqueue(val);
    }

    cout << endl;

    if(q.IsFull())
        cout << "Queue is Full" << endl;
    else
        cout << "Queue is not Full" << endl;

    q.Enqueue(8);

   int n;
   q.Dequeue(n);
   q.Dequeue(n);

    while(!q.IsEmpty())
    {
        int val;
        q.Dequeue(val);
        cout << val << " ";
        tmpq.Enqueue(val);
    }
    while(!tmpq.IsEmpty())
    {
        int val;
        tmpq.Dequeue(val);
        q.Enqueue(val);
    }

    cout << endl;

    q.Dequeue(n);
    q.Dequeue(n);
    q.Dequeue(n);

     if(q.IsEmpty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    q.Dequeue(n);

    return 0;
}
