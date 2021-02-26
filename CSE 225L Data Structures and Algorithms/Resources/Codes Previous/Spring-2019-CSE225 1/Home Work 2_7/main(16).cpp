#include <iostream>
#include "quetype.cpp"
using namespace std;

int main()
{
    QueType<int> w(5);
    int a;
    if(w.IsEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Queue is not empty"<<endl;

    }
    w.Enqueue(5);

    w.Enqueue(2);
    w.Enqueue(7);
    w.Enqueue(4);
    if(w.IsEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Queue is not empty"<<endl;

    }
    if(w.IsFull())
    {
        cout<<"Queue is full"<<endl;
    }
    else
    {
        cout<<"Queue is not full"<<endl;

    }
    w.Enqueue(6);
    QueType<int>w1(5);
    for(int i=0; i<5; i++)
    {

        w.Dequeue(a);

        w1.Enqueue(a);



    }
    for(int i=0; i<5; i++)
    {

        w1.Dequeue(a);
        cout<<a<<endl;
        w.Enqueue(a);



    }

    if(w.IsFull())
    {
        cout<<"Queue is full"<<endl;
    }
    else
    {
        cout<<"Queue is not full"<<endl;

    }
    w.Enqueue(8);
    for(int i=0; i<2; i++)
    {
        w.Dequeue(a);

    }

    for(int i=0; i<3; i++)
    {

        w.Dequeue(a);

        w1.Enqueue(a);



    }
    for(int i=0; i<3; i++)
    {

        w1.Dequeue(a);
        cout<<a<<endl;
        w.Enqueue(a);



    }
    for(int i=0; i<3; i++)
    {
        w.Dequeue(a);

    }
    if(w.IsEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Queue is not empty"<<endl;

    }
    w.Dequeue(a);
    cout << "Hello world!" << endl;
    return 0;
}
