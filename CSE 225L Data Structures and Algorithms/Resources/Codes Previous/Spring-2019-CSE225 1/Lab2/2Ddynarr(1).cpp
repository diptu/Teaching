#include <iostream>
#include "2Ddynarr.h"

using namespace std;

dynArr:: dynArr()
{
    data = NULL;
    row=0, column = 0;
}
dynArr::dynArr(int row, int column)
{
    data = new int*[row];
    for(int i=0; i<row;i++)
        data[i] = new int[column];
}
dynArr::dynArr()
{
    for(int i=0; i<row; i++)
        delete [] data[i];
    delete [] data;
}
void dynArr::allocate(int row, int column)
{
    if(data != NULL)
    {
        for(int i=0;i<row; i++)
            delete [] data[i]
    }
    data = new int*[row];
    for(int i=0; i<row; i++)
        data[i] = new int [column];
}
int dynArr:: getValue(int row, int column)
{
    return data[row][column];
}
void dynArr::setValue(int row, int column, int value)
{
    data[row][column]= value;
}

