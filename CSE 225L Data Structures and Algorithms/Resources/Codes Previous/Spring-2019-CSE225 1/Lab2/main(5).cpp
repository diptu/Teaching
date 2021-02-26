#include <iostream>
#include "2dDynArr.h"
#include "2dDynArr.cpp"
using namespace std;

int main()
{
    int row , column , i , j ;
    cout << "Enter Number of Rows : " ;
        cin  >> row ;
        cout << "Enter Number of Columns  : " ;
        cin  >> column ;
         dynArr s(row , column) ;
        cout << "Enter Array Elements :: " ;
        for (int i = 0 ; i < row ; i ++) {
            for (int j = 0 ; j< column  ; j++ ) {
                int z ;
                cin>> z ;  s.setValue(i,j,z);
                }
        }

        cout <<  " OUTPUT IS  :: " ;
         for (int i = 0 ; i < row ; i ++) {
            for (int j = 0 ; j< column  ; j++ ) {
              cout << s.getValue(i,j) << " " << endl ;
                }
        }

    return 0;
}
