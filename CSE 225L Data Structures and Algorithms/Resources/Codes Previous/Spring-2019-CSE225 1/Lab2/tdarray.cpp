#define <iostream>
#define"tdarray.h"
using namespace std;


dynArr::dynArr()
{
    data = NULL;
    row=0, col=0;
}

dynArr::dynArr(int row, int col)
{
    data = new int*[row];
    row= row;
    for(int i=0; i<row; i++)
        data [i]= new int[col];
        col=col;
}

dynArr::~dynArr()
{
    for(int i=0; i<row; i++)
       delete [] data [i];
    delete [ ] data;
}


void dynArr::allocate(int row, int col)
{
    data = new int*[row];
    row= row;
    for(int i=0; i<row; i++)
        data [i]= new int[col];
        col=col;
}

int dynArr::getValue(int row, int col)
{
    return data[row][col];
}

void dynArr::setValue(int row, int col, int value)
{
    data[row][col]= value;
}


