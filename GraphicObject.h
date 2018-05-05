//
// Created by Wojciech Konury on 05.05.18.
//

#ifndef ROBOT_GRAPHICOBJECT_H
#define ROBOT_GRAPHICOBJECT_H

#include <iostream>
#include "Vector2D.h"

class GraphicObject
{
private:
    Vector2D targetLocation;
    Vector2D arrVertex[7];

    Vector2D location;

public:
    void InicjalizujKsztalt();

    bool ZapiszDoPliku(const char* sNazwaPliku) const;

    bool ZapiszDoStrumienia(std::ostream& StrmWy) const;

    void ZmienPolozenie(double x, double y);
};


#endif //ROBOT_GRAPHICOBJECT_H
