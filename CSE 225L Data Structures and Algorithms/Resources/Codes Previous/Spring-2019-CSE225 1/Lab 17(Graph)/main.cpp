#include "graphtype.cpp"



int main()
{
    GraphType<char>obj;
    obj.AddVertex('A');
    obj.AddVertex('B');
    obj.AddVertex('C');
    obj.AddVertex('D');
    obj.AddVertex('E');
    obj.AddVertex('F');
    obj.AddVertex('G');

    obj.AddEdge('A','B',1);
    obj.AddEdge('A','C',1);
    obj.AddEdge('A','D',1);
    obj.AddEdge('B','A',1);
    obj.AddEdge('A','B',1);
    obj.AddEdge('D','A',1);
    obj.AddEdge('D','E',1);
    obj.AddEdge('D','G',1);
    obj.AddEdge('H','E',1);
    obj.AddEdge('G','F',1);
    obj.AddEdge('F','H',1);

    cout << obj.OutDegree('B') << endl;









    return 0;
}
