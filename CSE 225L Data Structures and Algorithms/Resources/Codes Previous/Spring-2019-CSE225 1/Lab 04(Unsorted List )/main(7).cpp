#include <iostream>
#include "UnsortedType.cpp"
using namespace std;

int main()
{
    UnsortedType<int> List;

    int items;
    cout<<"Enter four items: "<<endl;
    for(int i=0;i<4;i++)
    {
        cin>>items;
        List.InsertItem(items);
    }

    cout<<endl;

    int temp;
    for(int i=0;i<4;i++)
    {
        List.GetNextItem(temp);
        cout<< temp<<" ";
    }

    int length = List.LengthIs();
    cout<<"\nList length is: "<<length<<endl;


    List.InsertItem(1);

    int v = 4 ;
    bool f = true ;


    List.RetrieveItem(v,f);
    if (f == true)
    {
        cout<<"Item is not found"<<endl;
    }
    else
    {
        cout<<"Item not found"<<endl;
    }


    int v1 = 5 ;
    bool f1 = true ;

    List.RetrieveItem(v1,f1);
    if (f1 == true)
    {
        cout<<"Item is found"<<endl;
    }
    else
    {
        cout<<"Item not found"<<endl;
    }


    int v2 = 9 ;
    bool f2 = true ;

    List.RetrieveItem(v2,f2);
    if (f2 == true)
    {
        cout<<"Item  is found"<<endl;
    }
    else
    {
        cout<<"Item not found"<<endl;
    }





    int v3 = 10 ;
    bool f3 = true ;

    List.RetrieveItem(v3,f3);
    if (f3 == true)
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


   List.DeleteItem(6);
}
