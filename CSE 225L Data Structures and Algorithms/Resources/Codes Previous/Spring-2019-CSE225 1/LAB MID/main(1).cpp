#include <iostream>
#include "stack.cpp"
#include "queue.cpp"

using namespace std;

QueueLL Reverse (int k) {
    QueueLL<char> qq ;
    for(int i = k ; i > 0 ; i-- ) {
        qq.insertAtEnd(q.getValue(i))
    }
    for (int i = k ; q.hasNext () ; i++ ) {
        qq.enqueue(q.getValue(i)) ;
    }
    return qq ;
}

int getMax () {
    int m =  0 ;
    StackLL ss ;
    StackLL sss ;
    while (s.hasNext ()) {
        ss.push(s.Top()) ;
        sss.push (s.Top ()) ;
        s.pop () ;
    }
    while (sss.hasNext ()) {
        s.push (sss.pop()) ;
    }
    while (ss.hasNext()) {
        if (m<ss.top) {
            m= ss.pop() ;
            sss.pop();
        }
    }
    return m ;

}

int main()
{  //2-QUEUE
    QueueLL <char> q ;
    q.enqueue('a') ;
    q.enqueue('b') ;
    q.enqueue('c') ;
    q.enqueue('d') ;
    cout << q.Reverse (2 ) ;


    //1-Stack
    StackLL <int > s ;
    s.push(1); s.push(2);
    s.push(4);  s.push(3);
    s.push(5);
    cout << s.getMax () ;


    return 0;
}
