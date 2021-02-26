#include <iostream>
#include "quetype.h"
#include "quetype.cpp"

using namespace std;

int main()
{
    QueType<int> Q(5);
    int i;
    int n;
    int m;
    
    Q.Enqueue(1);
    
    cout<<"Enter n:";
    cin>>n;
    i=1;
    i++;
    while(i<=n)
    {
       Q.Dequeue(m);
       cout<<m<<endl;
       p=m*10;
       Q.Enqueue(p);
       i++;
       q=(m*10)+1;
       Q.Enqueue(q);
       i++;
    }

    while(Q.IsEmpty())
    {
       Q.Dequeue(m);
       cout<<m<<endl;
    }


    return 0;
}