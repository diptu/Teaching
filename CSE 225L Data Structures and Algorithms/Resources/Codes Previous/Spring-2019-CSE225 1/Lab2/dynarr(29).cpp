#include<iostream>
#include "dynArr.h"
using namespace std;

template<class x>
dynArr<x>::dynArr()
{
    data=NULL;
    size=0;
}
template<class x>
dynArr<x>::dynArr(int s)
{
    data=new int[s];
    size=s;
}

template<class x>
dynArr<x>::~dynArr()
{
    delete [] data;
}

template<class x>
x dynArr<x>::getValue(int index)
{
    return data[index];
}
template<class x>
void dynArr<x>::setValue(int index, x value)
{
    data[index]=value;
}

//Task2
template<class x>
void dynArr<x>::allocate(int s)
{
    if(data!=NULL)
        delete [] data;
    data=new int[s];
    size=s;
}
