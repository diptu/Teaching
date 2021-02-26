#include "list2.cpp"
#include "list.cpp"
#include "string"


int main()
{
    UnsortedList<string>ls;
    int n; string temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"String "<<i+1<<":";
        cin>>temp;
        ls.insertItem(temp);
    }
    cout<<endl<<"delete?";
    cin>>temp;
    ls.deleteItem(temp);

/*    ls.reset();
    while(ls.hasNext())
    {
        cout<<ls.nextItem()<<endl;
    }
*/

    SortedList<string>lt;
    ls.reset();
    while(ls.hasNext())
    {
        lt.insertItem(ls.nextItem());
    }

    lt.reset();
    while(lt.hasNext())
    {
        cout<<lt.nextItem()<<endl;
    }



    return 0;
}
