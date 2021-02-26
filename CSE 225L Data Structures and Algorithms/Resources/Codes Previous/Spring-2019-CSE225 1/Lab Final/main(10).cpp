#include "binarysearchtree.cpp"
#include "quetype.cpp"
#include <iostream>
using namespace std;

int main()
{
    TreeType<int> t;
    int i, temp;

    for(i=0; i<7; i++)
    {
        cin>>temp;
        t.InsertItem(temp);
    }

    QueType<int> q;

    bool f;
    int n=0, n1=0, n2=0, n3=0, n4=0, n5=0, n6=0;
    t.ResetTree(IN_ORDER);

    for(i=0; i<7; i++)
    {
        t.GetNextItem(temp, IN_ORDER, f);
        n+=temp;
    }

    q.Enqueue(n);

   /* t.ResetTree(IN_ORDER);
    t.GetNextItem(temp, IN_ORDER, f);
    t.DeleteItem(temp);

    t.ResetTree(IN_ORDER);*/
    for(i=1; i<6; i++)
    {
        t.GetNextItem(temp, IN_ORDER, f);
        n1+=temp;
    }

    q.Enqueue(n1);

    /*t.ResetTree(IN_ORDER);
    t.GetNextItem(temp, IN_ORDER, f);
    t.DeleteItem(temp);

    t.ResetTree(IN_ORDER);
    for(i=0; i<5; i++)
    {
        t.GetNextItem(temp, IN_ORDER, f);
        n2+=temp;
    }

    q.Enqueue(n2);

     t.ResetTree(IN_ORDER);
    t.GetNextItem(temp, IN_ORDER, f);
    t.DeleteItem(temp);

    t.ResetTree(IN_ORDER);
    for(i=0; i<4; i++)
    {
        t.GetNextItem(temp, IN_ORDER, f);
        n3+=temp;
    }

    q.Enqueue(n3);

    t.ResetTree(IN_ORDER);
    t.GetNextItem(temp, IN_ORDER, f);
    t.DeleteItem(temp);

    t.ResetTree(IN_ORDER);
    for(i=0; i<3; i++)
    {
        t.GetNextItem(temp, IN_ORDER, f);
        n4+=temp;
    }

    q.Enqueue(n4);

     t.ResetTree(IN_ORDER);
    t.GetNextItem(temp, IN_ORDER, f);
    t.DeleteItem(temp);

    t.ResetTree(IN_ORDER);
    for(i=0; i<2; i++)
    {
        t.GetNextItem(temp, IN_ORDER, f);
        n5+=temp;
    }

    q.Enqueue(n5);

     t.ResetTree(IN_ORDER);
    t.GetNextItem(temp, IN_ORDER, f);
    t.DeleteItem(temp);

    t.ResetTree(IN_ORDER);
    for(i=0; i<1; i++)
    {
        t.GetNextItem(temp, IN_ORDER, f);
        n2+=temp;
    }

    q.Enqueue(n6);

    for(i=0; i<7; i++)
    {
        q.Dequeue(temp);
        cout<<temp;
    }*/



}
