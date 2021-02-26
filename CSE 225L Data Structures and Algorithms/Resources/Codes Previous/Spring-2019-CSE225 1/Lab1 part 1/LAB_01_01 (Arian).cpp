// no 1
#include <iostream>

 using namespace std ;

 int main () {
  int a ;
  cout<< "Enter the size of the Array - " ;
  cin>> a;
  int *array = new int [a] ;
  cout<< "Enter Integer Values " << endl ;
  for (int i =0 ; i< a ; i++) {
    cin>> array[i];
  }
  cout<< "Values are --  " ;
  for (int i = 0 ; i < a ; i++) {
    cout<< array[i] << " " ;
    }
  delete [] array ;
  array = NULL ;
    return 0 ;
 }


