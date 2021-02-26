#include"quetype.cpp"
#include <iostream>
using namespace std;

int main()
{
    QueType<int> Q;
    int i, temp;

    if(Q.IsEmpty()){
         cout<<"Queue is empty"<<endl;
    }

    else{
        cout<<"Queue is not empty"<<endl;

        cout<<"Enter four integers: "<<endl;
    }

    for(i=0; i<4; i++)
    {
        cin>>temp;
        Q.Enqueue(temp);
    }

    if(Q.IsEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }

    else
    {
        cout<<"Queue is not empty"<<endl;
    }

    QueType<int> Q1;

    cout<<"Queue is: "<<endl;
    for(i=0; i<4; i++)
    {
        Q.Dequeue(temp);
        cout<<temp<<" ";
        Q1.Enqueue(temp);
    }
    for(i=0; i<4; i++)
    {
        Q1.Dequeue(temp);
        Q.Enqueue(temp);
    }
    cout<<endl;

    if(Q.IsFull())
        cout<<"Queue is full"<<endl;
    else
        cout<<"Queue is not full"<<endl;

    int x;
    Q.Dequeue(x);
    Q.Dequeue(x);

    cout<<"Queue is: "<<endl;
    for(i=0; i<3; i++)
    {
        Q.Dequeue(temp);
        cout<<temp<<" ";
        Q1.Enqueue(temp);
    }
    for(i=0; i<3; i++)
    {
        Q1.Dequeue(temp);
        Q.Enqueue(temp);
    }
    cout<<endl;

}
