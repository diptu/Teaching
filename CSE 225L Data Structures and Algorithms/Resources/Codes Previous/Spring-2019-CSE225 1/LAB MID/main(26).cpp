#include <iostream>
#include "StackType.h"
using namespace std;

int main()
{
    StackType <int>s;
    s.Push(2);
    cout << s.getMax() << endl;
    s.Push(1);
    cout << s.getMax() << endl;
    s.Push(5);
    cout << s.getMax() << endl;
     s.Pop();
    cout << s.getMax() << endl;
    return 0;
}
