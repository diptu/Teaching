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
    QueType<int> qt2(5);
    //qt.Enqueue(6);
    for(int i = 0 ; i <4 ; i++){
    qt.Dequeue(temp);
    cout<<temp;
    qt2.Enqueue(temp);
    }
    if(qt.IsEmpty()){
        cout<<"queue is empty"<<endl;
    }else{
        cout<<"queue is not empty"<<endl;
    }
    cout<<endl;
    for(int i = 0 ; i <4 ; i++){
    qt2.Dequeue(temp);
    //cout<<temp;
    qt.Enqueue(temp);
    }

    if(qt.IsEmpty()){
        cout<<"queue is empty"<<endl;
    }else{
        cout<<"queue is not empty"<<endl;
    }
    return 0;
}
