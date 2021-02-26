#include <iostream>
#include"binarysearchtree.h"
#include "binarysearchtree.cpp"
#include "quetype.h"
#include "quetype.cpp"

using namespace std;


int main()
{

    TreeType<int> *t = new TreeType<int>;
    TreeType<int> *p = new TreeType<int>;

    t->InsertItem(5);
    t->InsertItem(3);
    t->InsertItem(8);
    t->InsertItem(2);
    t->InsertItem(4);
    t->InsertItem(6);
    t->InsertItem(10);

    t->ResetTree(IN_ORDER);

    bool found,found1;
    int temp,temp1;
    int sum = 0;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    int sum4 = 0;
    int sum5 = 0;
    int sum6 = 0;

    for(int i = 0 ; i<7 ; i++)
    {
         t->GetNextItem(temp1,IN_ORDER,found1);
         cout <<" "<<temp1;
         if(temp1 > 2)
         {
             sum = sum+temp1;

         }
         else if (temp1 > 3)
         {
             sum1 = sum1+temp1;
         }
         else if (temp1 > 4)
         {
             sum2 = sum2+temp1;
         }
         else if (temp1 > 5)
         {
             sum3 = sum3+temp1;
         }
        else if (temp1 > 6)
         {
             sum4 = sum4+temp1;
         }
         else if (temp1 > 8)
         {
             sum5 = sum5+temp1;
         }
         else if (temp1 >  10)
         {
             sum6 = sum6+temp1;
         }
    }
    p->InsertItem(sum);
    p->InsertItem(sum1);
    p->InsertItem(sum2);
    p->InsertItem(sum3);
    p->InsertItem(sum4);
    p->InsertItem(sum5);
    p->InsertItem(sum6);

    cout << endl;

    p->ResetTree(IN_ORDER);
    for(int i = 0 ; i<7 ; i++)
    {
        p->GetNextItem(temp,IN_ORDER,found);
        cout <<" "<<temp;
    }

   /* for(int i = 0 ; i<7; i++ )
    {
        t->GetNextItem(temp,IN_ORDER,found);
        sum = sum+temp;

    }

    cout << "sum : " << sum;*/





    return 0;
}
