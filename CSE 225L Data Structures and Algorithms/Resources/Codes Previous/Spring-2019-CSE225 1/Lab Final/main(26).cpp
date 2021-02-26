
#include"heaptype.cpp"
#include"heaptype.h"
#include"pqtype.h"
#include"pqtype.cpp"
#include"pqtype.h"
#include"heaptype.h"
#include<iostream>
using namespace std;

int main()
{
    PQType<int>a(10) ;
    int P,Q,A,B=0;
    int Least,Least2;
    int sweetness=0;
    int count=0;
    int temp;
    int Ai[6];
   cout<<"input N :"<<endl;
    cin>>P;
    cout<<"input Q :"<<endl;
    cin>>Q;
     cout<<"input Values : "<<endl;
    for(int i=0;i<6;i++)
    {
       cin>> A;
     a.Enqueue(A);
    }
    for(int i=0;i<6;i++)
    {

     a.Dequeue(temp);

   Ai[5-i]=temp;
    }

sweetness=1*Ai[B];
while(!(sweetness>=Q))
{
count++;
sweetness=(sweetness+(2*Ai[B+1]));
B++;
}
if(sweetness>=Q)
{
    cout<<"output : "<<endl;
    cout<<count;

}

else
{
    cout<<"-1";
}



}
