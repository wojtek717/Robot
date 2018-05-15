//
// Created by Wojciech Konury on 06.05.18.
//

#ifndef ROBOT_ROBOT_H
#define ROBOT_ROBOT_H

#include <string>
#include "GraphicObject.h"
#include "Path.h"

class Robot : public GraphicObject
{
private:
    Path path;

    void DrawVertices();

public:
    Robot(std::string rfile, std::string pfile);
    void Move(double distance);
    void Rotate(double angle);

    Path GetPath();
};


#endif //ROBOT_ROBOT_H
