
#include <iostream>
#include "quetype.h"
#include "quetype.cpp"

using namespace std;


int main()
{
    QueType<char> Q1;
    StackType<char> S1;
    char ch;
    Q1.Enqueue('a');
    Q1.Enqueue('c');
    Q1.Enqueue('d');
    Q1.Enqueue('b');
    Q1.Enqueue('e');

    Q1.reverseItem(3);

    cout<<"Queue items are:"<<endl;
    while(!Q1.isEmpty())
    {
        Q1.Dequeue(ch);
        cout<<ch<<" ";
    }
    return 0;
}
