#include<iostream>
#include"Stack.cpp"
#include"Queue.cpp"
using namespace std;


void Reverse(int k,QueType<int> q)
{
    QueType<int> temp;

    int size1 = 0;

    while(!q.IsEmpty())
    {
        temp.Enqueue(q.Dequeue(1));
        size1++;

    }

    while(!temp.IsEmpty())
    {
        q.Enqueue(temp.Dequeue(1));

    }

    StackType<int> st;

    for(int i=0;i<k;i++)
    {
        st.Push(q.Dequeue(1));
    }

    while(!st.IsEmpty())
    {
        q.Enqueue(st.Top());
        st.Pop();
    }



    for (int i = 0; size1 - k; i++)
        {
        q.Enqueue(q.Dequeue(1));
    }


}


using namespace std;

int main()
{
    QueType<int> a (5);
    if(a.IsEmpty()==true)
    {
        cout<<"Queue is Empty"<<endl;
    }
    else
    {
        cout<<"Queue is not Empty"<<endl;
    }

    a.Enqueue(5);
    a.Enqueue(7);
    a.Enqueue(4);
    a.Enqueue(2);




}


