#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"

using namespace std;

int main()
{
    SortedType<int> S;
    int n,i,number;
    bool exist;

    cout<<"The length of the list is: "<<S.LengthIs()<<endl;
    S.InsertItem(5);
    S.InsertItem(7);
    S.InsertItem(4);
    S.InsertItem(2);
    S.InsertItem(1);

    for(i=0;i<S.LengthIs();i++)
    {
        S.GetNextItem(n);
        cout<<"The list is "<<n<<endl;
    }
    number=6;
    S.RetrieveItem(number,exist);
    if(exist==true)
        cout<<"Item 6 is found"<<endl;
    else
        cout<<"Item 6 is not found"<<endl;

    number=5;
    S.RetrieveItem(number,exist);
    if(exist==true)
        cout<<"Item 5 is found"<<endl;
    else
        cout<<"Item 5 is not found"<<endl;

    if(S.IsFull()==true)
        cout<<"List is full"<<endl;
    else
        cout<<"List is not full"<<endl;

    S.DeleteItem(1);
    S.ResetList();
    for(i=0;i<S.LengthIs();i++)
    {
        S.GetNextItem(n);
        cout<<"The list is "<<n<<endl;
    }

    if(S.IsFull()==true)
        cout<<"List is full"<<endl;
    else
        cout<<"List is not full"<<endl;

    return 0;


}
