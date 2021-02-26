#include <iostream>
#include "quetype.cpp"

using namespace std;

int main()
{
   QueType<int> qt;
    int num, temp;

    if(qt.IsEmpty())
    {
        cout<<"queue is empty"<<endl;
    }else{
        cout<<"queue is not empty"<<endl;
    }

    for(int i=0; i<4; i++)
    {
        cin>>num;
        qt.Enqueue(num);
    }

    if(qt.IsEmpty())
    {
        cout<<"queue is empty"<<endl;
    }else{
        cout<<"queue is not empty"<<endl;
    }

    QueType<int> qt2;
    for(int i = 0 ; i <4 ; i++){
    qt.Dequeue(temp);
    cout<<temp;
    qt2.Enqueue(temp);
    }
    for(int i = 0 ; i <4 ; i++){
    qt2.Dequeue(temp);
    qt.Enqueue(temp);
    }

    if(qt.IsFull()){
        cout<<"queue is full"<<endl;
    }else{
        cout<<"queue is not full"<<endl;
    }
    cout<<endl;

    for(int i=0; i<1; i++)
    {
        cin>>num;
        qt.Dequeue(num);
    }

     QueType<int> qt3;
    for(int i = 0 ; i <4 ; i++){
    qt.Dequeue(temp);
    cout<<temp;
    qt3.Enqueue(temp);
    }
    cout<<endl;
    for(int i = 0 ; i <4 ; i++){
    qt3 .Dequeue(temp);
    qt.Enqueue(temp);
    }
    return 0;
}
