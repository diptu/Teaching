#include <bits/stdc++.h>
#include "quetype.h"
#include "quetype.cpp"
using namespace std;

int main()
{

    cout << "KONBANWA" << endl;

    QueType<int>Q;

    if(Q.IsEmpty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    Q.Enqueue(5);
    Q.Enqueue(7);
    Q.Enqueue(4);
    Q.Enqueue(2);

    if(Q.IsEmpty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    QueType<int>Printer;

    while(!Q.IsEmpty())
    {
        int x;
        Q.Dequeue(x);
        cout << x << " ";
        Printer.Enqueue(x);
    }
    cout << endl;

     while(!Printer.IsEmpty())
    {
        int x;
        Printer.Dequeue(x);
        Q.Enqueue(x);
    }

     if(Q.IsFull())
        cout << "Queue is full" << endl;
    else
        cout << "Queue is not full" << endl;

    int lol;
    Q.Dequeue(lol);

    while(!Q.IsEmpty())
    {
        int x;
        Q.Dequeue(x);
        cout << x << " ";
        Printer.Enqueue(x);
    }
    cout << endl;

     while(!Printer.IsEmpty())
    {
        int x;
        Printer.Dequeue(x);
        Q.Enqueue(x);
    }

    return 0;
}
