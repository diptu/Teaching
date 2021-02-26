#include "unsortedtype.cpp"
#include <iostream>
using namespace std;

int main()

{
    UnsortedType<int> a;

    int items;
    cout<<"Enter four items: "<<endl;
    for(int i=0;i<4;i++)
    {
        cin>>items;
        a.InsertItem(items);
    }

    cout<<endl;

    int temp;
    for(int i=0;i<4;i++)
    {
        a.GetNextItem(temp);
        cout<<temp<<endl;
    }

    cout<<endl;

    int length=a.LengthIs();
    cout<<"The length of the list: "<<length<<endl;

    cout<<endl;

    int b;
    cout<<"Insert one item: "<<endl;
    cin>>b;

    cout<<endl;

    a.InsertItem(b);
    int tem;
    for(int i=0;i<5;i++)
    {
        a.GetNextItem(tem);
        cout<<tem<<endl;
    }

    int c;

    cout<<"Enter a number to Search: "<<endl;
    cin>>c;


}
