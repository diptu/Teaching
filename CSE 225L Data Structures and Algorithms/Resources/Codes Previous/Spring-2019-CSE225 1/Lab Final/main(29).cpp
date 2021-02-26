#include <iostream>
#include "binarysearchtree.h"
#include "binarysearchtree.cpp"
#include "quetype.h"
#include "quetype.cpp"
using namespace std;

int main()
{
    TreeType<int> *t = new TreeType<int>;
    t->InsertItem(5);
    t->InsertItem(3);
    t->InsertItem(8);
    t->InsertItem(2);
    t->InsertItem(4);
    t->InsertItem(6);
    t->InsertItem(10);

    int temp;
    bool found1;
    for(int i = 0 ; i<7 ; i++)
    {
        t->GetNextItem(temp,IN_ORDER,found1);
        cout <<temp<<endl;
    }

}

