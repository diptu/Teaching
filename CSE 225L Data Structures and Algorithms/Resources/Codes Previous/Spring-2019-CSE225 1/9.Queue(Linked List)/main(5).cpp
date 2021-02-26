#include <iostream>
#include "queuetype.cpp"
using namespace std;

template <class T>
void printQueue(QueueType<T> q)
{
    QueueType<T> q2;
    int temp;

    while(!q.IsEmpty()){
        q.Dequeue(temp);
        cout << " " << temp;
        q2.Enqueue(temp);
    }

    // shift again at q
    while(!q2.IsEmpty()){
        q2.Dequeue(temp);
        q.Enqueue(temp);
    }
}

int main()
{
    cout << "lab09_Queue_Linked_list_01" << endl;

    // 1st part
    QueueType<int> q1;

    cout << "\nIs the queue is empty or not? ";
    if(q1.IsEmpty()){
        cout << "queue is empty" << endl;
    }
    else{
        cout << "queue is not empty" << endl;
    }

    int num1;
    cout << "\nEnqueue 4 int numbers: ";
    for(int i = 0; i < 4; i++){
        cin >> num1;
        q1.Enqueue(num1);
    }

    cout << "\nIs the queue is empty or not? ";
    if(q1.IsEmpty()){
        cout << "queue is empty" << endl;
    }
    else{
        cout << "queue is not empty" << endl;
    }

    cout << "\nPrinting queue: ";
    printQueue(q1);
    cout << endl;

    cout << "\nIs the queue is full or not? ";
    if(q1.IsFull()){
        cout << "queue is full" << endl;
    }
    else{
        cout << "queue is not full" << endl;
    }

    cout << "\nDequeue an item: ";
    int temp;
    q1.Dequeue(temp);
    //cout << " " << temp << " dequeued from queue" << endl;

    cout << "\nPrinting queue: ";
    printQueue(q1);
    cout << endl;

    return 0;
}
