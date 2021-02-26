#include "queuetype.cpp"
#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter a number: "<<endl;
    int a;
    cin>>a;

    QueType<string> q(a+1);

    q.Enqueue("1");

    string t;
    cout<<"The first "<<a<<" binary numbers are: "<<endl;
    for(int i=0; i<a; i++)
    {
        q.Dequeue(t);
        cout<<t<<endl;
        q.Enqueue(t+"0");
        q.Enqueue(t+"1");
    }
}
