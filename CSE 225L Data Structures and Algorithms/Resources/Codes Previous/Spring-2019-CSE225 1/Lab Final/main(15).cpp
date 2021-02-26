#include <iostream>
#include "pqtype.h"
#include "pqtype.cpp"

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;


  PQType <int> q(100);
    for (int i=0;i<n;i++) {
        int x;
        cin >> x;
        q.Enqueue(x);
    }


    int count=0;
    while(true){

        int x=q[1];
        if (x=q[]<k) {
            q.Dequeue(x);
            if (q.empty()) {
                cout << -1;
                break;
            }
            int y=2*q.top();
            q.Dequeue();
            q.Enqueue(x+y);
            count++;
        }
        else {
            cout << count;
            break;
        }
    }

    return 0;
}
