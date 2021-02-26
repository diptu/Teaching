#include <iostream>
using namespace std;
#include "sortedtype.cpp"
#include "timeStamp.h"

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
    else  cout << "\nList is not full\n\n";


    Sortedtype<timeStamp> obj2;
    timeStamp temp_obj1(15,34,23);
    timeStamp temp_obj2(13,13,2);
    timeStamp temp_obj3(43,45,12);
    timeStamp temp_obj4(25,36,17);
    timeStamp temp_obj5(52,2,20);

    obj2.InsertItem(temp_obj1); obj2.InsertItem(temp_obj2); obj2.InsertItem(temp_obj3);
    obj2.InsertItem(temp_obj4); obj2.InsertItem(temp_obj5);

    obj2.DeleteItem(temp_obj4);


    timeStamp temp_obj;
    for(int i=0;i<obj2.LengthIs();i++)
    {
        obj2.GetNextItem(temp_obj);
        temp_obj.PRINTALL();
        //cout<<endl;
    }


    return 0;
}
