#include"SortedType.cpp"
#include<iostream>
using namespace std;

int main()
{

    SortedType<int> arr;
    int n=arr.LengthIs();
    cout<<n<<endl;

    arr.InsertItem(5);
    arr.InsertItem(7);
    arr.InsertItem(4);
    arr.InsertItem(2);
    arr.InsertItem(1);

    int temp;
    for(int i=0;i<5;i++)
    {
        arr.GetNextItem(temp);
        cout<<temp<<" ";
    }
    cout<<endl;

    int a1 = 6;
    bool f1 = false ;
    arr.RetrieveItem(a1,f1);
    if(f1 == true)
    {
        cout<<"item is found"<<endl;
    }
    else
    {
        cout<<"Item is not found"<<endl;
    }

    int a2 = 5;
    bool f2 = false ;
    arr.RetrieveItem(a2,f2);
    if(f2 == true)
    {
        cout<<"item is found"<<endl;
    }
    else
    {
        cout<<"Item is not found"<<endl;
    }



     if(arr.IsFull() == true )
     {
         cout<<"List is full"<<endl;
     }
     else
     {
         cout<<"List is not full"<<endl;
     }

     arr.DeleteItem(1);
     arr.ResetList();
     int temp1;
    for(int i=0;i<4;i++)
    {
        arr.GetNextItem(temp1);
        cout<<temp1<<" ";
    }
        cout<<endl;
     if(arr.IsFull() == true )
     {
         cout<<"List is full"<<endl;
     }
     else
     {
         cout<<"List is not full"<<endl;
     }



}
