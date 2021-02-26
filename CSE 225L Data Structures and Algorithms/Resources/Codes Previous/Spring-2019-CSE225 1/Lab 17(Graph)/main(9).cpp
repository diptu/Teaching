#include<iostream>
#include"graphtype.cpp"
using namespace std;

int main ()
{
    GraphType<char> g;
    g.AddVertex('G');
    g.AddVertex('D');
    g.AddVertex('A');
    g.AddVertex('B');
    g.AddVertex('C');
    g.AddVertex('E');
    g.AddVertex('H');
    g.AddVertex('F');

    g.AddEdge('G','F',1);
    g.AddEdge('F','H',1);
    g.AddEdge('H','E',1);
    g.AddEdge('D','E',1);
    g.AddEdge('D','A',1);
    g.AddEdge('A','D',1);
    g.AddEdge('A','B',1);
    g.AddEdge('B','A',1);
    g.AddEdge('A','C',1);
    g.AddEdge('D','G',1);


}
