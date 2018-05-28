//
// Created by Wojciech Konury on 28.05.18.
//

#ifndef ROBOT_OBSTACLE_H
#define ROBOT_OBSTACLE_H


#include "GraphicObject.h"

class Obstacle : public GraphicObject
{
private:

    void DrawVertices();

public:
    Obstacle(std::string fname, Vector2D location);
};


#endif //ROBOT_OBSTACLE_H
