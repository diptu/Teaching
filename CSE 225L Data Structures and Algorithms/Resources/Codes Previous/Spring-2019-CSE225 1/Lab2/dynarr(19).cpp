#include"dynarr.h"
#include  <iostream>


template <class C>

dynArr<C>::dynArr()
{
    data=NULL;
    size=0;

}
template <class C>

dynArr<C>::dynArr(int s)
{
    data= new int[s];
    size=s;

}
template <class C>

dynArr<C>::~dynArr()
{
   delete[]data;
}

template <class C>

C dynArr<C>::getValue(int index)
{
    return data[index];
}

template <class C>

void dynArr<C>::setValue(int index, C value)
{
    data[index] = value;
}

template <class C>

void dynArr<C>::allocate(int s)
{
    data= new int[s];
    size=s;
}

