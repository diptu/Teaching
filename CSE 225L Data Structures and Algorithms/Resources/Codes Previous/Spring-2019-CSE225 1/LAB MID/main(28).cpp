#include <bits/stdc++.h>
#include "stack.h"
#include "stack.cpp"
#include "queue.h"
#include "queue.cpp"
using namespace std;
int main()
{
    cout << "HAJIMEMASHITE" << endl;

    //TASK 1
    StackType<int> S;
    S.Push(1);
    S.Push(5);
    S.Push(3);
    S.Push(2);
    S.Push(11);
    S.Push(4);
    S.Pop();
    S.Pop();

    cout << S.getMax() << endl;

    //TASK 2

    QueType<char> Q;
    Q.Enqueue('a');
    Q.Enqueue('c');
    Q.Enqueue('d');
    Q.Enqueue('b');
    Q.Enqueue('e');

    Q.reversed(2);

    while(!Q.IsEmpty())
    {
        char x;
        Q.Dequeue(x);
        cout << x << ' ';
    }

    cout << endl;

    return 0;
}
