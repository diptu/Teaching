#include <iostream>
//#include "unsortedtype.h"
#include "sorted.cpp"
using namespace std;

int main()
{
    sorted <int> o ;
    cout << o.LengthIs() << endl ;
     o.ResetList();
     o.InsertItem(5);
     o.InsertItem(7);
     o.InsertItem(4);
     o.InsertItem(2);
     o.InsertItem(1);
for (int i=0 ; i< o.LengthIs() ; i++){
        int temp ;
        o.GetNextItem(temp) ;
        cout<<temp << " "  ;
    }
    cout<<" " << endl;

// retrieve

 int a = 6 ;
 bool x= false ;
    o.RetrieveItem(a,x) ;
    if (x== false ) {
        cout<< "Item not found " << endl;
    }
    else cout<< "Item found " << endl;

a = 5 ;
x= false ;
    o.RetrieveItem(a,x) ;
    if (x== false ) {
        cout<< "Item not found " << endl;
    }
    else cout<< "Item found " << endl;

// FULL ??

 if (o.IsFull () == true)
        cout << "List is full" << endl ;
    else
        cout <<  " List is not full";

 o.DeleteItem(1);
 o.ResetList();                                         // this reset is important
for (int i=0 ; i< o.LengthIs() ; i++){
        int temp ;
        o.GetNextItem(temp) ;
        cout<<temp << " "  ;
    }
    cout<<" " << endl;


 if (o.IsFull () == true)
        cout << "List is full" << endl ;
    else
        cout <<  " List is not full";


    return 0;
}
