#include "BinaryNumber.h"
#include <iostream>

using namespace std;

int main()
{
    int n,q,r,s;
    int  i=1;
    BinaryNumber B(1000);

    cout<<"Enter the number of Binary values you want:";
    cin>>n;

    B.Enqueue(1);
    while(i<n)
    {
      i++;
      B.Dequeue(q);
      cout<<q<<endl;
      r=q*10;
      B.Enqueue(r);
      i++;
      if(i<=n)
      {
        s=(q*10)+1;
        B.Enqueue(s);
      }

    }

    while(!B.IsEmpty())
    {
        B.Dequeue(q);
        cout<<q<<endl;
    }
    return 0;
}
