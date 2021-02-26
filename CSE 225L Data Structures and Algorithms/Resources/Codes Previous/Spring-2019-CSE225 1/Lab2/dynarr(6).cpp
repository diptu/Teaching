
#include "dynarr.h"
#include <iostream>
using namespace std;

template <class T> dynArr<T>::dynArr()
{
    data=NULL;
    size=0;
}


 template <class T> dynArr<T>:: dynArr(int s){
 data =new int[s];
 size=s;
 }

 template <class T> dynArr<T> ::  ~dynArr(){
 delete [] data;
 delete [] matrix;
 }

 template <class T> void dynArr<T>::setValue (int index,T value){


     data[index]=value;

 }
template <class T> T dynArr<T>:: getValue(int index){
        return data[index];

    }

template <class T> void dynArr<T> :: allocate(int s)

{

    if (data!=NULL)
        delete []data;
    data =new int[s];
    size=s;

}

template <class T> dynArr<T>::dynArr(int r, int c){

    matrix = new T*[row];
for(int i=0; i<row; i++){
   matrix[i] = new T[column];
}

}
template <class T> void dynArr<T>::setValue (int row, int c, T value){

    matrix [row][column]=value;



}

template <class T> T dynArr<T>::getValue(int row, int column){


    return matrix[row][column];

}

template <class T> void dynArr<T>::allocate(int row, int column){


    if (matrix!=NULL)
        delete []matrix;
     matrix = new T*[row];
for(int i=0; i<row; i++){
   matrix[i] = new T[column];
}

}
