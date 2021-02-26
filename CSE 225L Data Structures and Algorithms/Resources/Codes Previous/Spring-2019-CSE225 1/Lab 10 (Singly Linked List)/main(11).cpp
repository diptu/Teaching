#include "list.cpp"
#include <iostream>
using namespace std;

int main()
{
    SinglyLinkedList<int> *ls=new SinglyLinkedList<int>;

    int temp, pos;

    while(true)
    {
        cout<<"Number: "<<endl;
        cin>>temp;
        cout<<"Position: "<<endl;
        cin>>pos;

        if(pos==0)
            break;

        ls->insertAtPosition(temp, pos);
        cout<<endl;
        ls->display();
        cout<<endl;
    }

    ls->reset();
    cout<<endl<<"The list is: "<<endl;
    for(int i=1; ls->hasNext(); i++)
    {
        cout<<ls->nextItem()<<" ";
        cout<<endl;
    }

    int si, ri;

    cout<<"Enter item to be searched: "<<endl;
    cin>>si;
    int index=ls->searchItem(si);
    ls->deleteAtPosition(index);

    cout<<"Enter an item: "<<endl;
    cin>>ri;
    ls->insertAtPosition(ri, index);

    ls->reset();
    cout<<endl<<"The list is: "<<endl;
    for(int i=1; ls->hasNext(); i++)
    {
        cout<<ls->nextItem()<<" ";
        cout<<endl;
    }
}
