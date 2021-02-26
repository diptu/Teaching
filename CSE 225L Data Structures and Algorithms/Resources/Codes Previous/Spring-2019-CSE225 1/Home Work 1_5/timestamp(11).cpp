#include "timestamp.h"
#include <iostream>

using namespace std;
template<class ItemType>
timeStamp<ItemType>::timeStamp(ItemType rows,ItemType columns)
{
    row=rows;
    column=columns;
    matrix=new ItemType*[row];
    for(int i=0; i<row; i++)
   matrix[i] = new int[column];

}
template<class ItemType>
void timeStamp<ItemType>::insertitem()
{

    for(int i=0; i<row; i++){
   for(int j=0; j<column; j++){
cout<<":";
      cin>>matrix[i][j];

   }
   cout<<"-------------------------------"<<endl;
    }
}


template<class ItemType>
void timeStamp<ItemType>::deleteitem()
{
   for(int i=4; i<row; i++){
   for(int j=0; j<column; j++){

      matrix[i-1][j]=matrix[i][j];
   }


   }

}
template<class ItemType>
void timeStamp<ItemType>::getnextitem(ItemType item1,ItemType item2,ItemType& item3)
{

item3=matrix[item1][item2];
}
template<class ItemType>
timeStamp<ItemType>::~timeStamp()
{
    //dtor
}
