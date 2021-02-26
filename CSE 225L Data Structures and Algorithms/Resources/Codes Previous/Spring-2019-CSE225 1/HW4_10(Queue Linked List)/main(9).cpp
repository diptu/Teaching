#include <iostream>
#include"queuetype.h"
#include "queuetype.cpp"

using namespace std;

int main()
{
 queType<int>Q;
 int n;
 if(Q.IsEmpty())
        cout <<"Queue is Empty"endl;
 else
    cout<<"Queue is not Empty"endl;

 Q.Enqueue(5);
 Q.Enqueue(7);
 Q.Enqueue(4);
 Q.Enqueue(2);
 if (Q.IsEmpty())
    cout <<"Queue is Empty"endl;
 else
    cout<<"Queue is not Empty"endl;
    f (Q.IsFull())
    cout <<"Queue is Full"endl;
 else
    cout<<"Queue is not Full"endl;
    Q.Dequeue(n)
    Q.Diplay()



    return 0;
}
