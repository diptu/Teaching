#include "list.cpp"
#include <iostream>
using namespace std;

int main()
{
    SinglyLinkedListWithTail<char> obj;
    char temp, choice;

    cout<<"<Enter 1 to add at start and 2 to add at end>"<<endl;
    cout<<"<Enter 0 to stop adding to your list>"<<endl;
    cout<<endl;

    cout<<"Enter your characters:"<<endl;
    while(true)
    {
        cout<<"<Enter 1 to add at start and 2 to add at end>"<<endl;
        cin>>choice;
        if(choice=='1')
        {
            cin>>temp;
            obj.insertAtStart(temp);
        }
        else if(choice=='2')
        {
            cin>>temp;
            obj.insertAtEnd(temp);
        }
        else if(choice=='0')
            break;
        else
            cout<<"Invalid choice"<<endl;
    }
    cout<<endl;

    cout<<"Your list is:"<<endl;
    obj.display();
    cout<<endl;

    obj.deleteEnd();
    cout<<"Your list after deleting the last item is: "<<endl;
    obj.display();
}
