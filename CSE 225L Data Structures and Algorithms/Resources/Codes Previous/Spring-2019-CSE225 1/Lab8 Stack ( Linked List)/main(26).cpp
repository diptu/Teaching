#include <iostream>
#include "stacktype.cpp"
using namespace std;

int main()
{


    StackType<int> mystack;
    if (mystack.IsEmpty()) cout<<"Stack is Empty"<<endl;
    else cout<<"Stack is not Empty"<<endl;
    mystack.Push(5);
    mystack.Push(7);
    mystack.Push(4);
    mystack.Push(2);
    if (mystack.IsEmpty()) cout<<"Stack is Empty"<<endl;
    else cout<<"Stack is not Empty"<<endl;

    if (mystack.IsFull()) cout<<"Stack is Full"<<endl;
    else cout<<"Stack is not Full"<<endl;




    mystack.Push(3);





    if (mystack.IsFull()) cout<<"Stack is Full"<<endl;
    else cout<<"Stack is not Full"<<endl;

    mystack.Pop();
    mystack.Pop();

    cout<<"Top: "<<mystack.Top()<<endl;

    return 0;
}
