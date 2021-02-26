#include <iostream>
#include "quetype.cpp"
using namespace std;

int main()
{
    QueType<int> Q(5);


    if(Q.IsEmpty()) cout<<"Queue is Empty" <<endl;
    else cout<<" Queue is not Empty" <<endl;

    Q.Enqueue(5);
    Q.Enqueue(7);
    Q.Enqueue(4);
    Q.Enqueue(2);

    if(Q.IsEmpty()) cout<<"Queue is Empty" <<endl;
    else cout<<"Queue is not Empty" <<endl;

    if(Q.IsFull()) cout<<"Queue is Full" <<endl;
    else cout<<"Queue is not Full" <<endl;

    Q.Enqueue(6);




    if(Q.IsFull()) cout<<"Queue is Full" <<endl;
    else cout<<"Queue is not Full" <<endl;
    try{
        Q.Enqueue(8);
    }catch (FullQueue exciptionObject)
    {
        cout<<"Queue Overflow"<<endl;
    }
    int item;
    Q.Dequeue(item);
    Q.Dequeue(item);





    Q.Dequeue(item);
    Q.Dequeue(item);
    Q.Dequeue(item);

    if(Q.IsEmpty()) cout<<"Queue is Empty" <<endl;
    else cout<<" Queue is not Empty" <<endl;

    try{
         Q.Dequeue(item);
    }catch(EmptyQueue exciptionObject)
    {
        cout<<"Queue Underflow"<<endl;
    }




    return 0;
}
