#include"queue.cpp"
#include"stack.cpp"
#include <iostream>
using namespace std;

void reverse(int k, QueType<int>& q)
{
    StackType<int> St;

    for (int i = 0; i < k; i++) {
        St.push(q.front());
        q.pop();
    }
}

int main()
{
    QueType<int> a (5);
    a.Enqueue(5);
    a.Enqueue(7);
    a.Enqueue(4);
    a.Enqueue(2);

    QueType<int> a1;
	int temp;

	while(a.IsEmpty()!=true)
    {
        a.Dequeue(temp);
        cout<<temp<<" ";
        a1.Enqueue(temp);
    }

    while(a1.IsEmpty()!=true)
    {
        a1.Dequeue(temp);
        a.Enqueue(temp);
    }

    cout<<endl;
}
