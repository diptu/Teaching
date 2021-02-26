
#include "quetype.h"
#include "quetype.cpp"
#include<iostream>
using namespace std;

int main ()
{
    QueType<int>a(5);
    QueType<int>b(5);
    if(a.IsEmpty())
    {
        cout << "queue is empty " <<endl;
    }
    else
    {
        cout << "queue is not empty " << endl;
    }
    //inserting items
    try {
        a.Enqueue(5);
    a.Enqueue(7);
    a.Enqueue(4);
    a.Enqueue(2);
    }
    catch (FullQueue())
    {
        cout << "queue is full"<<endl;
    }

    //empty or not
    if(a.IsEmpty())
    {
        cout << "queue is empty " <<endl;
    }
    else
    {
        cout << "queue is not empty " << endl;
    }
   //full or not
    if(a.IsFull())
    {
        cout << " queue is full" << endl;
    }
    else
    {
        cout<<"queue is not full" << endl;
    }
    try {
        a.Enqueue(6);
    }
    catch (FullQueue())
    {
        cout << "queue is full" << endl;
    }
    try {
    b.Enqueue(5);
    b.Enqueue(7);
    b.Enqueue(4);
    b.Enqueue(2);
    b.Enqueue(6);
    }
    catch ( FullQueue())
    {
        cout << "queue is full" << endl;
    }

      //print values
      int temp;
      for(int i =0; i<5; i++)
      {
           a.Dequeue(temp);
           cout<< " " << temp <<endl;
      }


      //full or not
      if(b.IsFull())
    {
        cout << "queue is full" << endl;
    }
    else
    {
        cout<<"queue is not full" << endl;
    }

    //inserting again
 /*try {
   b.Enqueue(8);
   }
   catch (FullQueue())
   {
       cout << "queue overflow"<<endl;
   }*/


   //dequeue
  int temp2,temp3;
  try {
  b.Dequeue(temp2);
  b.Dequeue(temp2); }

  catch(FullQueue())
  {
      cout << "queue is full"<<endl;
  }



      for(int i =0; i<5; i++)
      {
           a.Dequeue(temp3);
           cout<< " " << temp3 <<endl;
      }



        }
