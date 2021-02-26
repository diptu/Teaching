#include <iostream>
#include "stack.h"
#include "queue.h"
#include "stack.cpp"
#include "queue.cpp"


using namespace std;

int main()
{
    StackLL<char> sl;
    QueueLL<char> sq;
    char s[100];
    char string1[100];
    char string2[100];
    int i;
    bool isPalindrome, isReverse;

    cout<<"Enter a string:";
    cin>>s;

    for(i=0;s[i];i++)
    {
        sl.Push(s[i]);
        sq.enqueue(s[i]);
    }
    while(!sl.isEmpty() && !sq.isEmpty())
    {
        if(sl.top()==sq.frontItem())
        {
            isPalindrome=true;
            sl.Pop();
            sq.dequeue();
        }
        else
        {
           isPalindrome=false;
           break;
        }
    }

    if(isPalindrome==false)
        cout<<"The string is not a palindrome"<<endl;
    else
        cout<<"The string is a palindrome"<<endl;

    cout<<"Enter string 1:";
    cin>>string1;
    for(i=0;string1[i];i++)
    {
        sl.Push(string1[i]);
    }
    cout<<"Enter string 2:";
    cin>>string2;
    for(i=0;string2[i];i++)
    {
        sq.enqueue(string2[i]);
    }

    while(!sl.isEmpty() && !sq.isEmpty())
    {
        if(sl.Pop()==sq.dequeue())
        {
            isReverse=true;

        }
        else
        {
            isReverse=false;
            break;
        }
    }
    if(isReverse==true)
        cout<<string1<<" is the reverse of "<<string2<<endl;
    else
        cout<<string1<<" is not the reverse of "<<string2<<endl;
    return 0;
}
