#include <iostream>
#include "pqtype.h"
#include "pqtype.cpp"
#include "heaptype.h"
#include "heaptype.cpp"


using namespace std;

int main()
{
     PQType<int>p(10) ;

    int n,k;
    int Sweetness=0;
    int Count=0;
    int Ai[6];
    int num = 0;



    cout<<"input N"<<endl;
    cin>>n;
    cout<<"input K"<<endl;
    cin>>k;

    int value;
    cout<<"input Values"<<endl;
    for(int i=0;i<6;i++)
    {
       cin>> value;
       p.Enqueue(value);
    }


    int temp;
    for(int i=0;i<6;i++)
    {

       p.Dequeue(temp);
       Ai[5-i]=temp;
    }

   Sweetness=1*Ai[num];
   while(!(Sweetness>=k))
    {
       Count++;
       Sweetness=(Sweetness+(2*Ai[num+1]));
       num++;
   }

   if(Sweetness>=k)
   {
      cout<<"Result"<<endl;
      cout<<Count;
   }
   else
   {
      cout<<"-1";
   }

    return 0;
}
