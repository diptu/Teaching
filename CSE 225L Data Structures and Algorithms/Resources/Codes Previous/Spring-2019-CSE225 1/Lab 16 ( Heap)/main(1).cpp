//#include "heaptype.cpp"
#include "pqtype.cpp"
#include <iostream>
using namespace std;

int main()
{
   PQType<int> pq(15);

   if(pq.IsEmpty())
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;
    cout<<endl;

    cout<<"Insert 10 items: "<<endl;
    int temp, i;
    for(i=0; i<10; i++)
    {
        cin>>temp;
        pq.Enqueue(temp);
    }
    cout<<endl;

    if(pq.IsEmpty())
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Queue is not empty"<<endl;
    cout<<endl;

    pq.Dequeue(temp);
    cout<<"1st dequeued element is "<<temp<<endl;

    pq.Dequeue(temp);
    cout<<"2nd dequeued element is "<<temp<<endl;
    cout<<endl;

    int bag, mins;
    cout<<"Enter the number of bags: "<<endl;
    cin>>bag;

    PQType<int> pq1(bag);

    cout<<"Enter the number of minutes: "<<endl;
    cin>>mins;

    cout<<"Enter the number of candies in each bag: "<<endl;
    for(i=0; i<bag; i++)
        cin>>temp;

    int candy, total=0;

    for(i=0; i<mins; i++)
    {
        pq.Dequeue(temp);
        total+=temp;
        candy=temp/2;
        pq.Enqueue(candy);
    }

    cout<<"Maximum number of candies you can eat is "<<total;
}

