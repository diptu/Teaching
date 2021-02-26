#include "unsortedtype.h"
#include <iostream>

using namespace std;
template<class ItemType>
unsortedtype<ItemType>::unsortedtype()
{
   lenght=0;
   currentPos=-1;
    //ctor
}

template<class ItemType>
void unsortedtype<ItemType>::MakeEmpty()
{
   lenght=0;

    //ctor
}

template<class ItemType>
bool unsortedtype<ItemType>::IsFull()
{

   if(lenght==MAX_ITEMS)
   {
       return true;
   }
}

template<class ItemType>
int unsortedtype<ItemType>::LenghtIs()
{

    return lenght;
}
template<class ItemType>
void unsortedtype<ItemType>::ResetList()
{

   currentPos=-1;
    //ctor
}
template<class ItemType>
void unsortedtype<ItemType>::GetNextItem(ItemType& item)
{

   currentPos++;
    item=info[currentPos];
    //ctor
}
template<class ItemType>
void unsortedtype<ItemType>::RetrieveItem(ItemType &item,bool &found)
{

    int location;
    found=false;
    for(location =0;location<lenght;lenght++){

        if(item==info[location])
        {


            found=true;
            item=info[location];
        }
    break;
    }
}

template<class ItemType>
void unsortedtype<ItemType>::InsertItem(ItemType item)
{

info[lenght]=item;
lenght++;

}

template<class ItemType>
void unsortedtype<ItemType>::DeleteItem(ItemType item)
{
  int location=0;
  while(item!=info[location])
      location++;
  info[location]=info[lenght-1];
  lenght--;



}
template<class ItemType>
void unsortedtype<ItemType>::print()
{

for(int i=0;i<lenght;i++){

cout<< info[i]<<endl;


}
cout<< "Lenght:"<<lenght<<endl;

}
template<class ItemType>
unsortedtype<ItemType>::~unsortedtype()
{
    //dtor
}
