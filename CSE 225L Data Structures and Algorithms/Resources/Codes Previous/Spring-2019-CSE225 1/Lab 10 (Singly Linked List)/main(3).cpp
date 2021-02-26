#include <iostream>
#include "list.h"
#include "list.cpp"

using namespace std;

int main()
{
    SinglyLinkedList<int> *sl = new SinglyLinkedList<int>;

    int temp,pos;

    int s,r;

    while(true)
    {
        cout << "Enter number: ";
        cin >> temp;
        cout << "Enter position: ";
        cin >> pos;

        if(pos==0)
        {
            break;
        }

        sl->insertAtPosition(temp,pos);
        sl->display();
        cout << endl;
    }

    sl->reset();
    while(sl->hasNext())
    {
        cout << sl->nextItem() << " ";
        cout<<endl;
    }

    cout << "Enter number to be searched : " << endl;
    cin >> s;
    int index = sl->searchItem(s);
    sl->deleteAtPosition(index);

    cout << "Enter number to be replaced: " << endl;
    cin >> r;
    sl->insertAtPosition(r,index);


    sl->reset();
    while(sl->hasNext())
    {
        cout << sl->nextItem() << " ";
        cout<<endl;
    }



    cout << "Hello world!" << endl;
    return 0;
}
