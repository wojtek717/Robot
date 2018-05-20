//
// Created by Wojciech Konury on 05.05.18.
//

#ifndef ROBOT_VERTICESCOLLECTION_H
#define ROBOT_VERTICESCOLLECTION_H


#include <vector>
#include "Vector2D.h"

/*! Set of vertices.
 *  Contain std::vector<Vector2D> where vertices are held and methods to Get/Set/Modify it.
 */
class VerticesCollection
{
private:
    /*! vertices are 2D objects (x,y) which are contain here */
    std::vector<Vector2D> vertices;

public:
    /*!
     * Adds a new vertex to the end of the vertices
     * @param[in] Vertex vertex to add*/
    void AddVertex(Vector2D Vertex);

    /*!
     * Creates a new vertex and adds it to the end of the vertices
     * @param[in] x coordinate x
     * @param[in] y coordinate y */
    void AddVertex(double x, double y);

    /*!
     * Remove all vertices */
    void RemoveVertices();

    /*!
     * Returns vertex at given position
     * @param[in] position vertex's index
     * @return Vertex from given position */
    Vector2D GetVertex(int position);

    /*!
     *  @return Number of elements in vertices*/
    int VerticesSize();

    /*!
     *  Removes vertex from last position in vertices */
    void RemoveLastVertex();
};


#endif //ROBOT_VERTICESCOLLECTION_H
