#include <iostream>
#include "heaptype.h"
#include "pqtype.h"
#include "pqtype.cpp"
#include <bits/stdc++.h>
using namespace std;


int main(){

    int sweet=0 ; int c = 0 ;
    int n , k ; // k is the sweetness level
    cin >> n ;
    cin >> k ;
    cout<< endl ;
    PQType<int> pqq(n);
    for (int i = 0 ; i< n ; i++) {
        int x ;
        cin>>x;
        //pq.Enqueue(x);
        pqq.Enqueue(x);
    }
    /*int xx ;
    while (!pqq.IsEmpty()) {
        pqq.Dequeue(xx);
        cout<<xx;
    }
    */



    while (1){
        if (sweet >= k)
            break;
        sweet = 0 ;
        int a , b ;
        pqq.Dequeue(a) ;
        pqq.Dequeue(b) ;
        sweet= ((1*a) + (2*b));
        pqq.Enqueue(sweet);
       // cout<<"Sweetness is "<< sweet << " at " <<c << "th iteration ";
        c++ ;
        // copy inside the array
/*
        int nn=0 ;
        int arr [n]  ;
        while (!pqq.IsEmpty()) {
            pqq.Dequeue(arr[nn]);
            nn++;   // now A[]  has all the data
        }
        //sorting the array
        int sizee = sizeof(arr)/sizeof(arr[0]) ;
        sort(arr, arr+sizee) ;
        // now array is sorted

        for (nn=0 ; nn< n; nn++) {
        pqq.Enqueue(arr[nn]);
        }
*/
       // count++ ;


    }
    cout<<"Times needed is  "<<c ;

    }




