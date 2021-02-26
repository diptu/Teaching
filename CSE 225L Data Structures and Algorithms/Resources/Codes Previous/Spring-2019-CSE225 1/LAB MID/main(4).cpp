#include <iostream>
#include "StackType.cpp"
#include "QueueType.h"
using namespace std;

int main()
{
    StackType <int>s;
    s.Push(10);
    cout << s.getMax() << endl;
    s.Push(15);
    cout << s.getMax() << endl;
    s.Push(20);
    cout << s.getMax() << endl;
     s.Pop();
    cout << s.getMax() << endl;


}
