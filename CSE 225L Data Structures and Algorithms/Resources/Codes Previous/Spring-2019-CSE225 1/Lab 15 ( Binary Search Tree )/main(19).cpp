#include "binarysearchtree.cpp"


int main()
{
    TreeType<int>obj;
    if(obj.IsEmpty())
        cout<<"Tree is empty"<<endl;
    else cout<<"Tree is not empty"<<endl;
    while(obj.LengthIs()<10)
    {
        int temp; cin>>temp;
        obj.InsertItem(temp);
    }

    if(obj.IsEmpty())
        cout<<"Tree is empty"<<endl;
    else cout<<"Tree is not empty"<<endl;

    cout<<obj.LengthIs()<<endl;

    int temp=9; bool found;
    obj.RetrieveItem(temp,found);

    if(found)
    {
        cout<<"Item is found"<<endl;
    }
    else cout<<"Item NOT found"<<endl;

    temp=13; found=false;
    obj.RetrieveItem(temp,found);

    if(found)
    {
        cout<<"Item is found"<<endl;
    }
    else cout<<"Item NOT found"<<endl;

    obj.Print();
    obj.Print();

    return 0;
}
