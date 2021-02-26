#include <iostream>
#include "stacktype.cpp"
using namespace std;



int main()
{
    StackType<int>obj;

    if(obj.IsEmpty())
        cout<<"Stack is empty\n";
    else cout<<"Stack is not empty\n";

    obj.Push(5); obj.Push(7); obj.Push(4); obj.Push(2);

    if(obj.IsEmpty())
        cout<<"Stack is empty";
    else cout<<"Stack is not empty\n";


    if(obj.IsFull())
        cout<<"Stack is Full";
    else cout<<"Stack is not Full\n";

    StackType<int>copied;
    for(int i=0;i<4;i++)
    {
        int temp;
        temp=obj.Top();
        obj.Pop();
        copied.Push(temp);

    }


    for(int i=0;i<4;i++)
    {
        int temp;
        temp=copied.Top();
        cout<<temp<<" ";
        copied.Pop();
        obj.Push(temp);
    }

    obj.Push(3);
    cout<<endl<<endl;

    for(int i=0;i<5;i++)
    {
        int temp;
        temp=obj.Top();
        obj.Pop();
        copied.Push(temp);

    }


    for(int i=0;i<5;i++)
    {
        int temp;
        temp=copied.Top();
        cout<<temp<<" ";
        copied.Pop();
        obj.Push(temp);
    }

    if(obj.IsFull())
        cout<<"\nStack is Full\n";
    else cout<<"\nStack is not Full\n";

    obj.Pop();obj.Pop();
    cout<<obj.Top();

    return 0;
}
