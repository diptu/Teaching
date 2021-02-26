#include <iostream>
#include"pqtype.cpp"
using namespace std;

int main()
{
   PQType<int> pq(15);
   if(pq.IsEmpty())
    cout<<"queue is empty"<<endl;
   else
    cout<<"queue is not empty"<<endl;

   pq.Enqueue(4);
   pq.Enqueue(9);
   pq.Enqueue(2);
   pq.Enqueue(7);
   pq.Enqueue(3);
   pq.Enqueue(11);
   pq.Enqueue(17);
   pq.Enqueue(0);
   pq.Enqueue(5);
   pq.Enqueue(1);

    if(pq.IsEmpty())
    cout<<"queue is empty"<<endl;
   else
    cout<<"queue is not empty"<<endl;


   int p;
   pq.Dequeue(p);
   cout<<p<<endl;

   pq.Dequeue(p);
   cout<<p<<endl;



    return 0;
}
