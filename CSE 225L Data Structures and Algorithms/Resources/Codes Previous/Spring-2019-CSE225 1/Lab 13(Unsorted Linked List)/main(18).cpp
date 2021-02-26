#include "list.cpp"
#include "list2.cpp"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    UnsortedList<string> ls;

    int n, i;
    cout<<"Enter number of strings: "<<endl;
    cin>>n;

    string temp;
    for(i=0; i<n; i++)
    {
        cout<<"Enter string "<<i+1<<":"<<endl;
        cin>>temp;
        ls.insertItem(temp);
    }

    cout<<endl;
    ls.reset();
    cout<<"Unsorted List: "<<endl;
    while(ls.hasNext())
        cout<<ls.nextItem()<<endl;

    cout<<endl;
    cout<<"Enter the string you want to delete: "<<endl;
    cin>>temp;
    ls.deleteItem(temp);

    ls.reset();
    cout<<endl;
    cout<<"Unsorted List after deleting an item: "<<endl;
    while(ls.hasNext())
        cout<<ls.nextItem()<<endl;

    SortedList<string> lt;

    ls.reset();
    while(ls.hasNext())
    {
        temp=ls.nextItem();
        lt.insertItem(temp);
    }

    cout<<endl;
    cout<<"Sorted List: "<<endl;
    lt.reset();
    while(lt.hasNext())
        cout<<lt.nextItem()<<endl;


}
