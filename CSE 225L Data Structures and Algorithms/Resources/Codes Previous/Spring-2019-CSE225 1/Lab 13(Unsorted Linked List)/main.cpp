#include <iostream>
#include "list2.h"
#include "list2.cpp"
#include <string>

using namespace std;

int main()
{
    UnsortedList<string> ls;
    SortedList<string> lt;
    string s[10];
    string s1;
    int n;
    cout<<"Enter the number of strings:";
    cin>>n;
    cout<<"Enter the strings:";
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        ls.insertItem(s[i]);
    }
    cout<<"The unsorted list is"<<endl;
    ls.reset();
    while(ls.hasNext())
        cout<<ls.nextItem()<<" ";
    cout<<endl;

    cout<<"Enter the string you want to delete:";
    cin>>s1;
    ls.deleteItem(s1);

    cout<<"The unsorted list is"<<endl;
    ls.reset();
    while(ls.hasNext())
        cout<<ls.nextItem()<<" ";
    cout<<endl;

    ls.reset();
    while(ls.hasNext())
        lt.insertItem(ls.nextItem());

    cout<<"The sorted list is"<<endl;
    lt.reset();
    while(lt.hasNext())
        cout<<lt.nextItem()<<" ";
    cout<<endl;
    return 0;
}
