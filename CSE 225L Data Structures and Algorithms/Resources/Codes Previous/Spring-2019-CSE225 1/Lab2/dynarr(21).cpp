#include "dynarr.h"
#include <iostream>
using namespace std;

template <class T>
dYnArr<T>::dYnArr()
{
    data = NULL;
    size = 0;
}
template <class T>
dYnArr<T>::dYnArr(int a)
{
    data = new T[a];
    size = a;
}
template <class T>
dYnArr<T>::~dYnArr()
{
    delete [] data;
}
template <class T>
T dYnArr<T>::getValue(int index)
{
    return data[index];
}
template <class T>
void dYnArr<T>::setValue(int index,T value)
{
    data[index] = value;
}
template <class T>
void dYnArr<T>::allocate(int s)
{


    if(data!=NULL)
    {
        delete [] data;
    }

    data = new T[s];
    size = s;
}
