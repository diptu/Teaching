#include"stacktype.h"
#include"stacktype.cpp"
#include"quetype.h"
#include"quetype.cpp"
#include<iostream>
using namespace std;

int main ()
{


    StackType<int> s;
    s.Push(20);
    cout << s.getMax() << endl;
    s.Push(10);
    cout << s.getMax() << endl;
    s.Push(50);
    cout << s.getMax() << endl;
    return 0;




   QueType <string> Q;
   // StackType<string> st;

    Q.Enqueue("a");
    Q.Enqueue("b");
    Q.Enqueue("c");
    Q.Enqueue("d");
    Q.Enqueue("e");



    cout<<"reversed order"<<Q.reversed()<<endl;







