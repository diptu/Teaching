#include <iostream>
#include "binarysearchtree.h"
#include "binarysearchtree.cpp"

using namespace std;

int main()
{
    TreeType<int> T;
    int A[17];
    int i=0;
    int item;
    bool finished;
    T.InsertItem(5);
    T.InsertItem(3);
    T.InsertItem(8);
    T.InsertItem(2);
    T.InsertItem(4);
    T.InsertItem(6);
    T.InsertItem(10);

    T.ResetTree(IN_ORDER);
    while(i<T.LengthIs())
    {
        T.GetNextItem(item,IN_ORDER,finished);
        A[i]=item;
        i++;
    }
    for(int i=6;i>=0;i--)
    {
        A[i-1]=A[i]+A[i-1];
    }
    for(int i=0;i<7;i++)
        cout<<A[i]<<" ";
    return 0;
}
