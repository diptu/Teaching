#include<bits/stdc++.h>
#include"binarysearchtree.h"
#include"binarysearchtree.cpp"

using namespace std;

int main()
{
    TreeType<int>bst;

    bst.InsertItem(5);
    bst.InsertItem(3);
    bst.InsertItem(8);
    bst.InsertItem(2);
    bst.InsertItem(4);
    bst.InsertItem(6);
    bst.InsertItem(10);








    bst.ResetTree(IN_ORDER);

    int len = bst.LengthIs();

    int a[len+1];
    int i=0;

    int sum = 0;
    int x;
    bool finish = false;
    while(!finish)
    {
        bst.GetNextItem(x,IN_ORDER,finish);
        cout << x << " " ;
        sum += x;
        a[i] = x;
        i++;
    }
    cout << endl;
    //cout << sum << endl;



    QueType<int>q;

    for(int i=0;i<len;i++)
    {   int sum = 0;
        for(int j=i;j<len;j++) {
            sum += a[j];
        }
        q.Enqueue(sum);
    }

    while(!q.IsEmpty())
    {
        int x;
        q.Dequeue(x);
        cout << x << " ";
    }

    cout << endl;

    return 0;
}
