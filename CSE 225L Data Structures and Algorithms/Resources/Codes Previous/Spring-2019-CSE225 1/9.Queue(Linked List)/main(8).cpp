#include "quetype.cpp"
#include <iostream>
using namespace std;


int main()
{
    QueType<int>obj;

    if(obj.IsEmpty())
        cout<< "queue is empty\n";
    else cout<< "queue is not empty\n";

    obj.Enqueue(5);
    obj.Enqueue(7);
    obj.Enqueue(4);
    obj.Enqueue(2);



    if(obj.IsEmpty())
        cout<< "queue is empty\n";
    else cout<< "queue is not empty\n";

    //PRINT VALUES
    QueType<int>tempObj;
    for(int i=0;i<4;i++)
    {
        int temp;
        obj.Dequeue(temp);
        tempObj.Enqueue(temp);
    }
    cout<<endl;
    for(int i=0;i<4;i++)
    {
        int temp;
        tempObj.Dequeue(temp);
        cout<<temp<<" ";
        obj.Enqueue(temp);

    }
    cout<<endl;


    if(obj.IsFull())
        cout<< "queue is full\n";
    else cout<< "queue is not full\n";

    {
        int temp;
        obj.Dequeue(temp);
    }

    QueType<int>tempObj2;
    for(int i=0;i<3;i++)
    {
        int temp;
        obj.Dequeue(temp);
        tempObj2.Enqueue(temp);
    }
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        int temp;
        tempObj2.Dequeue(temp);
        cout<<temp<<" ";
        obj.Enqueue(temp);

    }
    cout<<endl;




    return 0;
}
