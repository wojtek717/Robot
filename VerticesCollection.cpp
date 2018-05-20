//
// Created by Wojciech Konury on 05.05.18.
//

#include "VerticesCollection.h"

void VerticesCollection::AddVertex(Vector2D Vertex)
{
    vertices.push_back(Vertex);
}

void VerticesCollection::RemoveVertices()
{
    vertices.clear();
}

Vector2D VerticesCollection::GetVertex(int position)
{
    return vertices[position];
}

void VerticesCollection::AddVertex(double x, double y)
{
    Vector2D v(x,y);
    vertices.push_back(v);
}

int VerticesCollection::VerticesSize()
{
    return vertices.size();
}

void VerticesCollection::RemoveLastVertex()
{
    vertices.pop_back();
}
