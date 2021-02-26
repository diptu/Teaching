#include"bst.h"
#include"bst.cpp"

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
   int  x = 13;



    bst.ResetTree(IN_ORDER);
    bst.ResetTree(PRE_ORDER);
    bst.ResetTree(POST_ORDER);

    bool finish = false;
    while(!finish)
    {
        bst.GetNextItem(x,IN_ORDER,finish);
        cout << x << " " ;
    }
    cout << endl;

    finish = false;
    while(!finish)
    {
        bst.GetNextItem(x,PRE_ORDER,finish);
        cout << x << " " ;
    }
    cout << endl;

    finish = false;
    while(!finish)
    {
        bst.GetNextItem(x,POST_ORDER,finish);
        cout << x << " " ;
    }
    cout << endl;

    return 0;
}

