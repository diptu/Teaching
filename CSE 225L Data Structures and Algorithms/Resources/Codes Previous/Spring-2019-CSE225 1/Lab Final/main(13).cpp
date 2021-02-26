#include <iostream>
#include "binarysearchtree.cpp"
#include "quetype.cpp"

using namespace std;

int main()
{
    int num;
    TreeType<int> tree(7);
    QueType<int> Que(7);


    for(int i=0; i<6; i++)
    {
        cin>>num;
        tree.InsertItem(num);
    }

        tree.LengthIs();
        tree.InOrder(tree, Que);



    return 0;
}
