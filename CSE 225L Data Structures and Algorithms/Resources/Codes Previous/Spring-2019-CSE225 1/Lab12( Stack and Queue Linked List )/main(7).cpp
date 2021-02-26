#include "queue.cpp"
#include "stack.cpp"
#include "list.cpp"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    StackLL<char> s;
    QueueLL<char> q;

    string str;
    cout<<"Enter a string: "<<endl;
    cin>>str;

    int l=str.length();
    int i;
    for(i=0; i<l; i++)
    {
        s.push(str[i]);
        q.enqueue(str[i]);
    }

    char q1, s1;
    while(!q.isEmpty() && !s.isEmpty())
    {
        q1=q.dequeue();
        s1=s.pop();

        if(q1==s1)
            continue;
        else
            break;
    }

    if(q1==s1)
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;
    cout<<endl;

    //TASK2

    StackLL<char> sl;
    QueueLL<char> ql;
    string str1, str2;

    cout<<"Enter a string: "<<endl;
    cin>>str1;
    int l1=str1.length();
    for(i=0; i<l1; i++)
        sl.push(str1[i]);

    cout<<"Enter another string: "<<endl;
    cin>>str2;
    int l2=str2.length();
    for(i=0; i<l2; i++)
        ql.enqueue(str2[i]);

    char stackpop, queuepop;
    while(!sl.isEmpty() && !ql.isEmpty())
    {
        stackpop=sl.pop();
        queuepop=ql.dequeue();

        if(stackpop==queuepop)
            continue;
        else
            break;
    }

    if(stackpop==queuepop)
        cout<<"Reverse"<<endl;
    else
        cout<<"Not reverse"<<endl;
}
