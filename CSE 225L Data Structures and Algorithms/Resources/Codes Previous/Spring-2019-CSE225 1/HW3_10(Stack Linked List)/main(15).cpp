#include <iostream>
#include "  quetype.cpp"
using namespace std;

int main()
{


    QueType<int> ob;
    int a;
if(ob.IsEmpty())
{
    cout<<"Queue is empty"<<endl;
}
else{
    cout<<"Queue is not empty"<<endl;

}
ob.Enqueue(5);

ob.Enqueue(7);
ob.Enqueue(4);
ob.Enqueue(2);
if(ob.IsEmpty())
{
    cout<<"Queue is empty"<<endl;
}
else{
    cout<<"Queue is not empty"<<endl;

}


QueType<int>ob1;
for(int i=0;i<4;i++)
{

ob.Dequeue(a);

ob1.Enqueue(a);



}
for(int i=0;i<4;i++)
{

ob1.Dequeue(a);
cout<<a<<endl;
ob.Enqueue(a);



}

if(ob.IsFull())
{
    cout<<"Queue is full"<<endl;
}
else{
    cout<<"Queue is not full"<<endl;

}



    ob.Dequeue(a);



for(int i=0;i<3;i++)
{

ob.Dequeue(a);

ob1.Enqueue(a);



}
for(int i=0;i<3;i++)
{

ob1.Dequeue(a);
cout<<a<<endl;
ob.Enqueue(a);



}

    cout << "Hello world!" << endl;
    return 0;
}

