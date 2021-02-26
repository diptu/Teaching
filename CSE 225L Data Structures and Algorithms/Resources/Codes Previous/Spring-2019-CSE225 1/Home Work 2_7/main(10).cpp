#include <iostream>
#include "quetype.cpp"

using namespace std;

int main()
{
    int num, temp;

    QueType<int> qt(5);

    if(qt.IsEmpty()){
        cout<<"queue is empty"<<endl;
    }else{
        cout<<"queue is not empty"<<endl;
    }

    for(int i=0; i<4; i++)
    {
        cin>>num;
        qt.Enqueue(num);
    }

    if(qt.IsEmpty()){
        cout<<"queue is empty"<<endl;
    }else{
        cout<<"queue is not empty"<<endl;
    }

    if(qt.IsFull()){
        cout<<"queue is full"<<endl;
    }else{
        cout<<"queue is not full"<<endl;
    }

    for(int i=0; i<1; i++)
    {
        cin>>num;
        qt.Enqueue(num);
    }

    QueType<int> qt2(5);
    for(int i=0 ; i<5 ; i++){
    qt.Dequeue(temp);
    cout<<temp;
    qt2.Enqueue(temp);
    }
    cout<<endl;
    for(int i=0 ; i<5 ; i++){
    qt2.Dequeue(temp);
    qt.Enqueue(temp);
    }

    if(qt.IsFull()){
        cout<<"queue is full"<<endl;
    }else{
        cout<<"queue is not full"<<endl;
    }

    if(qt.IsFull()){
       cout<<"queue overflow"<<endl;
    }else{
    for(int i=0; i<1; i++)
    {
        cin>>num;
        qt.Enqueue(num);
    }
    }

    for(int i=0; i<2; i++)
    {
        qt.Dequeue(num);
    }

    QueType<int> qt3(5);
    for(int i=0 ; i<5 ; i++){
    qt.Dequeue(temp);
    cout<<temp;
    qt3.Enqueue(temp);
    }
    cout<<endl;
    for(int i=0 ; i<5 ; i++){
    qt3.Dequeue(temp);
    qt.Enqueue(temp);
    }

    for(int i=0; i<3; i++)
    {
        qt.Dequeue(num);
    }

    if(qt.IsEmpty()){
        cout<<"queue is empty"<<endl;
    }else{
        cout<<"queue is not empty"<<endl;
    }

    if(qt.IsEmpty()){
        cout<<"queue underflow"<<endl;
    }else{
    for(int i=0; i<1; i++)
    {
        qt.Dequeue(num);
    }
    }
    return 0;
}
