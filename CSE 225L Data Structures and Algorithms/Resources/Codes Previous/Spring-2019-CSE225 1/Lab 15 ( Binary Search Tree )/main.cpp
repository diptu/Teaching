#include <iostream>
#include "binarysearchtree.cpp"
using namespace std;



int main()
{
    TreeType <int> tree ;
    //2
    if(tree.IsEmpty()) {
        cout<< "Tree IS EMPTY" << endl;
        }
     else cout<< "Tree IS Not Empty "<<endl ;
    //3
    tree.InsertI(4);
    tree.InsertI(9);
    tree.InsertI(2);
    tree.InsertI(7);
    tree.InsertI(3);
    tree.InsertI(11);
    tree.InsertI(17);
    tree.InsertI(0);
    tree.InsertI(5);
    tree.InsertI(1);
    //4
    if(tree.IsEmpty()) {
            cout<<endl;
        cout<< "Tree IS EMPTY" ;
        }
     else cout<< "Tree IS Not Empty " << endl ;
    cout<<endl;

//5
    cout<<tree.LengthIs()<<endl;

//6
int item = 9;
        bool found = false;
       tree.RetrieveItem(item,found);
        if(found == false) {
            cout<<"NOT FOUND " <<endl ;
        }
        else
            cout<< "found" <<endl ;
//7
        item= 13 ;
       found = false;
       tree.RetrieveItem(item,found);
        if(found == false) {
            cout<<"NOT FOUND " <<endl ;
        }
        else
            cout<< "found" <<endl ;

//8
int x = 0; bool xx = false ;
    int i = tree.LengthIs();
    while (i!=0) {
    tree.GetNextItem(x ,PRE_ORDER ,xx ) ;
    cout<< x << " " ;
    i-- ;
    }

    return 0;
}
