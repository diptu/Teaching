#include <iostream>
#include "quetype.h"
#include "quetype.cpp"

using namespace std;

int main()
{
    QueType<int> Q;
    int n;

    if(Q.isEmpty())
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;

    Q.Enqueue(5);
    Q.Enqueue(7);
    Q.Enqueue(4);
    Q.Enqueue(2);

    if(Q.isEmpty())
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;

    Q.Display();
    if(Q.isFull())
        cout<<"Queue is full"<<endl;
    else
        cout<<"Queue is not full"<<endl;

    Q.Dequeue(n);
    cout<<n<<" is dequeued"<<endl;
    Q.Display();
    return 0;
}
