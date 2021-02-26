#include "stack.cpp"
#include "SinglyLL.cpp"
#include "list.cpp"
#include "queue.cpp"
#include "string"

#include<iostream>
using namespace std;

int main()
{
    //Task1
    StackLL<char> obj1;
    QueueLL<char> obj2;

    string s1;
    cin>>s1;



    for(int i=0;i<s1.length();i++)
    {
        obj1.push(s1[i]);
        obj2.enqueue(s1[i]);
    }

    bool palindrome=false;
    for(;!obj1.isEmpty() && !obj2.isEmpty();)
    {
        char c1,c2;
        c1=obj1.pop();
        c2=obj2.dequeue();
        if(c1!=c2)
        {
            palindrome=false;
            break;
        }
        else palindrome=true;
    }
    if(palindrome)
        cout<<"Palindrome"<<endl;
    else cout<<"Not Palindrome"<<endl;

    //Task2
    StackLL<char>st; QueueLL<char>que;
    string str1,str2;
    cout<<"string1: ";
    cin>>str1;
    cout<<"string2: ";
    cin>>str2;

    for(int i=0;i<str1.length();i++)
    {
        st.push(str1[i]);
    }

    for(int i=0;i<str2.length();i++)
    {
        que.enqueue(str2[i]);
    }

    bool isReverse=false;
    if(str1.length()==str2.length())
    for(; (!st.isEmpty() && !que.isEmpty()) ;)
    {
        char c1,c2;
        c1=st.pop();
        c2=que.dequeue();
        if(c1!=c2)
        {
            isReverse=false;
            break;
        }
        else
            isReverse=true;
    }
    if(isReverse)
        cout<<"Reversed strings"<<endl;
    else cout<<"Strings are Not Reversed"<<endl;



    return 0;
}
