#include <iostream>
using namespace std;
#include "pqtype.cpp"

int main() {
    cout << "\nLab-16 PQ_HEAP" << endl;

    int N, K;
    cout << "\nEnter N: ";
    cin >> N;
    cout << "\nEnter K: ";
    cin >> K;

    //int A[N];

    PQType<int> pq(N);
    int num;

    for(int i = 0; i < N; i++) {
        cin >> num;
        pq.Enqueue(num);
    }

    int countOperation = 0;
    int sweetness;
    int minVal, minVal2;


    bool flag = false;
    while(!flag) {
        pq.Dequeue(minVal);
        if(minVal >= K) {
            flag = true;
            break;
        } else {
            //pq.Enqueue(minVal);
            //pq.Dequeue(minVal);
            pq.Dequeue(minVal2);
            sweetness = (1 * minVal) + (2 * minVal2);
            pq.Enqueue(sweetness);
            countOperation++;
        }
    }

    if(countOperation == 0) {
        cout << "-1" << endl;
    } else {

        cout << ++countOperation << endl;
    }

    return 0;
}
