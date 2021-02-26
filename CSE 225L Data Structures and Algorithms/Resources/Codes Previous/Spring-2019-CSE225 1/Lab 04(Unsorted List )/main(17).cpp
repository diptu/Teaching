#include <iostream>
//#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;

int main()
{
    UnsortedType <int> o ;
    o.ResetList();
    o.InsertItem(5);
     o.InsertItem(7);
     o.InsertItem(6);
     o.InsertItem(9);

    for (int i=0 ; i< o.LengthIs() ; i++){
        int temp ;
        o.GetNextItem(temp) ;
        cout<<temp << " "  ;
    }
    cout<<" " << endl;
    cout<<o.LengthIs()<< endl;
    o.InsertItem(1) ;
    o.ResetList();
    for (int i=0 ; i< o.LengthIs() ; i++){
        int temp ;
        o.GetNextItem(temp) ;
        cout<<temp << " " ;
    }
    cout<< " " << endl ;
    bool x = false ;
    int a = 4 ;
    o.RetrieveItem(a,x) ;
    if (x== false ) {
        cout<< "Item not found " << endl;
    }
    else cout<< "Item found " << endl;

    a=5 ; x=false;
    o.RetrieveItem(a,x) ;
    if (x== false ) {
        cout<< "Item not found " << endl;
    }
    else cout<< "Item found " << endl;

    a=9 ; x=false;
    o.RetrieveItem(a,x) ;
    if (x== false ) {
        cout<< "Item not found " << endl;
    }
    else cout<< "Item found " << endl;

    a=10 ; x=false;
    o.RetrieveItem(a,x) ;
    if (x== false ) {
        cout<< "Item not found " << endl;
    }
    else cout<< "Item found " << endl;

    if (o.IsFull () == true)
        cout << "List is full" << endl ;
    else
        cout <<  " List is not full";

    o.DeleteItem(1) ;
    o.ResetList(); //important
     for (int i=0 ; i< o.LengthIs() ; i++){
        int temp ;
        o.GetNextItem(temp) ;
        cout<<temp << " "  ;
    }
    o.DeleteItem(5);
    o.ResetList();
    o.DeleteItem(6) ;
    o.ResetList();
    cout<< " " <<endl ;
for (int i=0 ; i< o.LengthIs() ; i++){
        int temp ;
        o.GetNextItem(temp) ;
        cout<<temp << " "  ;
    }
    return 0;
}
