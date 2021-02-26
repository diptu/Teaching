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

    int x;
    QueType<int>tq(5);
    while(!qt.IsEmpty()){
        qt.Dequeue(x);
        cout << x << " ";
        tq.Enqueue(x);
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

    tq.Dequeue(x);
    tq.Dequeue(x);

    while(!tq.IsEmpty()){
        tq.Dequeue(x);
        cout << x << " ";
        qt.Enqueue(x);
    }cout << endl;

    cout << endl;

    qt.Dequeue(x);
    qt.Dequeue(x);
    qt.Dequeue(x);

    if(qt.IsEmpty()){
        cout << "Queue is Empty" << endl;
    }else{
        cout << "Queue is not Empty" << endl;
    }

    cout << endl;

    qt.Dequeue(x);

    cout << endl;

    int n;
    cout << "Give an integer value : ";
    cin >> n;

    QueType<int>bin;

    bin.Enqueue(1);

    while(n--)
    {
        bin.Dequeue(x);
        cout << x << endl;
        bin.Enqueue(x*10);
        bin.Enqueue(x*10+1);
    }

    return 0;
}
