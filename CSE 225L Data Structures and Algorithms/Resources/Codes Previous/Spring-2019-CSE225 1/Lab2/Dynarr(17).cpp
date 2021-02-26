#include"dynarr.h"
#include<iostream>
using namespace std;

template<class T>
Dynarr<T>::Dynarr()
{
    data = NULL;
    size = 0;
}

template<class T>
void Dynarr<T>::allocate(int s)
{
    data= new T[s];
    size = s;
}

template<class T>
Dynarr<T>::Dynarr(T s)
{
    data = new int[s];
    size = s;
}

template<class T>
Dynarr<T>::~Dynarr()
{
    delete[] data;
}

template<class T>
T Dynarr<T>::getValue(int index)
{
    return data[index];
}

template<class T>
void Dynarr<T>::setValue(int index, T value)
{
    data [index] = value;
}
