#include<iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;

int main()
{
    int n,i,number;
    bool exist;
    UnsortedType <int> U;
    U.InsertItem(5);
    U.InsertItem(7);
    U.InsertItem(6);
    U.InsertItem(9);


    for(i=0;i<U.LengthIs();i++)
    {
      U.GetNextItem(n);
      cout<<n<<endl;
    }

    cout<<"The length of the array is:"<<U.LengthIs()<<endl;

    U.InsertItem(1);
    U.ResetList();
    for(i=0;i<U.LengthIs();i++)
    {
        U.GetNextItem(n);
        cout<<n<<endl;
    }

    number=4;
    U.RetrieveItem(number, exist);
    if(exist==true)
        cout<<"Item 4 is found"<<endl;
    else
        cout<<"Item 4 is not found"<<endl;

    number=5;
    U.RetrieveItem(number, exist);
    if(exist==true)
        cout<<"Item 5 is found"<<endl;
    else
        cout<<"Item 5 is not found"<<endl;

    number=9;
    U.RetrieveItem(number, exist);
    if(exist==true)
        cout<<"Item 9 is found"<<endl;
    else
        cout<<"Item 9 is not found"<<endl;

    number=10;
    U.RetrieveItem(number, exist);
    if(exist==true)
        cout<<"Item 10 is found"<<endl;
    else
        cout<<"Item 10 is not found"<<endl;

    if(U.IsFull()==true)
        cout<<"List is full"<<endl;
    else
        cout<<"List is not full"<<endl;

    U.DeleteItem(5);
    if(U.IsFull()==true)
        cout<<"List is full"<<endl;
    else
        cout<<"List is not full"<<endl;

    U.DeleteItem(1);
    U.ResetList();
    for(i=0;i<U.LengthIs();i++)
    {
        U.GetNextItem(n);
        cout<<n<<endl;
    }

    U.DeleteItem(6);
    U.ResetList();
    for(i=0;i<U.LengthIs();i++)
    {
        U.GetNextItem(n);
        cout<<n<<endl;
    }

return 0;


}
