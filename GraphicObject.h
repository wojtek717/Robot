//
// Created by Wojciech Konury on 05.05.18.
//

#ifndef ROBOT_GRAPHICOBJECT_H
#define ROBOT_GRAPHICOBJECT_H

#include <iostream>
#include "Vector2D.h"
#include "VerticesCollection.h"

class GraphicObject : public VerticesCollection
{
private:
    Vector2D location;
    double orientationAngle;

public:
    GraphicObject();

    void SetLocation(double x, double y);
    Vector2D GetLocation();

    void SetOrientationAngle(double angle);
    double GetOrientationAngle();
    double GetOrientationAngleRad();
};


#endif //ROBOT_GRAPHICOBJECT_H
