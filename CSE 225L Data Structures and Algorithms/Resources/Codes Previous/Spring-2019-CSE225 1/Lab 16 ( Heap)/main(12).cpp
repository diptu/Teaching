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
    PQType<int>p(15) ;

    if(p.IsEmpty())
    {
        cout<<"queue is empty" << endl;
    }
    else
    {
        cout<<"queue is not empty" << endl;
    }

    p.Enqueue(4);
    p.Enqueue(9);
    p.Enqueue(2);
    p.Enqueue(7);
    p.Enqueue(3);
    p.Enqueue(11);
    p.Enqueue(1);
    p.Enqueue(0);
    p.Enqueue(5);
    p.Enqueue(17);


    if(p.IsEmpty())
    {
        cout<<"queue is empty" << endl;
    }
    else
    {
        cout<<"queue is not empty" << endl;
    }

    int temp=17;

   p.Dequeue(temp);
   cout<<temp<<endl;

   int temp1=11;

   p.Dequeue(temp1);
   cout<<temp1<<endl;

}
