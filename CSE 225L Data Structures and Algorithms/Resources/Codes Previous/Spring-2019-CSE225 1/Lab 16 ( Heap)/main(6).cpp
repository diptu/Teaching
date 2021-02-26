#include <iostream>
#include "pqtype.h"
#include "pqtype.cpp"

using namespace std;

int main()
{
    PQType<int> P1(15);
    int n;

    if(P1.IsEmpty())
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;

    P1.Enqueue(4);
    P1.Enqueue(9);
    P1.Enqueue(2);
    P1.Enqueue(7);
    P1.Enqueue(3);
    P1.Enqueue(11);
    P1.Enqueue(17);
    P1.Enqueue(0);
    P1.Enqueue(5);
    P1.Enqueue(1);

    if(P1.IsEmpty())
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;

    P1.Dequeue(n);
    cout<<"Dequeued Item is "<<n<<endl;

    P1.Dequeue(n);
    cout<<"Dequeued Item is "<<n<<endl;
    return 0;
}
