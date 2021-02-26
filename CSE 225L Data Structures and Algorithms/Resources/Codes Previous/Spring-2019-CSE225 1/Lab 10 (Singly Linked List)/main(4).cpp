#include "list.cpp"
#include "list.h"
#include <iostream>
using namespace std;

int main()
{
    SinglyLinkedList<int> *s = new SinglyLinkedList<int>;
    int temp, pos;

    while(true)
    {
        cout<< "Number : "<<endl;
        cin>>temp;
        cout<<"position :" << endl;
        cin>>pos;

        if(pos==0)
            break;

        s->insertAtPosition(temp,pos);
        cout<<endl;
        s->display();
        cout<<endl;
    }
    s->reset();
    cout<<endl<<"the list is : "<<endl;
    for(int i = 1; s->hasNext(); i++)  // while(s->hasNext())
    {
        cout<<s->nextItem()<<" ";

    }

    int a, b;

    cout << "search items :" << endl;
    cin >>a;
    int index = s->searchItem(a);
    s->deleteAtPosition(index);

    cout << "enter an item :" << endl;
    cin >> b;
    s->insertAtPosition(b,index);

    s->reset();
    cout<<endl<<"the list is: "<<endl;
    while(s->hasNext())
    {
        cout<<s->nextItem()<<" ";
        cout<<endl;
    }
}
