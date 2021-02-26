#include <iostream>
#include "StackType.h"

using namespace std;


int main()
{
    StackType<int> stacktype;

    if(stacktype.IsFull()) cout<<"Stack is Full."<<endl;
    else cout<<"Stack is not Full."<<endl;

    stacktype.Push(5);
    stacktype.Push(7);
    stacktype.Push(4);
    stacktype.Push(2);

    if(stacktype.IsFull()) cout<<"Stack is Full."<<endl;
    else cout<<"Stack is not Full."<<endl;


    stacktype.Push(3);



    if(stacktype.IsFull()) cout<<"Stack is full."<<endl;
    else cout<<"Stack is not full."<<endl;
    stacktype.Pop();
    stacktype.Pop();
    cout<<"Top Item: "<<stacktype.Top();

    return 0;
}
