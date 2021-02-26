#include <iostream>
#include "pqtype.h"
#include "pqtype.cpp"

using namespace std;

int main()
{
    int numOfBags,numOfMinutes,numOfCandies;
    PQType<int> P1(100);
    int item,totalCandies=0;
    cout<<"Enter the number of bags:";
    cin>>numOfBags;
    cout<<"Enter the number of minutes:";
    cin>>numOfMinutes;

    cout<<"Enter the number of candies you have in each bag:";
    for(int i=0;i<numOfBags;i++)
    {
        cin>>numOfCandies;
        P1.Enqueue(numOfCandies);
    }
    for(int i=0;i<numOfMinutes;i++)
    {
        P1.Dequeue(item);
        totalCandies+=item;
        P1.Enqueue(item/2);
    }
    cout<<"Total number of candies that can be eaten in three minutes is "<<totalCandies<<endl;
    return 0;
}
