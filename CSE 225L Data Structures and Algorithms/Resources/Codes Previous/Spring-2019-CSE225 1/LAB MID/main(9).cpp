#include <iostream>
#include"queue.cpp"
#include"queue.h"
#include"stack.h"
#include"stack.cpp"
using namespace std;

void reverseK(int k, QueType<char>& Q)
{
    if (Q.IsEmpty() == true || k > Q.size())
        return;
    if (k <= 0)
        return;

    StackType<char> Stack;


    for (int i = 0; i < k; i++) {
        Stack.push(Q.front());
        Q.pop();
    }


    while (!Stack.IsEmpty()) {
        Q.push(Stack.top());
        Stack.pop();
    }


    for (int i = 0; i < Q.size() - k; i++) {
        Q.push(Queue.front());
        Q.pop();
    }
}


void Print(queue<char>& Queue)
{
    while (!Q.IsEmpty()) {
        cout << Queue.front() << " ";
        Queue.pop();
    }
}


int main()
{
    queue<char> Queue;
    Q.push('a');
    Q.push('c');
    Q.push('d');
    Q.push('b');
    Q.push('e');


    int k = 3;
    reverseK(k, Q);
    Print(Q);
}
