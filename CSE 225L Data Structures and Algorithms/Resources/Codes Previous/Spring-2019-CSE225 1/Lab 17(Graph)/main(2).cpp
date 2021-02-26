#include<iostream>
#include"graphtype.cpp"
#include"graphtype.h"
using namespace std;

int main ()
{
    GraphType<char> ob;

    ob.AddVertex('A');
    ob.AddVertex('B');
    ob.AddVertex('C');
    ob.AddVertex('D');
    ob.AddVertex('E');
    ob.AddVertex('F');
    ob.AddVertex('G');
    ob.AddVertex('H');

    ob.AddEdge('F','H', 1);
    ob.AddEdge('H','E', 1);
    ob.AddEdge('D','E', 1);
    ob.AddEdge('D','G', 1);
    ob.AddEdge('G','F', 1);
    ob.AddEdge('D','A', 1);
    ob.AddEdge('A','D', 1);
    ob.AddEdge('A','B', 1);
    ob.AddEdge('A','C', 1);
    ob.AddEdge('B','A', 1);
     cout<< " out degree vertex : " << ob.OutDegree('D')<<endl;

     if(ob.FoundEdge('A', 'D'))
        cout<<"There is an edge."<<endl;
    else
        cout<<"There is no edge."<<endl;

    if(ob.FoundEdge('B', 'D'))
        cout<<"There is an edge."<<endl;
    else
    cout<<"There is no edge." << endl;

   cout<<endl;
   ob.DepthFirstSearch('B','E');
   cout<<endl;
   ob.DepthFirstSearch('E','B');
   ob.BreadthFirstSearch('B','E');
   ob.BreadthFirstSearch('E','B');


}
