#include <iostream>
#include "queuetype.cpp"
using namespace std;

int decToBin(int n){
    int rem, binary=0, i=1;

    while(n!=0){
        rem = n % 2;
        binary = binary + rem*i;
        n = n/2;
        i = i*10;
    }
    return binary;
}

int main()
{
    cout << "lab_07" << endl;
/*
    // 1st part
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
*/

    // 2nd part
    QueueType<int> q3;

    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int j = 1; j <= n; j++){
        int binNum = decToBin(j);

        int tempBin = binNum;
        while(tempBin != 0){
            int x = tempBin % 2;
            q3.Enqueue(x);
            tempBin = tempBin / 2;
        }
        for(int i = 0; !q3.IsEmpty(); i++){
            int temp;
            q3.Dequeue(temp);
            cout << " " << temp;
        }
        cout << endl;
    }



    return 0;
}
