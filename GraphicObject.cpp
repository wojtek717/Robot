//
// Created by Wojciech Konury on 05.05.18.
//

#include <fstream>
#include <cmath>
#include "GraphicObject.h"

using namespace std;

GraphicObject::GraphicObject()
{
    orientationAngle = 0;
}

void GraphicObject::SetLocation(double x, double y)
{
    location[0] = x;
    location[1] = y;
}


void GraphicObject::SetLocation(Vector2D loc)
{
    location = loc;
}


Vector2D GraphicObject::GetLocation()
{
    return location;
}

void GraphicObject::SetOrientationAngle(double angle)
{
    orientationAngle += angle;
}

double GraphicObject::GetOrientationAngleRad()
{
    return orientationAngle * M_PI / 180;
}

bool GraphicObject::SaveToFile()
{
    std::fstream file;

    file.open(fileName, std::ios::out);

    if(file.is_open())
    {
        for (int i = 0; i < VerticesSize(); ++i)
        {
            file << GetVertex(i) << std::endl;
        }

        file.close();

        return true;
    } else
    {
        std::cout << "CANT OPEN FILE " << fileName << std::endl;
        return false;
    }
}

void GraphicObject::SetFileName(std::string fname)
{
    fileName = fname;
}

const char * GraphicObject::GetFileName()
{
    const char * c = fileName.c_str();
    return c;
}
