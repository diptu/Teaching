#include <iostream>
#include "  quetype.cpp"
using namespace std;




int minCoins(int coins[], int m, int V)
{

   if (V == 0) return 0;


   int res = INT_MAX;


   for (int i=0; i<m; i++)
   {
     if (coins[i] <= V)
     {
         int sub_res = minCoins(coins, m, V-coins[i]);


         if (sub_res != INT_MAX && sub_res + 1 < res)
            res = sub_res + 1;
     }
   }
   return res;
}


int main()
{
     QueType<int> ob;
    ob.Enqueue(3);

    ob.Enqueue(2);
    ob.Enqueue(3);
    ob.Enqueue(5);
      QueType<int>ob1;
         int a;
    for(int i=0; i<4; i++)
    {

        ob.Dequeue(a);

        ob1.Enqueue(a);



    }

int coins[4];
    for(int i=0; i<4; i++)
    {

        ob1.Dequeue(a);

        ob.Enqueue(a);
    coins[i] =a;


    }

    int m = 4;
    int V = 11;
    cout << "Minimum coins required is "
         << minCoins(coins, m, V)<<endl;
         QueType<int> ob3;
    ob3.Enqueue(3);

    ob3.Enqueue(5);
    ob3.Enqueue(20);
    ob3.Enqueue(30);
      QueType<int>ob4;

    for(int i=0; i<4; i++)
    {

        ob3.Dequeue(a);

        ob4.Enqueue(a);



    }
      for(int i=0; i<4; i++)
    {

        ob4.Dequeue(a);

        ob3.Enqueue(a);
    coins[i] =a;


    }
         m = 4;
     V = 40;
    cout << "Minimum coins required is "
         << minCoins(coins, m, V);
    return 0;


}
