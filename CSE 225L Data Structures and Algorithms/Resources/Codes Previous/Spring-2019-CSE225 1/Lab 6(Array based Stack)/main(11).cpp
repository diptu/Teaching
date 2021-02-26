#include <iostream>
#include "stacktype.cpp"
#include "stacktype.h"

using namespace std;

int main()
{

    StackType<int>s1;
    StackType<int>s2;
    if(s1.IsEmpty())
        cout<<"stack is empty"<<endl;
    else
        cout<<"stack is not empty"<<endl;

    cout<<s1.Top()<<endl;

    for(int i=0; i<MAX_ITEMS ; i++)
    {
        int a;
        cin>>a;
        s1.Push(a);

    }
    for(int i=0; i<MAX_ITEMS; i++)
    {
        cout<<s2.Top()<<endl;
        s2.Push(s1.Top());
        s1.Pop();
    }
    return 0;
}
