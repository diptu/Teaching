#include <iostream>
#include "quetype.cpp"
using namespace std;

int main()
{
    QueType<int> ob(5);
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

ob.Enqueue(6);







QueType<int>ob1(5);
for(int i=0;i<5;i++)
{

ob.Dequeue(a);

ob1.Enqueue(a);



}
for(int i=0;i<5;i++)
{

ob1.Dequeue(a);
cout<<a<<endl;
ob.Enqueue(a);



}

cout<<endl;
ob.reversed(3);


for(int i=0;i<5;i++)
{

ob.Dequeue(a);

ob1.Enqueue(a);



}
for(int i=0;i<5;i++)
{

ob1.Dequeue(a);
cout<<a<<endl;
ob.Enqueue(a);



}



    return 0;
}
