#include <iostream>
#include "UnsortedType.cpp"
using namespace std;

int main()
{
    UnsortedType<int> List;


    List.InsertItem(5);
    List.InsertItem(7);
    List.InsertItem(6);
    List.InsertItem(9);

    int temp;
    for(int i=0;i<4;i++)
    {
        List.GetNextItem(temp);
        cout<< temp<<" ";
    }


    int length = List.LengthIs();
    cout<<"\nList length is: "<<length<<endl;

    List.ResetList();

    List.InsertItem(1);
    int tmp;
    for(int i=0;i<5;i++)
    {
        List.GetNextItem(tmp);
        cout<<tmp<<" ";

    }
    cout<<endl;


    int value = 4 ;
    bool found = true ;
    List.RetrieveItem(value,found);
    if (found == true)
    {
        cout<<"Item is not found"<<endl;
    }
    else
    {
        cout<<"Item not found"<<endl;
    }


    int value1 = 5 ;
    bool found1 = true ;
    List.RetrieveItem(value1,found1);
    if (found1 == true)
    {
        cout<<"Item is found"<<endl;
    }
    else
    {
        cout<<"Item not found"<<endl;
    }


    int value2 = 9 ;
    bool found2 = true ;
    List.RetrieveItem(value2,found2);
    if (found2 == true)
    {
        cout<<"Item  is found"<<endl;
    }
    else
    {
        cout<<"Item not found"<<endl;
    }





    int value3 = 10 ;
    bool found3 = true ;
    List.RetrieveItem(value3,found3);
    if (found3 == true)
    {
        cout<<"Item  is found"<<endl;
    }
    else
    {
        cout<<"Item not found"<<endl;
    }


    bool full = List.IsFull();
    if (full == true)
    {
        cout<<"List is full"<<endl; ;
    }
    else
    {
        cout<<"List not full"<<endl;
    }


    List.DeleteItem(5);


    bool full1 = List.IsFull();
    if (full1 == true)
    {
        cout<<"List is full"<<endl; ;
    }
    else
    {
        cout<<"List not full"<<endl;
    }


    List.DeleteItem(1);
    List.DeleteItem(6);
    List.ResetList();




}