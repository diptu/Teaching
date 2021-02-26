#include <iostream>
#include"sortedtype.cpp"
using namespace std;

int main()
{
    SortedType<int> List;

    int length = List.LengthIs();
    cout<<length<<endl;

    List.InsertItem(5);
    List.InsertItem(7);
    List.InsertItem(4);
    List.InsertItem(2);
    List.InsertItem(1);

    int temp;
    for(int i=0;i<5;i++)
    {
        List.GetNextItem(temp);
        cout<< temp<<" ";
    }
    cout<<endl;
    int a=6;
    bool b=false;

    List.RetrieveItem(a,b);
    if(b==true)
    {
        cout<<"Item is found"<<endl;
    }
    else
    {
        cout<<"Item is not found"<<endl;
    }

    cout<<endl;

    int c=5;
    bool d=false;

    List.RetrieveItem(c,d);
    if(d==true)
    {
        cout<<"Item is found"<<endl;
    }
    else
    {
        cout<<"Item is not found"<<endl;
    }

    cout<<endl;

    bool e=List.IsFull();
    if(e=true)
    {
        cout<<"List is full"<<endl;
    }
    else
    {
        cout<<"List is not full"<<endl;
    }

    List.DeleteItem(1);
    List.ResetList();
    int temp1;
    for(int i=0;i<4;i++)
    {
        List.GetNextItem(temp1);
        cout<< temp1<<" ";
    }
    cout<<endl;

    bool f=List.IsFull();
    if(f=false)
    {
        cout<<"List is full"<<endl;
    }
    else
    {
        cout<<"List is not full"<<endl;
    }

}
