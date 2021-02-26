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
    cout<<endl;

    found=false;
    obj.ResetTree(PRE_ORDER);
    while(!found)
    {
        obj.GetNextItem(temp,PRE_ORDER,found);
        cout<<temp<<" ";
    }

    cout<<endl;

    found=false;
    obj.ResetTree(POST_ORDER);
    while(!found)
    {
        obj.GetNextItem(temp,POST_ORDER,found);
        cout<<temp<<" ";
    }

    //lasttask
    cout<<endl;
    TreeType<int>obj2;

    while(obj2.LengthIs()<10)
    {
        cin>>temp;
        obj2.InsertItem(temp);
    }

    obj2.ResetTree(IN_ORDER);
    int l=obj2.LengthIs();
    int ARR[l];

    found=false; int i=0;
    while(!found)
    {
        obj2.GetNextItem(temp,IN_ORDER,found);
        ARR[i]=temp;
        i++;
    }
    TreeType<int>obj3;

    return 0;
}
