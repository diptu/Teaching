#include"quetype.cpp"
#include <iostream>
using namespace std;

int main()
{
    QueType<int> a (5);
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

    if(a.IsFull()==true)
    {
        cout<<"Queue is Full"<<endl;
    }
    else
    {
        cout<<"Queue is not Full"<<endl;
    }

    a.Enqueue(6);

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

    a.Enqueue(8);

    int x;
    a.Dequeue(x);
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

    if(a.IsEmpty()==true)
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        cout<<"Queue is not Empty"<<endl;
    }

}
