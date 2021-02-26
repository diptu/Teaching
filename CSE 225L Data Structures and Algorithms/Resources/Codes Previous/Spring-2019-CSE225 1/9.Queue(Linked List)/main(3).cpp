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

    //1st PRINT
    QueType<int>objtemp;
    while(!obj.IsEmpty())
    {
        int temp;
        obj.Dequeue(temp);
        objtemp.Enqueue(temp);
    }
    while(!objtemp.IsEmpty())
    {
        int temp;
        objtemp.Dequeue(temp);
        cout<< temp << " ";
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


    objtemp.MakeEmpty();
    while(!obj.IsEmpty())
    {
        int temp;
        obj.Dequeue(temp);
        objtemp.Enqueue(temp);
    }
    while(!objtemp.IsEmpty())
    {
        int temp;
        objtemp.Dequeue(temp);
        cout<< temp << " ";
        obj.Enqueue(temp);
    }
    cout<<endl;



    return 0;
}
