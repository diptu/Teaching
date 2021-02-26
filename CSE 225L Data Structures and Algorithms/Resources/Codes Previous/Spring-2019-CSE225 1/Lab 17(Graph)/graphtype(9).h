#ifndef GRAPHTYPE_H
#define GRAPHTYPE_H

#include "stacktype.h"
#include"quetype.h"
template<class VertexType>

class graphtype
{
    public:
        graphtype();
        graphtype(int maxV);
        ~graphtype();
        void MakeEmpty();
        bool IsEmpty();
        bool IsFull();
        void AddVertex(VertexType);
        void AddEdge(VertexType,VertexType,int);
        int WeightIs(VertexType,VertexType);
        void GetToVertices(VertexType,QueType<VertexType>&);
        void ClearMarks();
        void MarkVertex(VertexType);
        bool IsMarked(VertexType);
        void DepthFirsthSearch(VertexType,VertexType);
        void BreadthFirsthSearch(VertexType,VertexType);

    protected:

    private:
        int numVertices;
        int maxVertices;
        VertexType* vertices;
        int **edges;
        bool *marks;


};

#endif // GRAPHTYPE_H
