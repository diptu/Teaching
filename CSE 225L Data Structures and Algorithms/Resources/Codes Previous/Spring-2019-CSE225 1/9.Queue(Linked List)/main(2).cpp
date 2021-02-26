#include "quetype.cpp"
#include <iostream>
using namespace std;
void PRINT(QueType<int>&obj)
{
    //PRINT
    QueType<int>tempObj;
    while(!obj.IsEmpty())
    {
        int temp;
        obj.Dequeue(temp);
        cout<<temp<<" ";
        tempObj.Enqueue(temp);
    }

    while(!tempObj.IsEmpty())
    {
        int temp;
        tempObj.Dequeue(temp);
        obj.Enqueue(temp);
    }
    cout<<endl<<endl;
}
int main()
{
    QueType<int>obj;

    if(obj.IsEmpty())
        cout<< "queue is empty\n";
    else cout<< "queue is not empty\n";

    for(int i=0;i<4;i++){
    int temp;
    cin>>temp;
    obj.Enqueue(temp);
}

    if(obj.IsEmpty())
        cout<< "queue is empty\n";
    else cout<< "queue is not empty\n";


    PRINT(obj);


    if(obj.IsFull())
        cout<< "queue is full\n";
    else cout<< "queue is not full\n";

    {
        int temp;
        obj.Dequeue(temp);
    }

    PRINT(obj);


    return 0;
}
