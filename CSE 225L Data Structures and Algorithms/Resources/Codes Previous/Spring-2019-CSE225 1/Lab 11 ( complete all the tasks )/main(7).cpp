#include <iostream>
#include "list.h"
#include "list.cpp"

using namespace std;

int main()
{
    SinglyLinkedList<int> S;
    SinglyLinkedListWithTail<char> S1;
    int i,num,position,key, numReplace;
    int positionSearch,option;
    char ch, chdelete;
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

    cout<<"Enter 5 char values";
    for(i=0;i<5;i++)
    {
        cin>>ch;
        cout<<"Where do you want to insert?Press 1 for start or 0 for end";
        cin>>option;
        if(option==1)
            S1.insertAtStart(ch);
        else if(option==0)
            S1.insertAtEnd(ch);
        else
            cout<<"Invalid option"<<endl;
    }

    cout<<"The character list is "<<endl;
    S1.display();
    S1.deleteEnd();
    cout<<"The character list after deleting last element"<<endl;
    S1.display();

    cout<<"Enter the character you want to delete";
    cin>>chdelete;
    positionSearch=S1.searchItem(chdelete);
    if(positionSearch!=0)
    {
        S.deleteAtPosition(positionSearch);
    }
    cout<<"The character list is"<<endl;
    S1.display();
    return 0;
}

