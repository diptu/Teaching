#include <iostream>
#include "graphtype.h"
#include "graphtype.cpp"

using namespace std;

int main()
{
    GraphType<char> G1;
    G1.AddVertex('A');
    G1.AddVertex('B');
    G1.AddVertex('C');
    G1.AddVertex('D');
    G1.AddVertex('E');
    G1.AddVertex('F');
    G1.AddVertex('G');
    G1.AddVertex('H');

    G1.AddEdge('A','B',1);
    G1.AddEdge('B','A',1);
    G1.AddEdge('A','C',1);
    G1.AddEdge('A','D',1);
    G1.AddEdge('D','A',1);
    G1.AddEdge('D','E',1);
    G1.AddEdge('D','G',1);
    G1.AddEdge('G','F',1);
    G1.AddEdge('F','H',1);
    G1.AddEdge('H','E',1);

    cout<<"OutDegree of vertex D :"<<G1.OutDegree('D')<<endl;
    if(G1.FoundEdge('A','D'))
        cout<<"There is an edge between A and D"<<endl;
    else
        cout<<"There is no edge between A and D"<<endl;

    if(G1.FoundEdge('B','D'))
        cout<<"There is an edge between B and D"<<endl;
    else
        cout<<"There is no edge between B and D"<<endl;

    G1.DepthFirstSearch('B','E');
    G1.DepthFirstSearch('E','B');
    G1.BreadthFirstSearch('B','E');
    G1.BreadthFirstSearch('E','B');
    return 0;
}
