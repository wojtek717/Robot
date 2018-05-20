//
// Created by Wojciech Konury on 05.05.18.
//

#ifndef ROBOT_GRAPHICOBJECT_H
#define ROBOT_GRAPHICOBJECT_H

#include <iostream>
#include <string>
#include "Vector2D.h"
#include "VerticesCollection.h"

/*!
 *  This class fully represents graphic object in program.
 *  GraphicObject inherit from VerticesCollection */
class GraphicObject : public VerticesCollection
{
private:

    /*! Current position of object */
    Vector2D location;

    /*! Current rotation of object expressed in degrees */
    double orientationAngle;

    /*! File name where vertices are save to */
    std::string fileName;

public:
    /*! Constructor for GraphicObject */
    GraphicObject();

    /*! Sets new location for object
     * @param[in] x coordinate x
     * @param[in] y coordinate y */
    void SetLocation(double x, double y);

    /*! @return Current location of object */
    Vector2D GetLocation();

    /*! Sets new rotation of object of object in degrees
     * @param[in] angle rotation angle expressed in degrees */
    void SetOrientationAngle(double angle);

    /*! @return Current rotation of object expressed in radians*/
    double GetOrientationAngleRad();

    /*! Sets file name with vertices for graphic object
     * @param[in] fname file name */
    void SetFileName(std::string fname);

    /*! @return File name for graphic object */
    const char * GetFileName();

    /*! Saves vertices to file
     * @return Is file successfully saved? */
    bool SaveToFile();
};


#endif //ROBOT_GRAPHICOBJECT_H
