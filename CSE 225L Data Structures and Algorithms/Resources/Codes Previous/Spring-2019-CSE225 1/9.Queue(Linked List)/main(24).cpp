#include <iostream>
#include "quetype.cpp"
using namespace std;


int main()
{
    QueType<int> q;
    if(q.IsEmpty()) cout<<"Queue is Empty"<<endl;
    else cout<<"Queue is not Empty"<<endl;


    q.Enqueue(5);
    q.Enqueue(7);
    q.Enqueue(4);
    q.Enqueue(2);
    if(q.IsEmpty()) cout<<"Queue is Empty"<<endl;
    else cout<<"Queue is not Empty"<<endl;



    if(q.IsFull()) cout<<"Queue is Full"<<endl;
    else cout<<"Queue is not Full"<<endl;

    //q.Dequeue(item);


    return 0;
}
