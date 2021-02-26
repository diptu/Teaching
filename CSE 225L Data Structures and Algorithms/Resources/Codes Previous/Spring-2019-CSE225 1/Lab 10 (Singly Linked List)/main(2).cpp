#include "list.cpp"

int main()
{
    SinglyLinkedList<int>*ptr;
    ptr=new SinglyLinkedList<int>;

    int num=-1; int pos=-1;
    for(;pos!=0;)
    {
        cout<<"num: ";      cin>>num;
        cout<<"position: "; cin>>pos;
        if(pos==0)
            break;
        ptr->insertAtPosition(num,pos);
        ptr->display();
    }

    //DISPLAY without display()
    ptr->reset();
    while(ptr->hasNext())
    {
        cout<<ptr->nextItem()<<"\t";
    }

    int userinput=-1;
    int anotherNumber=-1;

    cout<<"\nUser Input: ";
    cin>>userinput;
    if(ptr->searchItem(userinput)!=0)
    {
        int tempPos=ptr->searchItem(userinput);
        ptr->deleteAtPosition(ptr->searchItem(userinput));

        cout<<"Replace it with: "; cin>>anotherNumber;
        ptr->insertAtPosition(anotherNumber,tempPos);
    }
    else cout<<"Doesn't exist!"<<endl;


    return 0;
}
