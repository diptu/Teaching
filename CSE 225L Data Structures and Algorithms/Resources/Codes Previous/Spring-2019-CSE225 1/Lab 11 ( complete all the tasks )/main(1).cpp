#include <iostream>
#include "list.h"
#include "list.cpp"

using namespace std;

int main()
{
    SinglyLinkedListWithTail<char> St;
    int i,num,posSearch;
    char ch,chDelete;
    cout<<"Enter 5 character values:";
    for(i=0;i<5;i++)
    {
        cin>>ch;
        cout<<"Where do you want to insert it? Press 1 for insertAtStart and 0 for insertAtEnd";
        cin>>num;
        if(num==0)
            St.insertAtEnd(ch);
        else if(num==1)
            St.insertAtStart(ch);
        else
            cout<<"Invalid input"<<endl;
    }

    cout<<"The list is"<<endl;
    St.display();

    St.deleteAtEnd();
    cout<<"List after deleting last element"<<endl;
    St.display();

    cout<<"Enter the character you want to delete:";
    cin>>chDelete;
    posSearch=St.searchItem(chDelete);
    if(posSearch!=0)
    {
        St.deleteAtPosition(posSearch);
    }
    else
        cout<<"Character not found"<<endl;

    cout<<"The list is"<<endl;
    St.display();
    return 0;
}
