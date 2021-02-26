#include<iostream>
#include "stacktype.cpp"
using namespace std;


int main()
{
    StackType<int> s;
    if (s.IsEmpty()) cout<<"Stack is Empty"<<endl;
    else cout<<"Stack is not Empty"<<endl;
    s.Push(5);
    s.Push(7);
    s.Push(4);
    s.Push(2);
    if (s.IsEmpty()) cout<<"Stack is Empty"<<endl;
    else cout<<"Stack is not Empty"<<endl;

    if (s.IsFull()) cout<<"Stack is Full"<<endl;
    else cout<<"Stack is not Full"<<endl;

    s.printlist();
    s.Push(3);
    s.printlist();

    if (s.IsFull()) cout<<"Stack is Full"<<endl;
    else cout<<"Stack is not Full"<<endl;

    s.Pop();
    s.Pop();

    cout<<"Top: "<<s.Top()<<'\n';



    return 0;
}
