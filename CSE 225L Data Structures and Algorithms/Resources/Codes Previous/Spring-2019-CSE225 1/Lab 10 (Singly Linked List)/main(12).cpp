#include "list.cpp"

int main()
{
    SinglyLinkedList <int>*ptr;
    ptr=new SinglyLinkedList<int>;

    int num,positions;
    positions=num=-1;
    while(true)
    {
        cout<<"num: ";
        cin>>num;
        cout<<"position: ";
        cin>>positions;
        if(positions==0)
            break;
        else
        {
            ptr->insertAtPosition(num,positions);
            ptr->display();
        }
    }

    for(ptr->reset();ptr->hasNext();)
    {
        cout<< ptr->nextItem()<<endl;

    }

    //SEARCHING
    int valueToSearch;
    int valueToReplace;


    {
        cout<<"Value to Search for: ";
        cin>>valueToSearch;

        if(ptr->searchItem(valueToSearch)!=0)
        {
            cout<<"Value to replace: ";
            cin>>valueToReplace;
            ptr->insertAtPosition(valueToSearch,ptr->searchItem(valueToSearch));
        }
        else
            cout<<"Value not found\n";
    }

    return 0;
}
