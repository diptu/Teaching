#include <iostream>
using namespace std;
#include "pqtype.cpp"

int main()
{
    cout << "\nLab-16 PQ_HEAP" << endl;

    PQType<int> pq(15);

    // print isEmpty
    if(pq.IsEmpty()) {
        cout << "\nQueue is Empty" << endl;
    } else {
        cout << "\nQueue is not Empty" << endl;
    }

    // insert 10 items
    int num;
    cout << "\nInsert 10 items: ";
    for(int i = 0; i < 10; i++) {
        cin >> num;
        pq.Enqueue(num);
    }

    // print isEmpty
    if(pq.IsEmpty()) {
        cout << "\nQueue is Empty" << endl;
    } else {
        cout << "\nQueue is not Empty" << endl;
    }

    // dequeue 1 element
    int x;
    pq.Dequeue(x);
    cout << "\nDequeued item is: " << x << endl;

    // dequeue 1 element
    pq.Dequeue(x);
    cout << "\nDequeued item is: " << x << endl;


    //extra task
    int numOfBags;
    int totalMinutes;
    int numOfCandies = 0;

    cout<<"Number of bags: ";
    cin >> numOfBags;
    cout<<"Number of times: ";
    cin>> totalMinutes;

    PQType<int> pq2(numOfBags);

    for(int i = 0 ; i <numOfBags; i++) {
        int temp;
        cin>>temp;
        pq2.Enqueue(temp);
    }

    for(int i = 0 ; i <totalMinutes; i++) {
        int temp2;
        pq2.Dequeue(temp2);
        numOfCandies += temp2;
        pq2.Enqueue(temp2/2);
    }
    cout << "\nNumber of candies: " << numOfCandies << endl;


    return 0;
}
