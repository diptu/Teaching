#ifndef GRAPHTYPE_H_INCLUDED
#define GRAPHTYPE_H_INCLUDED
#include "stacktype.h"
#include "quetype.h"
template <class VertexType>
class GraphType
{
public:
    GraphType();
    GraphType(int);
    ~GraphType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void AddVertex(VertexType);
    void AddEdge(VertexType,VertexType,int);
    int WeightIs(VertexType,VertexType);
    void GetToVerteices(VertexType,QueType<VertexType>&);
    void ClearMArks();
    void MarkVertex(VertexType);
    bool IsMarked(VertexType);
    void DepthFirstSearch(VertexType,VertexType);
    void BreadFirstSearch(VertexType,VertexType);
private:
    int numVertices;
    int maxVertices;
    VertexType* vertices;
    int **edges;
    bool *marks;
};

#endif // GRAPHTYPE_H_INCLUDED
