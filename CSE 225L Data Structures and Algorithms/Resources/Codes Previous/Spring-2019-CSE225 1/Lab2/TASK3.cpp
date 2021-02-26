#include "TASK3.h"
#include <iostream>
using namespace std;

dynArr::dynArr()
{
    data=NULL;
    row=column=0;
}
dynArr::dynArr(int r,int c)
{

    row=r;column=c;
    data=new int*[row];

    for(int i=0;i<row;i++)
        data[i]=new int[column];
}
dynArr::~dynArr()
{
    delete [] data;
}
int dynArr::getValue(int r,int c)
{
    //code
    return data[r][c];
}
void dynArr::setValue(int row,int column,int value)
{
    //code
    data[row][column]=value;
}

void dynArr::allocate(int r,int c)
{
    if(data!=NULL) delete [] data;
    data=new int*[r];

    for(int i=0;i<r;i++)
        data[i]=new int[c];
}

