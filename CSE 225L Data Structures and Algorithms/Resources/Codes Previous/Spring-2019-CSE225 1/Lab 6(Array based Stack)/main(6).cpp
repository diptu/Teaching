#include <iostream>
#include "stacktype.h"
#include "stacktype.cpp"

using namespace std;

int main()
{
    StackType<int> S;
    StackType<int> S1;
    int i;
    if(S.IsEmpty())
        cout<<"Stack is Empty"<<endl;
    else
        cout<<"Stack is not Empty"<<endl;

    S.Push(5);
    S.Push(7);
    S.Push(4);
    S.Push(2);

    if(S.IsEmpty())
        cout<<"Stack is Empty"<<endl;
    else
        cout<<"Stack is not Empty"<<endl;

    if(S.IsFull())
        cout<<"Stack is full"<<endl;
    else
        cout<<"Stack is not full"<<endl;

    cout<<"Items in the stack are"<<endl;
    for(i=0;i<4;i++)
    {
        S1.Push(S.Top());
        S.Pop();
    }

    for (i=0;i<4;i++)
    {
        cout<<S1.Top()<<endl;
        S.Push(S1.Top());
        S1.Pop();
    }

    S.Push(3);

    cout<<"Items in the stack are"<<endl;
    for(i=0;i<5;i++)
    {
        S1.Push(S.Top());
        S.Pop();
    }

    for (i=0;i<5;i++)
    {
        cout<<S1.Top()<<endl;
        S.Push(S1.Top());
        S1.Pop();
    }

    if(S.IsFull())
        cout<<"Stack is full"<<endl;
    else
        cout<<"Stack is not full"<<endl;

    S.Pop();
    S.Pop();
    cout<<S.Top()<<endl;


    return 0;
}
