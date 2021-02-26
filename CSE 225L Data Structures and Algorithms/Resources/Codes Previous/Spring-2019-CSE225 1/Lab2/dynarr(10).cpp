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
    data = new int*[s];
    for(int i=0;i<s;i++)
        data[i]=new int[s];
    size =s;
}

dynArr::~dynArr()
{
    delete [] data;
}

int dynArr::getValue(int index1,int index2)
{
    return data[index1][index2];
}

void dynArr::setValue(int index1,int index2,int value)
{
    data[index1][index2]=value;

}

void dynArr::allocate(int s)
{
    data= new int*[s];
    for(int i=0;i<s;i++)
        data[i]=new int[s];
    size=s;
}

