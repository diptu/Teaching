#include <iostream>
#include "pqtype.h"
#include "pqtype.cpp"

using namespace std;

int main()
{
    int numberOfCookies,k,item1,item2,sweetness,operation=0;
    int A[10];
    PQType<int> p1(numberOfCookies);
    cout<<"Enter the number of cookies:";
    cin>>numberOfCookies;
    cout<<"Enter the minimum required sweetness:";
    cin>>k;
    cout<<"Enter the sweetness of each cookie:";
    for(int i=0;i<numberOfCookies;i++)
    {
        cin>>A[i];
        p1.Enqueue(A[i]);
    }

    for(int i=0;i<numberOfCookies;i++)
    {
        p1.Dequeue(item1);
        p1.Dequeue(item2);
        if(item1>=k && item2>=k)
        {
            operation=-1;
            break;
        }
        if(item1<k && item2<k)
        {
            sweetness=(1*item1)+(2*item2);
            p1.Enqueue(sweetness);
            operation++;
        }
        else
        {
            p1.Enqueue(item1);
            p1.Enqueue(item2);
        }
    }
    cout<<"Number of operation is "<<operation<<endl;

    return 0;
}
