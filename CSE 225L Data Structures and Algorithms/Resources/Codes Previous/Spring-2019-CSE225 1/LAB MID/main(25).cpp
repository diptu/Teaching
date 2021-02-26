#include <iostream>
#include "StackType.h"
using namespace std;

int main()
{
    StackType <int>s;
    s.Push(20);
    cout << s.getMax() << endl;
    s.Push(10);
    cout << s.getMax() << endl;
    s.Push(50);
    cout << s.getMax() << endl;
     s.Pop();
    cout << s.getMax() << endl;
    return 0;
}
