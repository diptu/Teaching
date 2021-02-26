#include<bits/stdc++.h>
#include"pqtype.h"
#include"pqtype.cpp"
#include"heaptype.h"

using namespace std;

int main()
{
   int n, k;
   cin >> n >> k;
   PQType<int>pq(50);

   for(int i=0; i<n;i++)
   {
        int x;
        cin >> x;
        if(x<k) {
            x *= -1;
           // cout << "Inserting " << x << endl;
            pq.Enqueue(x);
        }
   }

   int steps = 0;
   bool flag = true;
   while(flag)
   {
       steps++;
       int first, second;
       pq.Dequeue(first);
       pq.Dequeue(second);
       first *= -1;
       second *= -1;
       int newvar = (1*first) + (2*second);
       if(newvar<k) {
        newvar *= -1;
        pq.Enqueue(newvar);
       }
       if(pq.IsEmpty())
       {
           flag = false;
       }
   }


    cout << steps << endl;


    return 0;
}
