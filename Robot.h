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
    /*! Robot's movement's path */
    Path path;

    /*! Calculates and saves vertices after movement or rotate*/
    void DrawVertices();

public:
    /*! Constructor for Robot
     * @param[in] rfile file where Robot's vertices are save to
     * @param[in] pfile file where path's vertices are save to*/
    Robot(std::string rfile, std::string pfile, Vector2D position);

    /*! Moves robot by a given distance
     * @param[in] distance distance to move*/
    void Move(double distance);

    /*! Rotates robot by a given angle expressed in degrees
     * @param[in] angle rotation angle expressed in degrees*/
    void Rotate(double angle);

    /*! @return reference to path*/
    Path& GetPath();
};


#endif //ROBOT_ROBOT_H
