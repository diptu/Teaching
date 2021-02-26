#include <iostream>
#include"list.cpp"
#include"list2.cpp"
using namespace std;

int main()
{
    UnsortedList<char> ls;
    char s;
    int n;

    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>s;
        ls.insertItem(s);
    }

    for(int i=0; i<1; i++)
    {
        cin>>s;
        ls.insertItem(s);
    }

    cout<<"Enter item to delete: "<<endl;
    for(int i=0; i<1; i++)
    {
        cin>>s;
        ls.deleteItem(s);
    }

    return 0;
}
