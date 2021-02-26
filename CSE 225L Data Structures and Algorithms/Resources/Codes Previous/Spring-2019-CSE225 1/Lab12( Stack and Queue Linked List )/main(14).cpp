#include "stack.cpp"
#include "SinglyLL.cpp"
#include "list.cpp"
#include "queue.cpp"
#include "string"

#include<iostream>
using namespace std;

int main()
{
    StackLL<char> obj1;
    QueueLL<char> obj2;

    string s1;
    cin>>s1;



    for(int i=0;i<s1.length();i++)
    {
        obj1.push(s1[i]);
        obj2.enqueue(s1[i]);
    }

    for(;!obj1.isEmpty() && !obj2.isEmpty();)
    {
        char c1,c2;
        c1=obj1.pop();
        c2=obj2.dequeue();
        if(c1!=c2)
        {
            cout<<"Not Palindrome!"<<endl;
            break;
        }
    }






    return 0;
}
