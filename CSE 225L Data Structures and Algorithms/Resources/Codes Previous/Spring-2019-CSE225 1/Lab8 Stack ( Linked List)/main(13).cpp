#include<iostream>
#include "stacktype.h"
using namespace std;


int main()
{
    StackType<int> e;
    if (e.IsEmpty()) cout<<"Stack is Empty"<<endl;
    else cout<<"Stack is not Empty"<<endl;
    e.Push(5);
    e.Push(7);
    e.Push(4);
    e.Push(2);
    if (e.IsEmpty()) cout<<"Stack is Empty"<<endl;
    else cout<<"Stack is not Empty"<<endl;

    if (e.IsFull()) cout<<"Stack is Full"<<endl;
    else cout<<"Stack is not Full"<<endl;

    e.printlist();
    e.Push(3);
    e.printlist();

    if (e.IsFull()) cout<<"Stack is Full"<<endl;
    else cout<<"Stack is not Full"<<endl;

    e.Pop();
    e.Pop();

    cout<<"top"<<e.Top()<<'\n';



return 0;
}
