#include "stack.cpp"

#include<iostream>
using namespace std;


int main()
{
    StackType<int> s;
    StackType<int> s1;

    s.Push(5);
    s.Push(7);
    s.Push(4);
    s.Push(29);

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

    //s.Pop();

cout<<"Max Value:"<<s.getMax()<<endl;
cout<<endl;

}

