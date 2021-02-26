#include <iostream>
#include <string>
#include "QueType.cpp"
using  namespace std ;

void decimalToBinary(int n)
{
    QueType<string> q;

    q.enQueue("1");
    int i=1;
    string s1 ;
    while (i++<=n)
    {
        q.deQueue(s1);
        cout<<s1<<endl;

        string s2 = s1;

        q.enQueue(s1.append("0"));
        q.enQueue(s2.append("1"));
    }
}


int main()
{
    QueType<int> q(5);

    if(q.isEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Queue is not empty"<<endl;
    }

    q.enQueue(5);
    q.enQueue(7);
    q.enQueue(4);
    q.enQueue(2);

    if(q.isEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Queue is not empty"<<endl;
    }

    if(q.isfull())
    {
        cout<<"Queue is full"<<endl;
    }
    else
    {
        cout<<"Queue is not full"<<endl;
    }

    q.enQueue(6);

    QueType<int> q1;
    int temp;

    while(q.isEmpty() != true)
    {
        q.deQueue(temp);
        cout<<temp<<" ";
        q1.enQueue(temp);
    }
    cout<<endl;

    while(q1.isEmpty() != true)
    {
        q1.deQueue(temp);
        q.enQueue(temp);
    }





    if(q.isfull())
    {
        cout<<"Queue is full"<<endl;
    }
    else
    {
        cout<<"Queue is not full"<<endl;
    }


    q.enQueue(8);



    int n;
    q.deQueue(n);
    q.deQueue(n);



    QueType<int> q2;
    int temp1;




    while(q.isEmpty() != true)
    {
        q.deQueue(temp1);
        cout<<temp1<<" ";
        q2.enQueue(temp1);
    }
    cout<<endl;

    while(q2.isEmpty() != true)
    {
        q2.deQueue(temp1);
        q.enQueue(temp1);
    }


    q.deQueue(n);
    q.deQueue(n);
    q.deQueue(n);

    if(q.isEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Queue is not empty"<<endl;
    }

    q.deQueue(n);



    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    decimalToBinary(num);


}