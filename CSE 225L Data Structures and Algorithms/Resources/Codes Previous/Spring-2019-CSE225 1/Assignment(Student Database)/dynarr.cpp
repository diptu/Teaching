#include<iostream>
#include"2DdynArr.h"

using namespace std;

dynArr::dynArr()
{
    data=NULL;
    row=0;col=0;

}

dynArr::~dynArr(int r,int c)

{
    data=new int*[r];
    row=r;
    for(int i=0;i<r;i++)
    delete[] data[i];
    delete[]data;

}
int dynArr::getValue(int r, int c)
{
    return data[r][c];

}
void dynArr::setValue(int r,int c,int value)
{

    data [r][c]=value;

}
void dynArr::allocate(int r,int c)

{if (data!=NULL)
{

    for(int i=0;i<r;i++)
        delete[] data[i];
    delete[]data;

}
data=new int*[r];
row=r;
for(int i=0;i<r;i++)
    data [i]=new int[c];
col=c;
}
