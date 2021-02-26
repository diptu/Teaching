#include <iostream>
#include "queuetype.cpp"
using namespace std;

int main()
{
    cout << "lab_07" << endl;

    // create a queue of integers
    QueueType<int> q1(5);

    // print if queue is empty or not
    if(q1.IsEmpty()){
        cout << "\nQueue is Empty" << endl;
    }
    else{
        cout << "\nQueue is not Empty" << endl;
    }

    cout << "Enqueue 4 items: ";
    int num1;
    for(int i = 0; i < 4; i++){
        cin >> num1;
        q1.Enqueue(num1);
    }

    // print if queue is empty or not
    if(q1.IsEmpty()){
        cout << "Queue is Empty" << endl;
    }
    else{
        cout << "Queue is not Empty" << endl;
    }

    // print if queue is full or not
    if(q1.IsFull()){
        cout << "Queue is Full" << endl;
    }
    else{
        cout << "Queue is not Full" << endl;
    }

    cout << "Enqueue another item: ";
    cin >> num1;
    q1.Enqueue(num1);

    // print the queue
    QueueType<int> q2;
    // pass q1 to temp queue q2
    for(int i = 0; !q1.IsEmpty(); i++){
        int tempQ;
        q1.Dequeue(tempQ);
        cout << " " << tempQ;
        q2.Enqueue(tempQ);
    }
    // restoring the q1 from q2
    for(int i = 0; !q2.IsEmpty(); i++){
        int tempQ;
        q2.Dequeue(tempQ);
        q1.Enqueue(tempQ);
    }
    // print if queue is full or not
    if(q1.IsFull()){
        cout << "\nQueue is Full" << endl;
    }
    else{
        cout << "\nQueue is not Full" << endl;
    }

    cout << "Enqueue another item: ";
    cin >> num1;
    q1.Enqueue(num1);

    // Dequeue 2 items
    int temp;
    for(int i = 0; i < 2; i++){
        q1.Dequeue(temp);
    }

    // print the values in q1 given order
    // pass q1 to temp queue q2
    for(int i = 0; !q1.IsEmpty(); i++){
        int tempQ;
        q1.Dequeue(tempQ);
        cout << " " << tempQ;
        q2.Enqueue(tempQ);
    }
    // restoring the q1 from q2
    for(int i = 0; !q2.IsEmpty(); i++){
        int tempQ;
        q2.Dequeue(tempQ);
        q1.Enqueue(tempQ);
    }

    // Dequeue 3 items
    for(int i = 0; i < 3; i++){
        q1.Dequeue(temp);
    }

    // print if queue is empty or not
    if(q1.IsEmpty()){
        cout << "\nQueue is Empty" << endl;
    }
    else{
        cout << "\nQueue is not Empty" << endl;
    }

    // Dequeue 1 item
    q1.Dequeue(temp);




    return 0;
}
