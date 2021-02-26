#include"quetype.h"
#include"quetype.cpp"
#include<iostream>

using namespace std;

int main()
{
    QueType<int>qt;

    if(qt.IsEmpty()){
        cout << "Queue is empty" << endl;
    }else{
        cout << "Queue is not empty" << endl;
    }

    cout << endl;

    qt.Enqueue(5);
    qt.Enqueue(7);
    qt.Enqueue(4);
    qt.Enqueue(2);

    if(qt.IsEmpty()){
        cout << "Queue is empty" << endl;
    }else{
        cout << "Queue is not empty" << endl;
    }

    cout << endl;

    int n;
    QueType<int>tq;
    while(!qt.IsEmpty()){
        qt.Dequeue(n);
        cout << n << " ";
        tq.Enqueue(n);
    }cout << endl;

    cout << endl;

    if(tq.IsFull()){
        cout << "Queue is full" << endl;
    }else{
        cout << "Queue is not full" << endl;
    }

    cout << endl;

    tq.Dequeue(n);


    while(!tq.IsEmpty()){
        tq.Dequeue(n);
        cout << n << " ";
        qt.Enqueue(n);
    }cout << endl;

    cout << endl;

    return 0;
}
