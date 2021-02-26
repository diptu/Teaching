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

    while(q.isEmpty() && s.isEmpty())
    {
        char q1=q.dequeue();
        char s1=s.pop();

        if(q1==s1)
            continue;
        else
    }
}
