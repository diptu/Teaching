#include "unsortedtype.cpp"
#include <iostream>
using namespace std;

int main()
{
    Unsortedtype<int> obj;
    int temp=0;
    obj.InsertItem(5); obj.InsertItem(7); obj.InsertItem(6); obj.InsertItem(9);

    for(int i=0;i<obj.LengthIs();i++)
    {

        obj.GetNextItem(temp);
        cout << temp << "  ";
    }

    cout<<endl<<obj.LengthIs()<<endl;

    obj.InsertItem(1); //cout<<endl;
    obj.ResetList();
    for(int i=0;i<obj.LengthIs();i++)
    {

        obj.GetNextItem(temp);
        cout << temp << "  ";
    }

    bool val=false; temp=4;
    obj.RetrieveItem(temp,val);
    if(val)
        cout<<"\nItem found\n";
    else cout<<"\nItem is not found\n";

    val=false;temp=5;
    obj.RetrieveItem(temp,val);
    if(val)
        cout<<"\nItem found\n";
    else cout<<"\nItem is not found\n";

    val=false;temp=9;
    obj.RetrieveItem(temp,val);
    if(val)
        cout<<"\nItem found\n";
    else cout<<"\nItem is not found\n";

    val=false;temp=10;
    obj.RetrieveItem(temp,val);
    if(val)
        cout<<"\nItem found\n";
    else cout<<"\nItem is not found\n";

    if(obj.IsFull()) cout<<"\nList is full\n";
    else cout << "\nList not full\n";

    obj.DeleteItem(5);

    if(obj.IsFull()) cout<<"\nList is full\n";
    else cout << "\nList not full\n";


    obj.DeleteItem(1);
    obj.ResetList();
    for(int i=0;i<obj.LengthIs();i++)
    {

        obj.GetNextItem(temp);
        cout << temp << "  ";
    }
    cout<<endl;


    obj.DeleteItem(6);
    obj.ResetList();
    for(int i=0;i<obj.LengthIs();i++)
    {

        obj.GetNextItem(temp);
        cout << temp << "  ";
    }





    return 0;
}
