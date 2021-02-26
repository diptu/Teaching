#include <iostream>
#include "StackType.cpp"
using namespace std;

int main()
{

    StackType<int> ob;
    StackType<int> ob1;
    if(ob.IsEmpty())
    {
        cout<<"empty"<<endl;
    }
    ob.Push(5);
    ob.Push(7);
    ob.Push(4);
    ob.Push(2);
    if(ob.IsEmpty())
    {
        cout<<"empty"<<endl;
    }

    else
    {

        cout<<"not empty"<<endl;
    }


    if(ob.IsFull())
    {

        cout<<"is full";

    }
    else
    {


        cout<<"is not full"<<endl;
    }
    for(int i=0; i<4; i++)
    {

        ob1.Push(ob.Top());
        ob.Pop();

    }

    for(int i=0; i<4; i++)
    {
        cout<<ob1.Top()<<endl;
        ob.Push(ob1.Top());

        ob1.Pop();




    }
    ob.Push(3);
    for(int i=0; i<5; i++)
    {

        ob1.Push(ob.Top());
        ob.Pop();

    }
    cout<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<ob1.Top()<<endl;
        ob.Push(ob1.Top());

        ob1.Pop();

    }
    if(ob.IsFull())
    {

        cout<<"is full";

    }
    else
    {


        cout<<"is not full"<<endl;
    }
    ob.Pop();
    ob.Pop();
    cout<<endl<<ob.Top()<<endl;

    cout << "Hello world!" << endl;
    return 0;
}
