#include <iostream>
#include "list.h"
#include "list2.h"
#include <string>

using namespace std;

int main()
{
    UnsortedList<string> ls;
    SortedList<string> lt;
    int n,i;
    string s,s1;
    cout<<"Enter the number of strings";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        ls.insertItem(s);
    }

    cout<<"Enter the string you want to delete";
    cin>>s1;
    ls.deleteItem(s1);
    ls.reset();
    while(ls.hasNext())
    {
        cout<<ls.nextItem()<<endl;
    }

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
