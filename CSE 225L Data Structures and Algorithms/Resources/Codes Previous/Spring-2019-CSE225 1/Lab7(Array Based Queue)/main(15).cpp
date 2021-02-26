#include "quetype.cpp"
#include <iostream>
using namespace std;

int main()
{
    QueType<int>obj(5);
    if(obj.IsEmpty())
        cout<<"Queue is Empty\n";
    else cout << "Queue is not Empty\n";

    for(int i=0;i<4;i++)
    {
        int temp;
        cin>>temp;
        obj.Enqueue(temp);
    }

    if(obj.IsEmpty())
        cout<<"Queue is Empty\n";
    else cout << "Queue is not Empty\n";

    if(obj.IsFull())
        cout<<"Queue is Full\n";
    else cout << "Queue is not Full\n";

    {
            int temp;
            cin>>temp;
            obj.Enqueue(temp);
    }

    QueType<int>tem(5);
    for(;!tem.IsFull();)
    {
        int temp;

        obj.Dequeue(temp);
        tem.Enqueue(temp);
    }


    for(;!obj.IsFull();)
    {
        int temp;
        tem.Dequeue(temp);
        obj.Enqueue(temp);

        cout<< temp << "  ";
    }

      if(obj.IsFull())
        cout<<"\nQueue is Full\n";
    else cout << "\nQueue is not Full\n";

    {
        int temp;
        cin>>temp;
        obj.Enqueue(temp);
    }

    //Dequeue 2 ITEMS
    {
        int temp;

        obj.Dequeue(temp);
        obj.Dequeue(temp);
    }


    //SECOND PRINT
    QueType<int>tem2(5);
    for(;!obj.IsEmpty();)
    {
        int temp;

        obj.Dequeue(temp);
        tem2.Enqueue(temp);
        cout << temp << " ";
    }


    for(;!tem2.IsEmpty();)
    {
        int temp;

        tem2.Dequeue(temp);
        obj.Enqueue(temp);
    }

    //DEQUEUE 3 ITEMS
    {
        int temp;
        for(int i=0;i<3;i++)
            obj.Dequeue(temp);
    }

    if(obj.IsEmpty())
        cout<<"\nQueue is Empty\n";
    else cout << "\nQueue is not Empty\n";

    //DEQUEUE AN ITEM
    {int temp; obj.Dequeue(temp);}






    return 0;
}
