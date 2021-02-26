#include"heaptype.cpp"
#include"heaptype.h"
#include"pqtype.h"
#include"pqtype.cpp"
#include"pqtype.h"
#include"heaptype.h"
#include<iostream>
using namespace std;

int main()
{
    PQType<int>pq(15) ;

    if(pq.IsEmpty())
    {
        cout<<"queue is empty" << endl;
    }
    else
    {
        cout<<"queue is not empty" << endl;
    }

    pq.Enqueue(4);
    pq.Enqueue(9);
    pq.Enqueue(2);
    pq.Enqueue(7);
    pq.Enqueue(3);
    pq.Enqueue(11);
    pq.Enqueue(1);
    pq.Enqueue(0);
    pq.Enqueue(5);
    pq.Enqueue(17);


    if(pq.IsEmpty())
    {
        cout<<"queue is empty" << endl;
    }
    else
    {
        cout<<"queue is not empty" << endl;
    }

    int a=17;

   pq.Dequeue(a);
   cout<<a<<endl;

   int b=11;

   pq.Dequeue(b);
   cout<<b<<endl;

}
