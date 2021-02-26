#include <iostream>
#include"binarysearchtree.cpp"
using namespace std;

int main()
{
    TreeType<int> t1;
    t1.InsertItem(5);
    if(t1.IsEmpty())
        cout<<"Tree is Empty"<<endl;
    else
        cout<<"Tree is not Empty"<<endl;
    return 0;
}
