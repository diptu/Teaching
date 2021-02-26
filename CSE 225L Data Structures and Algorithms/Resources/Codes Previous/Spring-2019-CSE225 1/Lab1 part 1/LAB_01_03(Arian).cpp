// NO 3

#include <iostream>
#include <iomanip>
 using namespace std ;

 int main () {
  int row, column , i , j ;
  char **arr ;  // here arr is a pointer to  an another pointer
  cout  << " Enter Number of Rows  -- " ;
  cin >> row ;
  arr = new char * [row] ;  // creates "r" number of pointers for the Columns
  for ( i = 0 ; i < row ; i++) {
    cout << "Enter number of Columns for Row " << i  <<endl ;
    cin>> column ;
    arr[i] = new char [column] ;  // creating new 1D arrays over each layers of row
  }
  cout<< endl ;

  for ( i = 0 ; i < row ; i++) {
    cout << "Enter " << column << "Characters for Row number " << row << ": " ;
    for (j = 0 ; j < column ; j++ ) {
        cin >> arr [row][column] ;
        cout<< endl ;
    } }

  for ( i = 0 ; i < row ; i++) {
    for (j = 0 ; j < column ; j++ ) {
        cout << setw(column) << arr [row ] [column] ;
        cout<< endl ;
    } }




 }

