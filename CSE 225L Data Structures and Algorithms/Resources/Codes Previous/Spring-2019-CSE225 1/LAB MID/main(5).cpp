#include <iostream>
#include "stack.cpp"
using namespace std;

int main()
{
    StackType <int> s;
    s.Push(2);

    s.Push(1);

    s.Push(5);


    cout << s.getMax() << endl;
    return 0;
}
