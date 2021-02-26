#include <bits/stdc++.h>
#include "list.h"
#include "list.cpp"
#include "stack.h"
#include "stack.cpp"
#include "queue.h"
#include "queue.cpp"

using namespace std;

int main()
{
    cout << "KAWAII" << endl;

    StackLL<char> st1;
    QueueLL<char> q1;
    StackLL<char> st2;
    QueueLL<char> q2;
    StackLL<char> st3;


    cout << "Enter A String: " << endl;
    string s;
    cin >> s;
    for(int i=0;i<s.length();i++)
    {
        char x = s[i];
        st1.push(x);
        st2.push(x);
        q1.enqueue(x);
    }

    while(!st2.isEmpty())
    {
        char x = st2.top();
        st2.pop();
        st3.push(x);
    }
    int n = s.length();
    int matched = 0;
    while(!st1.isEmpty())
    {
        char m1,m2;
        m1 = st1.top();
        m2 = st3.top();
        st1.pop();
        st3.pop();
        if(m1==m2) {
            matched++;
        }
    }
    if(matched==n)
        cout << "String is Palindrome" << endl;
    else
        cout << "String is not Palindrome" << endl;

    return 0;
}

