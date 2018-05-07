//
// Created by Wojciech Konury on 06.05.18.
//

#ifndef ROBOT_ROBOT_H
#define ROBOT_ROBOT_H


#include "GraphicObject.h"
#include "Path.h"

class Robot : public GraphicObject
{
private:
    Path path;

public:
    Robot();
    void Move(double distance);
    void Rotate(double angle);
    void Draw();


};


#endif //ROBOT_ROBOT_H
