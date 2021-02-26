#include "pqtype.h"
#include "pqtype.cpp"
#include <bits/stdc++.h>

using namespace std;

int main()
{
    PQType<int>pq(15);

    if(pq.IsEmpty()){
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Queue is not empty" << endl;
    }

    pq.Enqueue(4);
    pq.Enqueue(9);
    pq.Enqueue(2);
    pq.Enqueue(7);
    pq.Enqueue(3);
    pq.Enqueue(11);
    pq.Enqueue(17);
    pq.Enqueue(0);
    pq.Enqueue(5);
    pq.Enqueue(1);

    if(pq.IsEmpty()){
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Queue is not empty" << endl;
    }

    int x;
    pq.Dequeue(x);
    cout << x << endl;

    pq.Dequeue(x);
    cout << x << endl;

    int n, m, k;
    cin >> n;
    cin >> k;

    PQType<int>pqb(n);
    while(n--){
        cin >> x;
        pqb.Enqueue(x);
    }

    int total = 0;
    while(k--){
        pqb.Dequeue(x);
        total += x;
        pqb.Enqueue(x/2);
    }
    cout << total << endl;
    return 0;
}
