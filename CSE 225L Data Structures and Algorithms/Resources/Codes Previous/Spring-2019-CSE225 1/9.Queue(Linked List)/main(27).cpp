#include <iostream>
#include "quetype.h"
#include "quetype.cpp"
using namespace std;

int main()
{
    QueType<int> s;
    if (s.IsEmpty())
        cout<< " Queue is Empty"<< endl;
    else
        cout<< " Queue is Not Empty"<< endl;

    s.Enqueue(5) ;  s.Enqueue(7) ; s.Enqueue(4) ; s.Enqueue(2) ;

    if (s.IsEmpty())
        cout<< " Queue is Empty"<< endl;
    else
        cout<< " Queue is Not Empty"<< endl ;
        // First print

     QueType <int> ss ;
     while (!s.IsEmpty()) {
        int x ;
        s.Dequeue(x);
        ss.Enqueue(x);
     }
     while (!ss.IsEmpty()) {
        int x ;
        ss.Dequeue(x);
        cout<< x << " " ;
        s.Enqueue(x) ;
     }
     cout <<"  " << endl ;

     if (s.IsFull())
        cout<< "Queue is Full" << endl;
     else
        cout <<"Queue is not full " << endl;

     int sss;
     s.Dequeue(sss);

     // Second Print

     while (!s.IsEmpty()) {
        int x ;
        s.Dequeue(x);
        ss.Enqueue(x);
     }
     while (!ss.IsEmpty()) {
        int x ;
        ss.Dequeue(x);
        cout<< x << " " ;
        s.Enqueue(x) ;
     }
     cout <<"  " << endl ;



    return 0;
}
