#include "stacktype.cpp"
#include <iostream>
using namespace std;

int main()
{
    StackType<int> s;

    if(s.IsEmpty())
        cout<<"Stack is empty."<<endl;
    else
        cout<<"Stack is not empty."<<endl;
    cout<<endl;

    int i;
    cout<<"Enter four integers: "<<endl;
    for(i=0; i<4; i++)
    {
        int temp;
        cin>>temp;
        s.Push(temp);
    }
    cout<<endl;

    if(s.IsEmpty())
        cout<<"Stack is empty."<<endl;
    else
        cout<<"Stack is not empty."<<endl;

    if(s.IsFull())
        cout<<"Stack is full."<<endl;
    else
        cout<<"Stack is not full."<<endl;
    cout<<endl;

    StackType<int> s1;
    for(i=0; i<4; i++)
    {
        s1.Push(s.Top());
        s.Pop();
    }

    cout<<endl<<"Stack: "<<endl;
    for(i=0; i<4; i++)
    {
        cout<<s1.Top()<<" ";
        s.Push(s1.Top());
        s1.Pop();
    }
    cout<<endl;

    s.Push(3);

    for(i=0; i<5; i++)
    {
        s1.Push(s.Top());
        s.Pop();
    }

    cout<<endl<<"New Stack: "<<endl;
    for(i=0; i<5; i++)
    {
        cout<<s1.Top()<<" ";
        s.Push(s1.Top());
        s1.Pop();
    }
    cout<<endl<<endl;

    if(s.IsFull())
        cout<<"Stack is full."<<endl;
    else
        cout<<"Stack is not full."<<endl;
    cout<<endl;

    s.Pop();
    s.Pop();

    cout<<"Top Item is "<<s.Top();



}
