#include <iostream>
#include "heaptype.h"
#include "pqtype.h"
#include "pqtype.cpp"
#include "heaptype.cpp"
using namespace std;

int main()
{
    PQType<int>m(15);
    if(m.IsEmpty())
    cout<<"queue is empty"<<endl;
    else
    cout<<"queue is not empty"<<endl;

    m.Enqueue(4);
    m.Enqueue(9);
    m.Enqueue(2);
    m.Enqueue(7);
    m.Enqueue(3);
    m.Enqueue(11);
    m.Enqueue(17);
    m.Enqueue(0);
    m.Enqueue(5);
    m.Enqueue(1);
    if(m.IsEmpty())
    cout<<"queue is empty"<<endl;
    else
    cout<<"queue is not empty"<<endl;
    int n;
    m.Dequeue(n);
    cout<<n<<endl;
    m.Dequeue(n);
    cout<<n<<endl;


}

