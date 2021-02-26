#include "dynarr.h"
#include <iostream>

using namespace std;

template <class T>
dynArr<T>::dynArr()
{
    data = NULL;
    rows = columns = 0;
}

template <class T>
dynArr<T>::dynArr(int r, int c)
{
    rows = r;    columns = c;
    data = new T*[r];
    for(i=0; i<r; i++){
        data[i] = new T[c];
    }

}

template <class T>
dynArr<T>::~dynArr()
{
    for(i=0; i<rows; i++){
        delete [] data[i];
    }
    delete [] data;
}

template <class T>
void dynArr<T>::allocate(int r, int c)
{
    if(data != NULL){
        for(i=0; i<rows; i++){
            delete [] data[i];
        }
        delete [] data;
    }

    rows = r;    columns = c;
    data = new T*[r];
    for(i=0; i<r; i++){
        data[i] = new T[c];
    }
}

template <class T>
T dynArr<T>::getValue(int r, int c)
{
    return data[r][c];
}

template <class T>
void dynArr<T>::setValue(int r, int c, T value)
{
    data[r][c] = value;
}
