//
// Created by Wojciech Konury on 05.05.18.
//

#ifndef ROBOT_VERTICESCOLLECTION_H
#define ROBOT_VERTICESCOLLECTION_H


#include <vector>
#include "Vector2D.h"

class VerticesCollection
{
private:
    std::vector<Vector2D> vertices;

public:
    void AddVertex(Vector2D Vertex);

    void RemoveVertices();

    Vector2D GetVertex(int position);
};


#endif //ROBOT_VERTICESCOLLECTION_H
