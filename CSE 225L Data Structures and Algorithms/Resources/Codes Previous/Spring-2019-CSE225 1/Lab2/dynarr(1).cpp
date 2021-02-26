
task1

#include "dynarr.h"
#include<iostream>
using namespace std;
dynArr::dynArr()

{

    data=NULL;
    size=0;
}
dynArr::dynArr(int s)
{
   data = new int[s];
   size = s;
}
dynArr::~dynArr()
{


  delete [] data;

}
int dynArr::getValue (int index)
{

   return data[index];

}
void dynArr::setValue(int index, int value)
{


    data[index]=value;

}



Task2


#include "dynArr.h"
#include <iostream>
using namespace std;

dynArr::dynArr()
{
    data=NULL;
    size=0;
}

dynArr::dynArr(int s)
{
    data = new int[s];
    size =s;
}

dynArr::~dynArr()
{
    delete [] data;
}

int dynArr::getValue(int index)
{
    return data[index];
}

void dynArr::setValue(int index,int value)
{
    data[index]=value;

}

void dynArr::allocate(int s)
{
    data= new int[s];
    size=s;
}


task4

#include <iostream>
using namespace std;

template <class T>
template<T>::template()
{
    data = NULL;
    size = 0;
}

template <class T>
dynArr<T>::dynArr(int s)
{
    data = new T[s];
    size = s;
}

template <class T>
dynArr<T>::~dynArr()
{
    delete [] data;
}
template <class T>
void dynArr::allocate(int s)
{
    data = new T[s];
    size = s;
}

template <class T>
T dynArr<T>::getValue(int index)
{
    return data[index];
}

template <class T>
void dynArr<T>::setValue(int index, T value)
{
    data[index] = value;
}



