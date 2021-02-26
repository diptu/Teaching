#include <iostream>
#include<string>
#include "string"
#include "list2.cpp"
#include "list.cpp"
using namespace std;

int main()
{           // TASK 1
    UnsortedList <string> ls ;
    string s ;
    cout << "N's value ? - " <<endl;
    int n ;
    cin >> n ;
    cout << " Enter  " << n << "Strings " << endl ;
    for (int i = 0 ; i < n ; i++ ) {
        cin >> s ;
        ls.insertItem(s) ;
    }
    cout << "Input another String to delete " ;
    cin  >> s ;
    ls.reset() ;

    while (ls.hasNext()) {
        if (s == ls.nextItem() )
            ls.deleteItem(s);
    }

        // TASK 2

   SortedList <string> lt ;
   ls.reset() ;
   while (ls.hasNext()) {
    lt.insertItem(ls.nextItem()) ;
   }
   lt.reset();
   while (lt.hasNext()) {
    cout << lt.nextItem() << "\t" ;
   }
   cout << endl ;


    return 0;
}
