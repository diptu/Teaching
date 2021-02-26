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

    int tmp;
    for(int i=0;i<4;i++)
    {
        List.GetNextItem(tmp);
        cout<< tmp<<" ";
    }

    int length = List.LengthIs();
    cout<<"\nLength of the list: "<<length<<endl;


    List.InsertItem(1);

    int x = 4 ;
    bool f = true ;



    List.RetrieveItem(x,f);
    if (f == true)
    {
        cout<<"Item is not found"<<endl;
    }
    else
    {
        cout<<"Item is not found"<<endl;
    }


    int y = 5 ;
    bool f1 = true ;

    List.RetrieveItem(y,f1);
    if (f1 == true)
    {
        cout<<"Item is found"<<endl;
    }
    else
    {
        cout<<"Item is not found"<<endl;
    }


    int z = 9 ;
    bool f2 = true ;

    List.RetrieveItem(z,f2);
    if (f2 == true)
    {
        cout<<"Item is found"<<endl;
    }
    else
    {
        cout<<"Item is not found"<<endl;
    }

    int p = 10 ;
    bool f3 = true ;

    List.RetrieveItem(p,f3);
    if (f3 == true)
    {
        cout<<"Item is found"<<endl;
    }
    else
    {
        cout<<"Item is not found"<<endl;
    }


    bool full = List.IsFull();
    if (full == true)
    {
        cout<<"List is full"<<endl; ;
    }
    else
    {
        cout<<"List is not full"<<endl;
    }


    List.DeleteItem(5);

    bool full1 = List.IsFull();
    if (full1 == true)
    {
        cout<<"List is full"<<endl; ;
    }
    else
    {
        cout<<"List is not full"<<endl;
    }


   List.DeleteItem(6);


}
