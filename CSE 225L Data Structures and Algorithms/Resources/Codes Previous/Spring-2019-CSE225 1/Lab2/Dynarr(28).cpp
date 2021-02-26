#include"dynarr.h"
#include<iostream>
using namespace std;

Dynarr::Dynarr()
{
    data = NULL;
    size = 0;
}

void Dynarr::allocate(int s)
{
    data= new int[s];
    size = s;
}

Dynarr::Dynarr(int s)
{
    data = new int[s];
    size = s;
}

Dynarr::~Dynarr()
{
    delete[] data;
}

int Dynarr::getValue(int index)
{
    return data[index];
}

void Dynarr::setValue(int index, int value)
{
    data [index] = value;
}

