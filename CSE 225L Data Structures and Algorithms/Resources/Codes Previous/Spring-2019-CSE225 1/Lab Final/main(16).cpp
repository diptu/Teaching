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
    PQType<int>p(10) ;

    int N,K,A,C=0,Least,Least2,Sweetness=0,Count=0,temp,Ai[6];
    cout<<"N=";
    cin>>N;
    cout<<"K=";
    cin>>K;
    cout<<"Values"<<endl;
    for(int i=0; i<6; i++)
    {
        cin>> A;
        p.Enqueue(A);


    }
    for(int i=0; i<6; i++)
    {

        p.Dequeue(temp);

        Ai[5-i]=temp;
    }

    Sweetness=1*Ai[C];
    while(!(Sweetness>=K))
    {


        Count++;


        Sweetness=(Sweetness+(2*Ai[C+1]));

        C++;

    }





    if(Sweetness>=K)
    {
        cout<<"Operation=";
        cout<<Count;


    }

    else
    {

        cout<<"-1";
    }



}




