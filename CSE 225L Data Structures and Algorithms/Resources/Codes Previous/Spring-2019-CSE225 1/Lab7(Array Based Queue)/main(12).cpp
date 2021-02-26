#include <iostream>
#include "quetype.h"
#include "quetype.cpp"

using namespace std;

int main()
{
    QueType<int> Q(5);
    QueType<int> Q1(5);
    int i;
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

    if(Q.isFull())
        cout<<"Queue is Full"<<endl;
    else
        cout<<"Queue is not full"<<endl;

    Q.Enqueue(6);

    for(i=0;i<5;i++)
    {
       Q.Dequeue(n);
       Q1.Enqueue(n);
    }

    cout<<"Queue items are"<<endl;
    for(i=0;i<5;i++)
    {
        Q1.Dequeue(n);
        cout<<n<<endl;
        Q.Enqueue(n);
    }

    if(Q.isFull())
        cout<<"Queue is Full"<<endl;
    else
        cout<<"Queue is not full"<<endl;

    Q.Enqueue(8);
    Q.Dequeue(n);
    Q.Dequeue(n);

    for(i=0;i<3;i++)
    {
       Q.Dequeue(n);
       Q1.Enqueue(n);
    }

    cout<<"Queue items are"<<endl;
    for(i=0;i<3;i++)
    {
        Q1.Dequeue(n);
        cout<<n<<endl;
        Q.Enqueue(n);
    }

    Q.Dequeue(n);
    Q.Dequeue(n);
    Q.Dequeue(n);

    if(Q.isEmpty())
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;

    Q.Dequeue(n);



    return 0;
}
