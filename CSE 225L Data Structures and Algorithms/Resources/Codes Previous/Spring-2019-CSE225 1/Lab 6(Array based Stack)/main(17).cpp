#include "stacktype.h"

#include "stacktype.cpp"
#include<iostream>
using namespace std;

int main ()
{
    StackType<int> s,s1;
    s.Push(5);
    s.Push(7);
    s.Push(4);
    s.Push(2);

    if(s.IsEmpty())
    {
        cout<< "stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }

    //print
    for(int i=0;i <4; i++)
    {
        s1.Push(s.Top());
        s.Pop();
    }
    for(int i =0; i<4 ; i ++)
    {
        cout <<" " <<s1.Top();
        s.Push(s1.Top());
        s1.Pop();
    }

    cout <<endl;
    s.Push(3);

    for(int i=0;i <5; i++)
    {
        s1.Push(s.Top());
        s.Pop();
    }
    for(int i =0; i<5 ; i ++)
    {
        cout <<" " <<s1.Top();
        s.Push(s1.Top());
        s1.Pop();
    }
    cout<<endl;

     if(s.IsFull())
    {
        cout<< "stack is full" << endl;
    }
    else
    {
        cout << "stack is not full" << endl;
    }

    s.Pop();
    s.Pop();
cout << s.Top() << endl;

}
