#include "dynArr.h"
#include <iostream>
using namespace std;
dynArr::dynArr()
{
    data = NULL;
    size = 0;
}

dynArr::dynArr(int s)
{
    data = new int [s];
    size = s;
}
dynArr::~dynArr()
{
    delete[]data;
}
int dynArr::getValue(int index)
{
return data[index];

}
void dynArr::setValue(int index, int value)
{
    size = index;
    data = value;

}

dynArr:: void alocate(int s)
{

    size = s;
}
