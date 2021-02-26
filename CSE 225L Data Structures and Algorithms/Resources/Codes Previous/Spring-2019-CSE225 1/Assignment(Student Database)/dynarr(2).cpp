
#include "dynarr.h"
#include<iostream>
using namespace std;

dynArr::dynArr()

{
    data=NULL;
    row = 0;
    col = 0;
}

dynArr::dynArr(int s, int p)
{
    data = new int[s][p];
    row = r;
    col = c;
}


int dynArr::getValue (int i, int j)
{
    return data[i][j];
}

void dynArr::setValue(int i, int j, int value)
{
    data[i][j]=value;
}

