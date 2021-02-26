#include <iostream>
#include"stacktype.cpp"
using namespace std;

int main()
{
    StackType <int> s1;
    StackType <int> s2;
    if (s1.IsEmpty())
        cout<<"stack is empty"<<endl;
    else
        cout<<"stack is not empty"<<endl;

    for(int i=0; s1[i]!= IsEmpty; i++)
    {
    s1.Push(5);
    s1.Push(7);
    s1.Push(4);
    s1.Push(2);
    }
    for(int i=0; s1[i]!= IsEmpty; i++)
    {
        cout<<s2.top<<endl;
        s2.Push(s1.top());
        s1.Pop;
    }

    return 0;
}
