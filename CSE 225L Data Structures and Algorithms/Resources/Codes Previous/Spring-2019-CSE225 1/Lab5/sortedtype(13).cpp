#include "sortedtype.h"
#include <iostream>
using namespace std;

template <class Itemtype>
Sortedtype<Itemtype>::Sortedtype()
{
    length=0;
    currentPos=-1;
}

template <class Itemtype>
void Sortedtype<Itemtype>::MakeEmpty()
{
    length=0;
}

template <class Itemtype>
bool Sortedtype<Itemtype>::IsFull()
{
    return length==MAX_ITEMS;
}

template <class Itemtype>
int Sortedtype<Itemtype>::LengthIs()
{
    return length;
}

template <class Itemtype>
void Sortedtype<Itemtype>::ResetList()
{
    currentPos=-1;
}

template <class Itemtype>
void Sortedtype<Itemtype>::GetNextItem(Itemtype&item)
{
    currentPos++;
    item = info[currentPos];
}



template <class Itemtype>
void Sortedtype<Itemtype>::InsertItem(Itemtype item)
{
    info[length]=item;
    length++;

    //SORTING
        int i,j,key;
		for(j=1;j<length;j++)
		{
			key=info[j];
			i=j-1;
			while(i>=0 && info[i]>key)
			{
				info[i+1]=info[i];
				i=i-1;
			}
			info[i+1]=key;
		}
}





template <class Itemtype>
void Sortedtype<Itemtype>::DeleteItem(Itemtype item)
{
    int location=0;
    while(item!=info[location])
        location++;
    for(int index=location+1;index<length;index++)
        info[index-1]=info[index];
    length--;
}

template <class Itemtype>
void Sortedtype<Itemtype>::RetrieveItem(Itemtype&item,bool&found)
{
    found=false;
    int first=0;
    int last=length-1;
    int mid=0;
    while(first<=last)
    {

        mid=(first+last)/2;
        if(info[mid]==item)
        {
            found=true;
            break;
        }
        else if(info[mid]<item)
            first = mid + 1;
        else if(info[mid]>item)
            last = mid -1;
    }

}
