#include <iostream>
#include "quetype.h"
#include "quetype.cpp"

using namespace std;

int main()
{
    QueType<int> Q;
    int n;
    if(Q.IsEmpty())
        cout<<"Queue is Empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;

    Q.Enqueue(5);
    Q.Enqueue(7);
    Q.Enqueue(4);
    Q.Enqueue(2);

    if(Q.IsEmpty())
        cout<<"Queue is Empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;
    Q.Display();

    if(Q.IsFull())
        cout<<"Queue is Full"<<endl;
    else
        cout<<"Queue is not full"<<endl;

    Q.Dequeue(n);


    Q.Display();


    return 0;
}
