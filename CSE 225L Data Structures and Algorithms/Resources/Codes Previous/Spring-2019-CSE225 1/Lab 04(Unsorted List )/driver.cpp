#include<iostream>
using namespace std;
#include"UnsortedType.cpp"


int main()
{
    UnsortedType<int> List;

    for(int i=0;i<4;i++)
    {
        int item;
        cout<<"Enter integer item: "<<endl;
        cin>>item;
        List.InsertItem(item);
    }

    int temp;
    for(int i=0;i<4;i++)
    {
        List.GetNextItem(temp);
       cout<< temp<<" ";
    }

    int length = List.LengthIs();
    cout<<"\nList length is: "<<length<<endl;




    ;


    List.InsertItem(1);
    int temp2;
    for(int i=0;i<5;i++)
    {
        List.GetNextItem(temp2);
       cout<<temp2<<endl;
    }














}
