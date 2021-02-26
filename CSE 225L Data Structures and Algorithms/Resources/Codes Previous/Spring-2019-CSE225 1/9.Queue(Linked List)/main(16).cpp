#include <iostream>
#include "QueType.h"
using namespace std;
int item;
int main()
{
    QueType<int> e;
    if(e.IsEmpty())
        cout<<"Queue is Empty"<<endl;
    else
        cout<<"Queue is not Empty"<<endl;

    e.Enqueue(5);
    e.Enqueue(7);
    e.Enqueue(4);
    e.Enqueue(2);
    if(e.IsEmpty())
        cout<<"Queue is Empty"<<endl;
    else
        cout<<"Queue is not Empty"<<endl;
    if(e.IsFull())
    cout<<"Queue is Full"<<endl;
    else
    cout<<"Queue is not Full"<<endl;
    e.printlist();
    if(e.IsFull())
     cout<<"Queue is Full"<<endl;
    else
    cout<<"Queue is not Full"<<endl;
    e.Dequeue(item);
    e.printlist();
    return 0;
}
