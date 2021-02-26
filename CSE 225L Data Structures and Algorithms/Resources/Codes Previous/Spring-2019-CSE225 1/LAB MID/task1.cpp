#include "queuetype.cpp"
#include "stacktype.cpp"
#include <iostream>
using namespace std;

void Reverse(int k)
{
    QueType<int> q1, q2;
    StackType<int> s1, s2, s3;

    int temp, i;
    cout<<"Enter elements: "<<endl;
    for(i=0; i<5; i++)
    {
        cin>>temp;
        q1.Enqueue(temp);
        s1.Push(temp);
    }

    for(i=0; i<5; i++)
    {
        s2.Push(s1.Top());
        s1.Pop();
    }

    for(i=0; i<k; i++)
    {
        s3.Push(s2.Top());
        s2.Pop();
    }

    /*for(i=0; i<k; i++)
    {
        s1.Push(s3.Top());
        s3.Pop();
    }*/

    for(i=0; i<k; i++)
    {
        q2.Enqueue(s3.Top());
        s1.Push(s3.Top());
        s3.Pop();
    }

    for(i=k; i<5; i++)
    {
        q2.Enqueue(s2.Top());
        s1.Push(s2.Top());
        s2.Pop();
    }

    cout<<"Reverse: "<<endl;
    for(i=0; i<5; i++)
    {
        s2.Push(s1.Top());
        s1.Pop();
    }
    for(i=0; i<5; i++)
    {
        cout<<s2.Top()<<endl;
        s2.Pop();
    }


}

int main()
{
    StackType<int> s;
    int temp;

    cout<<"Enter elements: "<<endl;
    for(int i=0; i<4; i++)
    {
        cin>>temp;
        s.Push(temp);
    }
    cout<<endl;

    StackType<int> st;
    cout<<"Max element is: "<<s.getMax(st)<<endl;

    s.Pop();
    cout<<endl<<"Max element after popping is: "<<s.getMax(st);

    cout<<endl<<"Enter an element: "<<endl;
    cin>>temp;
    s.Push(temp);
    cout<<"Max element after pushing a new element is: "<<s.getMax(st);
    cout<<endl;

//TASK 2
    cout<<"*TASK 2*"<<endl;
    cout<<"Number of elements to be reversed: "<<endl;
    cin>>temp;

    Reverse(temp);



}
