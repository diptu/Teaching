#include <iostream>
#include "quetype.h"
#include "quetype.cpp"

using namespace std;

int main()
{
    QueType<int> que;
    int n;


    if(que.IsEmpty())
    {
        cout << "queue is empty" <<endl;
    }
    else
    {
        cout << "queue is not empty"<<endl;
    }

    que.Enqueue(5);
    que.Enqueue(7);
    que.Enqueue(4);
    que.Enqueue(2);

    if(que.IsEmpty())
    {
        cout << "queue is empty" <<endl;
    }
    else
    {
        cout << "queue is not empty"<<endl;
    }

    QueType<int> que1;

    for(int i = 0 ; i<4 ; i++)
    {
        que.Dequeue(n);
        que1.Enqueue(n);
    }
    for(int i = 0 ; i<4 ; i++)
    {
        que1.Dequeue(n);
        cout << " " << n;
        que.Enqueue(n);
    }
    cout << endl;

    if(que.IsFull())
    {
        cout << "queue is full" << endl;
    }
    else
    {
        cout << "queue is not full" << endl;
    }

    que.Dequeue(n);

    for(int i = 0 ; i<3 ; i++)
    {
        que.Dequeue(n);
        que1.Enqueue(n);
    }
    for(int i = 0 ; i<3 ; i++)
    {
        que1.Dequeue(n);
        cout << " " << n;
        que.Enqueue(n);
    }

    cout << endl;




    cout << "Hello world!" << endl;
    return 0;
}
