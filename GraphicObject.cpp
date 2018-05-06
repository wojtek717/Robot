//
// Created by Wojciech Konury on 05.05.18.
//

#include <fstream>
#include "GraphicObject.h"

using namespace std;

GraphicObject::GraphicObject()
{
    orientationAngle = 0;
}

void GraphicObject::setLocation(int x, int y)
{
    location[0] = x;
    location[1] = y;
}

Vector2D GraphicObject::GetLocation()
{
    return location;
}

void GraphicObject::SetOrientationAngle(double angle)
{
    orientationAngle = angle;
}

double GraphicObject::GetOrientationAngle()
{
    return orientationAngle;
}
