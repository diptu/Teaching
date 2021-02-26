#include "unsortedtype.h"

unsortedtype::unsortedtype()
{
   length = 0;
   currentPos = -1; // Because, initially the list is empty
}
void UnsortedType::InsertItem(int item)
{
    info[length] = item;
    length++;
}

bool UnsortedType::SearchItem(int item)
{
     bool found = false;
     for(int index = 0;index<length;index++)
        {
            if(info[index] == item)
            {
                found = true;
                break;
            }
        }
     return found;
}

void UnsortedType::DeleteItem(int item)
{
     if(SearchItem(item)==true)
        {
            int location = 0;
            while (item != info[location])
            {
             location++;
            }
            info[location] = info[length - 1];
            length--;
        }
            else
                {
                    cout<<"Item not in the list"<<endl;
                }
 }

int UnsortedType::GetNextItem()
{
     currentPos++;
     return info[currentPos];
}

int UnsortedType::LengthIs()
{
    return length;
}

bool UnsortedType::IsFull()
{
    return (length==MAX_ITEMS);
}
bool UnsortedType::IsEmpty()
{
    return (length==0);
}
void UnsortedType::ResetList()
{
    currentPos = -1;
}
void UnsortedType::MakeEmpty()
{
    length = 0;
}
