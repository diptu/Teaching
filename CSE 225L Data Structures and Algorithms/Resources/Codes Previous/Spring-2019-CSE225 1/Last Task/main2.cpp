#include "binarysearchtree.cpp"
#include "quetype.cpp"
#include <iostream>
using namespace std;

void newtree(TreeNode<int>* tree, int *sum)
{
    if(tree==NULL)
        return;

    newtree(tree->right, sum);

    *sum=tree->info+*sum;
    tree->info=*sum;
    newtree(tree->left, sum);

}

void newTree(TreeNode<int> *tree)
{
    int sum=0;
    newtree(tree, &sum);
}

int main()
{
    struct TreeNode<int> *t=NULL;
    int i, temp;

    cout<<"Enter 7 nodes: "<<endl;
    for(i=0; i<7; i++)
    {
        cin>>temp;
        Insert(t, temp);
    }

    newTree(t);
    cout<<endl;

    cout<<"New tree: "<<endl;
    PrintTree(t);
}
