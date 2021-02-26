
task1

#include "dynarr.h"
#include<iostream>
using namespace std;
dynArr::dynArr()

{

    data=NULL;
    size=0;
}
dynArr::dynArr(int s)
{
   data = new int[s];
   size = s;
}
dynArr::~dynArr()
{


  delete [] data;

}
int dynArr::getValue (int index)
{

   return data[index];

}
void dynArr::setValue(int index, int value)
{


    data[index]=value;

}


task2


#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
class dynArr
{
   private:
       int *data;
       int size;
   public:
        dynArr();
        dynArr(int);
        ~dynArr();
        void setValue(int,int);
        int getValue(int);
        void allocate(int);

};
#endif // DYNARR_H_INCLUDED

task4

ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

template <class T>
class dynArr
{
    private:
    T *data;
    int size;

    public:
    dynArr();
    dynArr(int);
    ~dynArr();
    void allocate(int);
    void setValue(int, T);
    T getValue(int);
};

#endif // DYNARR_H_INCLUDED




