#include "quetype.h"
#include "QueType.cpp"
#include <iostream>
using namespace std;

int main()
{
    int items;
    QueType<int> e(5);
    if(e.IsEmpty())
    {
        cout<<"queue is empty"<<endl;
    }
    else
        cout<<"queue is not empty"<<endl;
    e.Enqueue(5);
    e.Enqueue(7);
    e.Enqueue(4);
    e.Enqueue(2);
    if(e.IsEmpty())
    {
        cout<<"queue is empty"<<endl;
    }
    else
        cout<<"queue is not empty"<<endl;
    if(e.IsFull())
    {
        cout<<"queue is full"<<endl;
    }
    else
        cout<<"queue is not full"<<endl;
    e.Enqueue(6);
    e.Print();
    if(e.IsFull())
    {
        cout<<"queue is full"<<endl;
    }
    else
        cout<<"queue is not full"<<endl;
    e.Enqueue(8);
    e.Dequeue();
    e.Dequeue();
    e.Dequeue();
    e.Dequeue();
    e.Dequeue();
    cout<<"after dequeue 5 items"<<endl;
    e.Dequeue();


}
