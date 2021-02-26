#include <iostream>
#include "quetype.cpp"
using namespace std;


int main()
{
    QueType<int> que;
    if(que.IsEmpty()) cout<<"Queue is Empty"<<endl;
    else cout<<"Queue is not Empty"<<endl;

    que.Enqueue(5);
    que.Enqueue(7);
    que.Enqueue(4);
    que.Enqueue(2);
    if(que.IsEmpty()) cout<<"Queue is Empty"<<endl;
    else cout<<"Queue is not Empty"<<endl;



    if(que.IsFull()) cout<<"Queue is Full"<<endl;
    else cout<<"Queue is not Full"<<endl;

    que.Dequeue(item);


    return 0;
}
