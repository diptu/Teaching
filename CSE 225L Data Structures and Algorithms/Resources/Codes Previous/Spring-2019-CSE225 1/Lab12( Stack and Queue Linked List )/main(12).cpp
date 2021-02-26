#include "stack.h"
#include "queue.h"
#include "list.h"
#include <iostream>

using namespace std;

int main()
{
    StackLL<char> S;
    QueueLL<char> Q;
    char String[100];
    int i;
    bool palin=false;
    char chs, chq;

    cout<<"Enter a string";
    cin>>String;

    for(i=0; String[i]!=NULL ;i++)
    {
       S.push(String[i]);
       Q.enqueue(String[i]);
    }

    while(!S.isEmpty() && !Q.isEmpty())
    {
        chs=S.top();
        chq=Q.frontItem();
        if(chs==chq)
        {
            S.pop();
            Q.dequeue();
            palin=true;
        }

        else
        {
            palin=false;
        }
    }

    if(palin==true)
        cout<<"It is a palindrome"<<endl;
    else
        cout<<"It is not a palindrome"<<endl;
    return 0;
}
