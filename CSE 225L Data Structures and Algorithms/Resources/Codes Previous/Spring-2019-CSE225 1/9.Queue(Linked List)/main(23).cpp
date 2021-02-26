#include"quetype.cpp"
#include <iostream>
using namespace std;

int main()
{
    QueType<int> a;
    if(a.IsEmpty()==true)
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        cout<<"Queue is not Empty"<<endl;
    }

    a.Enqueue(5);
    a.Enqueue(7);
    a.Enqueue(4);
    a.Enqueue(2);

    if(a.IsEmpty()==true)
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        cout<<"Queue is not Empty"<<endl;
    }

     QueType<int> a1;
	int temp;

	while(a.IsEmpty()!=true)
    {
        a.Dequeue(temp);
        cout<<temp<<" ";
        a1.Enqueue(temp);
    }

    while(a1.IsEmpty()!=true)
    {
        a1.Dequeue(temp);
        a.Enqueue(temp);
    }

    cout<<endl;

    if(a.IsFull())
    {
        cout<<"Queue is Full"<<endl;
    }
    else
    {
        cout<<"Queue is not Full"<<endl;
    }

    int x;
    a.Dequeue(x);

    QueType<int> a2;
	int temp1;

	while(a.IsEmpty()!=true)
    {
        a.Dequeue(temp1);
        cout<<temp1<<" ";
        a2.Enqueue(temp1);
    }

    while(a1.IsEmpty()!=true)
    {
        a2.Dequeue(temp1);
        a.Enqueue(temp1);
    }
}
