#include <bits/stdc++.h>
#include "quetype.h"
#include "quetype.cpp"

using namespace std;

int main()
{

    int n;
    cin >> n;
    QueType<string>q;
    q.Enqueue("1");

    while(n--)
    {
        string x;
        q.Dequeue(x);
        cout << x << endl;

        string y = x;
        x += "0";
        q.Enqueue(x);
        y += "1";
        q.Enqueue(y);
    }

    return 0;
}
