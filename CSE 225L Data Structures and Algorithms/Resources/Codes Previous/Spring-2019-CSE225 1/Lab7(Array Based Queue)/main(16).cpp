#include "quetype.h"
#include "quetype.cpp"
#include  <iostream>

using namespace std;

int main()
{
    QueType<int>qt(5);
    cout << endl;

    if(qt.IsEmpty()){
        cout << "Queue is Empty" << endl;
    }else{
        cout << "Queue is not Empty" << endl;
    }

    cout << endl;

    qt.Enqueue(5);
    qt.Enqueue(7);
    qt.Enqueue(4);
    qt.Enqueue(2);

    if(qt.IsEmpty()){
        cout << "Queue is Empty" << endl;
    }else{
        cout << "Queue is not Empty" << endl;
    }

    cout << endl;

    if(qt.IsFull()){
        cout << "Queue is full" << endl;
    }else{
        cout << "Queue is not full" << endl;
    }

    cout << endl;

    qt.Enqueue(6);

    int n;
    QueType<int>tq(5);
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

    tq.Enqueue(8);

    cout << endl;

    tq.Dequeue(n);
    tq.Dequeue(n);

    while(!tq.IsEmpty()){
        tq.Dequeue(n);
        cout << n << " ";
        qt.Enqueue(n);
    }cout << endl;

    cout << endl;

    qt.Dequeue(n);
    qt.Dequeue(n);
    qt.Dequeue(n);

    if(qt.IsEmpty()){
        cout << "Queue is Empty" << endl;
    }else{
        cout << "Queue is not Empty" << endl;
    }

    cout << endl;

    qt.Dequeue(n);

    cout << endl;

    return 0;
}

