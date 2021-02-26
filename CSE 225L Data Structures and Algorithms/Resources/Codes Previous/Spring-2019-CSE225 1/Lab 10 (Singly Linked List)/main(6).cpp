#include <iostream>
#include "singlylinkedlist.cpp"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;


    SinglyLinkedList<int> *ob = new SinglyLinkedList<int>;
    int temp, pos;

    while(true)
    {
        cout<< "Number : "<<endl;
        cin>>temp;
        cout<<"position :" << endl;
        cin>>pos;

        if(pos==0)
            break;

        ob->insertAtPosition(temp,pos);
        cout<<endl;
        ob->display();
        cout<<endl;
    }
    ob->reset();
    cout<<endl<<"the list is : "<<endl;
    for(int i = 1; ob->hasNext(); i++)
    {
        cout<<ob->nextItem()<<" ";
        cout<<endl;
    }

    int si, ri;

    cout << "enter item to be searched :" << endl;
    cin >>si;
    int index = ob->searchItem(si);
    ob->deleteAtPosition(index);

    cout << "enter an item :" << endl;
    cin >> ri;
    ob->insertAtPosition(ri,index);

    ob->reset();
    cout<<endl<<"the list is: "<<endl;
    for(int i = 1; ob->hasNext(); i++)
    {
        cout<<ob->nextItem()<<" ";
        cout<<endl;
    }
}
