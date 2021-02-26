#include<iostream>
#include"pqType.cpp"
using namespace std;




int main()
{
    int n;
     cin>>n;
    int k;
    cin>>k;


    PQType<int> q(n);

    int sweet;
    for(int i=0;i<n;i++)
    {
        cin>>sweet;
        q.Enqueue(sweet);
    }

    int temp1,temp2;


    int count = 0;
    q.Dequeue(temp1);
    while(temp1<k && n >= 2)
    {
        q.Dequeue(temp2);
        q.Enqueue(1*temp1 + 2*temp2);
        count++;
    }

    int temp3 ;
    q.Dequeue(temp3);

    if(n == 1 && temp3 < k)
    {
        count = -1;
    }
    cout<<count<<endl;
}
