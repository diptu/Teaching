#include "dynarr.h"
#include <iostream>

using namespace std;
template<class T>
dynarr<T>::dynarr()
{
    data=NULL;
    size=0;

}

template<class T>
dynarr<T>::dynarr(T s)
{
data=new int[s];
size=s;

}
template<class T>
void dynarr<T>:: allocate(T s)
{

data=new int[s];
size=s;

}
template<class T>

int dynarr<T>::getValue(T index)
{

return data[index];

}
template<class T>
void dynarr<T>::setValue(T index,T value)
{
data[index]=value;


}
template<class T>
dynarr<T>::~dynarr()
{
    //dtor
}
