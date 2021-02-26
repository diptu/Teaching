#include "dynArr.h"
#include <iostream>
using namespace std;

template<class T>
dynArr<T>::dynArr()
{
    data = NULL;
}
template<class T>
dynArr<T>::dynArr(int row,int col)
{
    data=new T*[row];
    for(int i = 0; i < row; ++i)
    {
        data[i] = new T[col];

    }
}
template<class T>
dynArr<T>::~dynArr()
{
    for(int i = 0; i < row; ++i)
    {
        delete [] data[i];
    }
    delete [] data;
}
template<class T>
T dynArr<T>::getValue(int row,int col)
{

    return data[row][col];
}
template<class T>
void dynArr<T>::setValue(int row,int col,T value)
{
    data [row][col]=value;
}
template<class T>
void dynArr<T>::allocate(int row,int col)
{

    T **tem;
    tem=data;
    for(int i = 0; i < row; ++i)
    {
        delete [] data[i];
    }
    delete [] data;
    T **data;

    data=new T*[row];
    for(int i = 0; i < row; ++i)
    {
        data[i] = new T[col];

    }
    data = tem;

}
