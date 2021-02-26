#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
#include <iostream>
#include "2dDynArr.h"

dynArr :: dynArr () {
    data =NULL ;
    row = 0 ; column = 0 ;
}
dynArr :: dynArr (int r , int c) {
    row = r;
    data = new int * [ row]  ;
    for (int i=0 ; i<r ; i++ ){
        data [i] = new int [c];
        column=c ;
    }
}

dynArr :: ~dynArr (){
    for(int i=0 ; i<row ; i++)
        delete [] data [i];
    delete [] data ;
}

int dynArr::getValue (int r , int c){
    return data [r] [c] ;
}
void dynArr::setValue (int r , int c, int value){
    data [r] [c] = value ;
}
#endif
