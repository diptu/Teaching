#include <iostream>
#include "quetype.cpp"
using namespace std;

void Binary(int n)
{
    QueType <string> q;
    q.push("1");
    while (n != 0)
    {
        string s1 = q.Front();
        q.Dequeue();
        cout << s1 << endl ;
        string s2 = s1;
        q.Enqueue(s1.append("0"));
        q.Enqueue(s2.append("1"));
        n-- ;
    }
}









int main()
{
    QueType<int > q(5);
    if (q.IsEmpty())
    cout<< "Queue is Empty" << endl ;
    q.Enqueue(5);
    q.Enqueue(7);
    q.Enqueue(4);
    q.Enqueue(2);
    if (q.IsEmpty())
        cout<< "Queue is Empty" << endl ;
    else
        cout<<"Queue is not Empty " << endl ;

    if (q.IsFull())
        cout<< "Queue is   Full" << endl ;
    else
        cout<<"Queue is not Full " << endl ;

    q.Enqueue(6);

    //first print

        QueType<int> p(5) ;

    while (!q.IsEmpty()) {
        int temp ;
        q.Dequeue(temp) ;
        p.Enqueue(temp) ;
        cout<<temp << " "  ;
    }
    cout<< "\n" << endl;
    while (!p.IsEmpty())
    {
        int temp ;
        p.Dequeue(temp) ;
        q.Enqueue(temp) ;
    }
    cout << " " << endl;


  if (q.IsFull())
        cout<< "Queue is   Full" << endl ;
    else
        cout<<"Queue is not Full " << endl ;


    q.Enqueue(8) ;
    int x ;
    q.Dequeue(x) ;
    q.Dequeue(x) ;

  if (q.IsEmpty())
        cout<< "Queue is Empty" << endl ;
    else
        cout<<"Queue is not Empty " << endl ;



  QueType<int> s(3) ;

    while (!q.IsEmpty()) {
        int temp ;
        q.Dequeue(temp) ;
        s.Enqueue(temp) ;
        cout<<temp << " "  ;
    }
    cout<< "\n" << endl;
    while (!s.IsEmpty())
    {
        int temp ;
        s.Dequeue(temp) ;
        q.Enqueue(temp) ;
    }
    cout << " " << endl;

    q.Dequeue(x) ;
    q.Dequeue(x) ;
    q.Dequeue(x) ;

     if (q.IsEmpty())
        cout<< "Queue is Empty" << endl ;
    else
        cout<<"Queue is not Empty " << endl ;


     q.Dequeue(x) ;


   return 0;

}
