#include <iostream>
#include "quetype.h"
#include "quetype.cpp"

using namespace std;

int main()
{
    QueType<int>q(5);
    if(q.IsEmpty))
    cout << "Queue is Empty"<< endl;
    else
        cout <<"Queue is not empty" << endl;

    q.Enqueue(5);
    q.Enqueue(7);
    q.Enqueue(4);
    q.Enqueue(2);
    if(q.IsEmpty())
        cout << "Queue is empty" <<endl;
    else
        cout<<" Queue is not empty" <<endl;
    if (q.IsFull())

        cout << "Queue is full" <<endl;
    else
        cout<<" Queue is not full" <<endl;
    q.Enqueue(6);
    for(int i=0;i<5;i++)
    {
        int val;
        q.Dequeue(val);
        cout<< val<<"";
        q.Enqueue(val);
    }

    cout << endl;

    if(q.IsFull())
    cout << "Queue is full" <<endl;
    else
        cout<<" Queue is not full" <<endl;

    q.Enqueue(8);




    return 0;
}
