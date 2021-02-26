#include <iostream>
#include "list.h"
#include "list.cpp"

using namespace std;

int main()
{
    SinglyLinkedList<int> S;
    int num,position,key, numReplace;
    int positionSearch;
    cout<<"Enter the numbers and their position";
    while(position!=0)
    {
        cin>>num>>position;
        S.insertAtPosition(num,position);
        cout<<"The list is"<<endl;
        S.display();
    }

    cout<<"The list after insertion is "<<endl;
    S.reset();
    while(S.hasNext())
    {
        cout<<S.nextItem()<<" ";
    }
    cout<<endl;
    cout<<"Enter the number you want to search";
    cin>>key;
    positionSearch=S.searchItem(key);
    if(positionSearch!=0)
    {
        S.deleteAtPosition(positionSearch);
        cout<<"Enter the number you want to replace with";
        cin>>numReplace;
        S.insertAtPosition(numReplace,positionSearch);
    }
    cout<<"The list is"<<endl;
    S.display();
    return 0;
}

