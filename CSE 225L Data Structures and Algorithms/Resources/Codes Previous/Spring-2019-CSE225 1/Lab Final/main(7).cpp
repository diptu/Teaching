#include "binarysearchtree.cpp"

#include <iostream>
using namespace std;


int main()
{
    TreeType<int>obj;
    int a[]={5,3,8,2,4,6,10};
    for(int i=0;i<7;i++)
    {
        obj.InsertItem(a[i]);
    }

    TreeType<int>sumGREATER;

    for(int i=0;i<7;i++)
    {obj.ResetTree(IN_ORDER);

    int TOtalsum=obj.SumOf(IN_ORDER);
    obj.ResetTree(IN_ORDER);
    int ab=obj.sumofLESS(a[i]);
    sumGREATER.InsertItem(TOtalsum-ab);
    }

    sumGREATER.Print();







    return 0;
}
