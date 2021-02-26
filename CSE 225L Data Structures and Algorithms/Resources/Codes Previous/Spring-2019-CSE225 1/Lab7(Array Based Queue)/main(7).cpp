
#include "quetype.h"
#include "quetype.cpp"
#include <iostream>
using namespace std;

int main()
{
    QueType<int> que(5);
    QueType<int> que2(5);

    if(que.IsEmpty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Queue is not Empty" << endl;
    }

    try
    {
        que.Enqueue(5);
        que.Enqueue(7);
        que.Enqueue(4);
        que.Enqueue(2);
    }
    catch(FullQueue())
    {
        cout << "Queue is full" << endl;
    }


    if(que.IsEmpty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Queue is not Empty" << endl;
    }

    if(que.IsFull())
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        cout << "Queue is not full" << endl;
    }
    try
    {
        que.Enqueue(6);
    }
    catch(FullQueue())
    {
        cout << "Queue is full" << endl;
    }

    try
    {
        que2.Enqueue(5);
        que2.Enqueue(7);
        que2.Enqueue(4);
        que2.Enqueue(2);
        que2.Enqueue(6);
    }
    catch(FullQueue())
    {
        cout << "Queue is full" << endl;
    }

    int temp;

    for(int i = 0 ; i<5 ; i++)
    {
         que.Dequeue(temp);
         cout << " " << temp;
    }


    cout << endl;

    if(que2.IsFull())
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        cout << "Queue is not full" << endl;
    }



    int temp2;
    int temp3;
    int temp4;

    que2.Dequeue(temp2);
    que2.Dequeue(temp3);




    for(int i = 0 ; i<4 ; i++)
    {
         que2.Dequeue(temp4);
         cout << " " << temp4;
    }
     cout << endl;










    cout << "Hello world!" << endl;
    return 0;
}
