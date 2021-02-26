#include <iostream>
#include"TreeType.cpp"
using namespace std;




int main()
{
TreeType<int> t;
t.InsertItem(5);
t.InsertItem(3);
t.InsertItem(8);
t.InsertItem(2);
t.InsertItem(4);
t.InsertItem(6);
t.InsertItem(10);

t.transformTree();
t.Print();

}


