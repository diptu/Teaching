
#include <iostream>
#include "quetype.cpp"
using namespace std;

int main()
{
   QueType<int>q;
    int a;
if(q.IsEmpty())
{
    cout<<"Queue is empty"<<endl;
}
else{
    cout<<"Queue is not empty"<<endl;

}
q.Enqueue(5);
q.Enqueue(7);
q.Enqueue(4);
q.Enqueue(2);

if(q.IsEmpty())
{
    cout<<"Queue is empty"<<endl;
}
else{
    cout<<"Queue is not empty"<<endl;

}

//print the values
QueType<int>q1;
for(int i=0;i<4;i++)
{

q.Dequeue(a);

q1.Enqueue(a);

}
for(int i=0;i<4;i++)
{

q1.Dequeue(a);
cout<<a<<endl;
q.Enqueue(a);

}
//queue full or not
if(q.IsFull())
{
    cout<<"Queue is full"<<endl;
}
else{
    cout<<"Queue is not full"<<endl;

}

    q.Dequeue(a);

//print the values in the queue
for(int i=0;i<3;i++)
{

q.Dequeue(a);

q1.Enqueue(a);

}

for(int i=0;i<3;i++)
{

q1.Dequeue(a);
cout<<a<<endl;
q.Enqueue(a);

}

}
