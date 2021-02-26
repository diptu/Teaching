#include<iostream>
#include"graphtype.cpp"
#include"graphtype.h"
using namespace std;

int main ()
{
    GraphType<char> g;

    g.AddVertex('A');
    g.AddVertex('B');
    g.AddVertex('C');
    g.AddVertex('D');
    g.AddVertex('E');
    g.AddVertex('F');
    g.AddVertex('G');
    g.AddVertex('H');

    g.AddEdge('F','H', 1);
    g.AddEdge('H','E', 1);
    g.AddEdge('D','E', 1);
    g.AddEdge('D','G', 1);
    g.AddEdge('G','F', 1);
    g.AddEdge('D','A', 1);
    g.AddEdge('A','D', 1);
    g.AddEdge('A','B', 1);
    g.AddEdge('A','C', 1);
    g.AddEdge('B','A', 1);
     cout<< " out degree vertex : " << g.OutDegree('D')<<endl;

     if(g.FoundEdge('A', 'D'))
        cout<<"There is an edge."<<endl;
    else
        cout<<"There is no edge."<<endl;

    if(g.FoundEdge('B', 'D'))
        cout<<"There is an edge."<<endl;
    else
    cout<<"There is no edge." << endl;

   cout<<endl;
   g.DepthFirstSearch('B','E');
   cout<<endl;
   g.DepthFirstSearch('E','B');
   g.BreadthFirstSearch('B','E');
   g.BreadthFirstSearch('E','B');


}
