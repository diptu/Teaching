#include "dynarr.h"
#include<iostream>

/*
using namespace std;

dynArr ::dynArr()
{
    data = NULL;
    size = 0;
}
dynArr::dynArr(int s)
{
    data = new int[s];
    size = s;
}
void dynArr::allocate(int s)
{
    data = new int[s];
    size = s;
}
dynArr::~dynArr()
{
    delete [] data;
}
int dynArr::getValue(int index)
{
    return data[index];
}
void dynArr::setValue(int index, int value)
{
    data[index] = value;
}
*/
dynArr ::dynArr()
{
    data = NULL;
    row = col =0;
}
dynArr::dynArr(int r, int c)
{
    row = r;
    col = c;
    data = new int*[row];
    for(int i = 0; i<row; i++)
        data[i] = new int[i];
}
void dynArr::allocate(int r, int c)
{
    /* if(data != NULL)
    {
        for(int i=0;i<row; i++)
            delete [] data[i];
        delete data;
    }
    row = r;
    col = c;
    data = new int*[row];
    for(int i = 0; i<row; i++)
        data[i] = new int[i];*/
    if(data != NULL)
    {
        for(int i=0;i<r; i++)
            delete [] data[i];
    }
    data = new int*[r];
    for(int i=0; i<r; i++)
        data[i] = new int [c];
}
dynArr::~dynArr()
{
    if(data != NULL)
    {
        for(int i=0;i<row; i++)
            delete [] data[i];
        delete data;
    }
}
int dynArr::getValue(int r, int c)
{
    return data[r][c];
}
void dynArr::setValue(int r, int c, int value)
{
    data[r][c] = value;
}
