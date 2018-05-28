//
// Created by Wojciech Konury on 28.05.18.
//

#include "Obstacle.h"
#include "Consts.h"

Obstacle::Obstacle(std::string fname, Vector2D location)
{
    SetFileName(fname);
    SetLocation(location);
    SetOrientationAngle(0);

    DrawVertices();
}

void Obstacle::DrawVertices()
{
    AddVertex(
            GetLocation()[0] + OBSTACLEX,
            GetLocation()[1] + OBSTACLEX);

    AddVertex(
            GetLocation()[0] + OBSTACLEX,
            GetLocation()[1] - OBSTACLEX);

    AddVertex(
            GetLocation()[0] - OBSTACLEX,
            GetLocation()[1] - OBSTACLEX);

    AddVertex(
            GetLocation()[0] - OBSTACLEX,
            GetLocation()[1] + OBSTACLEX);

    AddVertex(
            GetLocation()[0] + OBSTACLEX,
            GetLocation()[1] + OBSTACLEX);

    SaveToFile();
}
