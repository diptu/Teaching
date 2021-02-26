#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"

using namespace std;

int main()
{
    SortedType<int> S;
    int n,i,number;
    bool exist;
    S.GetNextItem(n);
    for(i=0;i<n;i++)
        cout<<"The list is "<<n<<endl;
    S.InsertItem(5);
    S.InsertItem(7);
    S.InsertItem(4);
    S.InsertItem(2);
    S.InsertItem(1);

    S.GetNextItem(n);
    for(i=0;i<n;i++)
        cout<<"The list is "<<n<<endl;

    number=6;
    S.RetrieveItem(number,exist);
    if(exist==false)
        cout<<"Item 6 is not found"<<endl;
    else
        cout<<"Item 6 is found"<<endl;

    number=5;
    S.RetrieveItem(number,exist);
    if(exist==false)
        cout<<"Item 5 is not found"<<endl;
    else
        cout<<"Item 5 is found"<<endl;

    if(S.LengthIs()==MAX_ITEMS)
        cout<<"List is full"<<endl;
    else
        cout<<"List is not full"<<endl;

    S.DeleteItem(1);
    S.GetNextItem(n);
    for(i=0;i<n;i++)
        cout<<"The list is "<<n<<endl;

    if(S.LengthIs()==MAX_ITEMS)
        cout<<"List is full"<<endl;
    else
        cout<<"List is not full"<<endl;



    return 0;
}
