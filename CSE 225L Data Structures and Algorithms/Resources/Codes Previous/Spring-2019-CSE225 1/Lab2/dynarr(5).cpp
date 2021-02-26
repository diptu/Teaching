#include "dynarr.h"
#include <iostream>
using namespace std;

dynArr::dynArr()
{
    data=NULL;
    row=column=0;
}
dynArr::dynArr(int a,int b)
{
    row=a;colum=b;
    data=new int*[row];

    for(int i=0;i<row;i++)
        data[i]=new int [colunm];
}
dynArr::~dynArr()
{
    delete [] data;
}
int dynArr::getValue(int a,int b)
{
    return data[a] [b];
}
void dynArr::setValue(int row,int column,int value)
{
    data[row][column]= value;
}
void dynArr::allocate(int a,int b)
{
    if(data!=NULL) delete [] data;
    data=new int*[a];

    for(int i=0;i<r;i++)
        data[i]=new int[c];
}
