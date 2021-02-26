#include <iostream>
#include "QueType.cpp"
using  namespace std;

int main() {
    QueType<int> q;

    if (q.IsEmpty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    q.Enqueue(5);
    q.Enqueue(7);
    q.Enqueue(4);
    q.Enqueue(2);

    if (q.IsEmpty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;


    QueType<int> q1;
    int temp;


    while (q.IsEmpty() != true) {
        q.Dequeue(temp);
        cout << temp << " ";
        q1.Enqueue(temp);
    }
    cout << endl;

    while (q1.IsEmpty() != true) {
        q1.Dequeue(temp);
        q.Enqueue(temp);
    }

    if (q.IsFull()) {
        cout << "Queue is full" << endl;
    } else {
        cout << "Queue is not full" << endl;
    }

    q.Dequeue(temp);

    QueType<int> q2;
    int temp1;


    while (q.IsEmpty() != true) {
        q.Dequeue(temp1);
        cout << temp1 << " ";
        q2.Enqueue(temp1);
    }
    cout << endl;

    while (q2.IsEmpty() != true) {
        q2.Dequeue(temp1);
        q.Enqueue(temp1);
    }
}