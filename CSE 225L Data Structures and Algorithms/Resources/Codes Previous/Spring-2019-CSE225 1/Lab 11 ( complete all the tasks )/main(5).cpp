#include "list.h"
#include "list.cpp"
#include<iostream>
using namespace std;

int main ()
{
    SinglyLinkedListWithTail<char> *s1 = new SinglyLinkedListWithTail<char>;
    char a;
    int n;
    string s;

    cout<<"enter where to insert: "<<endl;
    cin>> s;
    if(s=="start")
    {
        for(int i =0;i<5;i++)
    {
        cout<< "input char: "<<endl;
        cin>> a;
        s1->insertAtStart(a);
       }
    }
    if(s=="end")
    {
        for(int i =0;i<5;i++)
        {
            cout<< " input char: "<<endl;
            cin>>a;
            s1->insertAtEnd(a);
        }
    }
    cout<<"enter char to delete: "<<endl;
    cin>> n;
    s1->deleteAtPosition(n);
    s1->display();

}
