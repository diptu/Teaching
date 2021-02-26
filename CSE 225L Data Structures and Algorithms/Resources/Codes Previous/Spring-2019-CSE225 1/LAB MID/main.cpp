#include <iostream>
#include "stack.cpp"
#include "queue.cpp"

using namespace std;

QueueLL Reverse (int k) {
    QueueLL<char> qq ;
    for(int i = k ; i > 0 ; i-- ) {
        qq.insertAtEnd(q.getValue(i))		// inserting 'k' number of elements in reverse order 	
    }
    for (int i = k+1 ; q.hasNext () ; i++ ) {  
        qq.enqueue(q.getValue(i)) ;           // inserting the the unreversed elements in order 
    }
    return qq ;
}

int getMax () {
    int m =  0 ;
    StackLL ss ;
    StackLL sss ;
    while (s.hasNext ()) {
        ss.push(s.Top()) ;			// making two copies of the main stack
        sss.push (s.Top ()) ;			// extra copy to refill the main stack later 
        s.pop () ;				
    }
    while (sss.hasNext ()) {
        s.push (sss.pop()) ;			// refilling the main stack since it got emptied while copying 
    }
    while (ss.hasNext()) {
      	  if (m<ss.top) {			// basic 'if greater , replace it' condition 
            m= ss.pop() ;
            sss.pop();				// the second copy of stack is also emptied to save memory if the method is called more than once 
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
