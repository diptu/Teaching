#include <iostream>
#include "sortedt.cpp"
#include "timeStamp.h"
#include "timeStamp.cpp"
using namespace std;

int main()
{
    SortedType<int> arr ;

    cout<<arr.LengthIs()<<endl ;

    arr.InsertItem(5);
    arr.InsertItem(7);
    arr.InsertItem(4);
    arr.InsertItem(2);
    arr.InsertItem(1);


    int item;
    for (int i = 0; i < 5; i++)
    {
        arr.GetNextItem(item);
        cout<<item<<" ";
    }
    cout<<endl;

    int a1 = 6;
    bool f1 = false ;
    arr.RetrieveItem(a1,f1);
    if(f1 == true)
    {
        cout<<"item is found"<<endl;
    }
    else
    {
        cout<<"Item is not found"<<endl;
    }

    int a2 = 5;
    bool f2 = false ;
    arr.RetrieveItem(a2,f2);
    if(f2 == true)
    {
        cout<<"item is found"<<endl;
    }
    else
    {
        cout<<"Item is not found"<<endl;
    }



    if(arr.IsFull() == true )
    {
        cout<<"List is full"<<endl;
    }
    else
    {
        cout<<"List is not full"<<endl;
    }

    arr.DeleteItem(1);
    arr.ResetList();
    int temp1;
    for(int i=0;i<4;i++)
    {
        arr.GetNextItem(temp1);
        cout<<temp1<<" ";
    }
    cout<<endl;
    if(arr.IsFull() == true )
    {
        cout<<"List is full"<<endl;
    }
    else
    {
        cout<<"List is not full"<<endl;
    }
    SortedType<TimeStamp> time;

    TimeStamp t1,t2,t3,t4,t5;
    t1.setSeconds(14);
    t1.setMinutes(34);
    t1.setHours(23);
 //   time.InsertItem(t1);

    t2.setSeconds(13);
    t2.setMinutes(13);
    t2.setHours(02);
 //   time.InsertItem(t1);


    t3.setSeconds(43);
    t3.setMinutes(34);
    t3.setHours(23);
 //   time.InsertItem(t1);

    t4.setSeconds(14);
    t4.setMinutes(34);
    t4.setHours(23);
//    time.InsertItem(t1);

    t5.setSeconds(14);
    t5.setMinutes(34);
    t5.setHours(23);
 //   time.InsertItem(t1);


//    time.InsertItem(t2);
//    time.InsertItem(t3);
//    time.InsertItem(t4);
//    time.InsertItem(t5);

time.DeleteItem(t1);
    t1.print();
    t2.print();
    t3.print();
    t4.print();
    t5.print();


}
