#include "binarysearchtree.cpp"
#include <iostream>

int main()
{
    TreeType<int>obj;
    int arr[]= {5,3,8,2,4,6,10};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++)
    {
        obj.InsertItem(arr[i]);
    }

    obj.ResetTree(IN_ORDER);


    for(int i=0; i<n; i++)
        obj.InsertGREATER(arr[i],n);

    obj.Print();


    return 0;
}
