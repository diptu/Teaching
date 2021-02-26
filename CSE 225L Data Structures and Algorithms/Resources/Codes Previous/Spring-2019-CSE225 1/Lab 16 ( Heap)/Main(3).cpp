
#include<iostream>
#include"pqType.cpp"
using namespace std;

int main()
{
    PQType<int>  q(15);
    if(!q.IsEmpty())
        cout<<"Queue is not empty"<<endl;
    else
        cout<<"Queue is empty"<<endl;

    q.Enqueue(4);
    q.Enqueue(9);
    q.Enqueue(2);
    q.Enqueue(7);
    q.Enqueue(3);
    q.Enqueue(11);
    q.Enqueue(17);
    q.Enqueue(0);
    q.Enqueue(5);
    q.Enqueue(1);


    if(!q.IsEmpty())
        cout<<"Queue is not empty"<<endl;
    else
        cout<<"Queue is empty"<<endl;


        int n;
        q.Dequeue(n);
        cout<<n<<endl;

         q.Dequeue(n);
        cout<<n<<endl;
}
