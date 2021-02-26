#include "SinglyLL.cpp"
#include "list.cpp"

int main()
{
    SinglyLinkedListWithTail<char> obj;
    int temp;
    {char c;

    for(int i=0;i<3;i++)
    {
        cout<<"Insert at?";
        cin>>temp;
        cout<<"Value: ";
        cin>>c;
        if(temp==1)
            {
                obj.insertAtEnd(c);
            }
        else if(temp==-1)
        {

                obj.insertAtStart(c);
        }
    }}

    cout<<"Delete?";
    char c;
    cin>>c;
    int key;
    key=obj.searchItem(c);
    if(key!=0)
        obj.deleteAtPosition(key);
    else cout<<"not found"<<endl;

    return 0;
}
