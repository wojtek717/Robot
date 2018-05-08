//
// Created by Wojciech Konury on 06.05.18.
//

#include <cmath>
#include <fstream>
#include <iostream>
#include "Robot.h"

Robot::Robot()
{
    SetLocation(0, 0);
    SetOrientationAngle(0);

    path.AddVertex(GetLocation());

    DrawVertices();
    path.DrawVertices();
}

void Robot::Move(double distance)
{
    double a;
    double b;

    a = cos(GetOrientationAngleRad()) * distance;
    b = sin(GetOrientationAngleRad()) * distance;

    SetLocation(
            GetLocation()[0] + a,
            GetLocation()[1] + b
    );

    path.AddVertex(GetLocation());
    DrawVertices();
    path.DrawVertices();

}

void Robot::Rotate(double angle)
{
    SetOrientationAngle(angle);
    DrawVertices();


}

void Robot::DrawVertices()
{
    std::fstream verticesPlick;

    verticesPlick.open("rv.dat", std::ios::out);
    RemoveVertices();

    AddVertex(
            GetLocation()[0] + (50*cos(0+GetOrientationAngleRad())),
            GetLocation()[1] + (50*sin(0+GetOrientationAngleRad())));

    AddVertex(
            GetLocation()[0] + (50*cos(M_PI/2+GetOrientationAngleRad())),
            GetLocation()[1] + (50*sin(M_PI/2+GetOrientationAngleRad())));

    AddVertex(
            GetLocation()[0] + (50*sqrt(2)*cos(3*M_PI/4+GetOrientationAngleRad())),
            GetLocation()[1] + (50*sqrt(2)*sin(3*M_PI/4+GetOrientationAngleRad())));

    AddVertex(
            GetLocation()[0] + (50*sqrt(2)*cos(5*M_PI/4+GetOrientationAngleRad())),
            GetLocation()[1] + (50*sqrt(2)*sin(5*M_PI/4+GetOrientationAngleRad())));

    AddVertex(
            GetLocation()[0] + (50*cos(3*M_PI/2+GetOrientationAngleRad())),
            GetLocation()[1] + (50*sin(3*M_PI/2+GetOrientationAngleRad())));

    AddVertex(
            GetLocation()[0] + (50*cos(0+GetOrientationAngleRad())),
            GetLocation()[1] + (50*sin(0+GetOrientationAngleRad())));

    AddVertex(
            GetLocation()[0],
            GetLocation()[1]);

    if(verticesPlick.is_open())
    {
        std::cout << "FILE OPENED" << std::endl;

        for (int i = 0; i < 7; ++i)
        {
            verticesPlick << GetVertex(i) << std::endl;
        }

        verticesPlick.close();
    } else
    {
        std::cout << "CANT OPEN FILE" << std::endl;
    }
}
