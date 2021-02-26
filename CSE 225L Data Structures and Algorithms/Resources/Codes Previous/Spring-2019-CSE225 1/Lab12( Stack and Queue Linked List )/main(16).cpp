#include <iostream>
#include "stack.h";
#include "queue.h";

using namespace std;

int main()
{
    StackLL<char> st;
    QueueLL<char> qt;


    int i;
    string s;
    cout<<"string is :" <<endl;
    for(i=0;i<3;i++)
    {
        st.push(s);
        cin>>s;
    }


    string s1;
    cout<<"string is :" <<endl;
    for(i=0;i<3;i++)
    {
        qt.enqueue(s1);
        cin>>s1;
    }


}
