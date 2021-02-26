#include <iostream>
using namespace std;
#include "sortedtype.cpp"

int main()
{
    Sortedtype<int> obj;
    cout<<obj.LengthIs()<<endl;

    obj.InsertItem(5);obj.InsertItem(7);obj.InsertItem(4);obj.InsertItem(2);obj.InsertItem(1);
    //cout<<obj.LengthIs();
    int temp=0;
    //obj.ResetList();
    for(int i=0;i<obj.LengthIs();i++)
    {
        obj.GetNextItem(temp);
        cout<< temp << " ";
    }

    bool found=false; temp=6;
    obj.RetrieveItem(temp,found);
    if(found) cout<< "\nItem is found\n";
    else cout << "\nItem is not found\n";

    found=false; temp=5;
    obj.RetrieveItem(temp,found);
    if(found) cout<< "\nItem is found\n";
    else cout << "\nItem is not found\n";

    if(obj.IsFull())
        cout<<"\nList is full\n";
    else  cout << "\nList is not full\n";

    obj.DeleteItem(1);

    obj.ResetList();
    for(int i=0;i<obj.LengthIs();i++)
    {
        obj.GetNextItem(temp);
        cout<< temp << " ";
    }

    if(obj.IsFull())
        cout<<"\nList is full\n";
    else  cout << "\nList is not full\n";






    return 0;
}
