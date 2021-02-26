#include "stacktype.cpp"
#include<iostream>
using namespace std;

int main()
{
    StackType<int> s;
    StackType<int> s1;

    if(s.IsEmpty()==true)
    {
        cout<<"Stack is Empty"<<endl;
    }
    else
        {
            cout<<"Stack is not Empty"<<endl;
        }

    s.Push(5);
    s.Push(7);
    s.Push(4);
    s.Push(2);

    if(s.IsEmpty()==false)
    {
        cout<<"Stack is not Empty"<<endl;
    }
    else
        {
        cout<<"Stack is Empty"<<endl;
    }

    if(s.IsFull()==true)
    {
        cout<<"Stack is Full"<<endl;
    }
    else
    {
        cout<<"Stack is not Full"<<endl;
    }

    s.Push(3);




    for(int i=0;i<5;i++)
    {
        s1.Push(s.Top());
        s.Pop();
    }

    for(int i=0;i<5;i++)
    {
        cout<<s1.Top()<<endl;
        s.Push(s1.Top());
        s1.Pop();
    }

    if(s.IsFull()==true)
    {
        cout<<"Stack is Full"<<endl;
    }
    else
    {
        cout<<"Stack is not Full"<<endl;
    }

    s.Pop();
    s.Pop();

    cout<<endl;
    cout<<s.Top();

}

