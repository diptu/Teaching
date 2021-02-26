#include <iostream>
#include "  quetype.cpp"
using namespace std;


// m is size of coins array (number of different coins)
int minCoins(int coins[], int m, int V)
{
   // base case
   if (V == 0) return 0;

   // Initialize result
   int res = INT_MAX;

   // Try every coin that has smaller value than V
   for (int i=0; i<m; i++)
   {
     if (coins[i] <= V)
     {
         int sub_res = minCoins(coins, m, V-coins[i]);

         // Check for INT_MAX to avoid overflow and see if
         // result can minimized
         if (sub_res != INT_MAX && sub_res + 1 < res)
            res = sub_res + 1;
     }
   }
   return res;
}

// Driver program to test above function
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

    int m = 4;//sizeof(coins)/sizeof(coins[0]);
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
         m = 4;//sizeof(coins)/sizeof(coins[0]);
     V = 40;
    cout << "Minimum coins required is "
         << minCoins(coins, m, V);
    return 0;




    cout << "Hello world!" << endl;
    return 0;
}
