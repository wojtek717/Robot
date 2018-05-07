//
// Created by Wojciech Konury on 06.05.18.
//

#include <cmath>
#include "Robot.h"

Robot::Robot()
{
    setLocation(0,0);
    SetOrientationAngle(0);

    AddVertex(
            GetLocation()[0] + -5,
            GetLocation()[1] + 5);

    AddVertex(
            GetLocation()[0] + 0,
            GetLocation()[1] + 5);

    AddVertex(
            GetLocation()[0] + 5,
            GetLocation()[1] + 0);

    AddVertex(
            GetLocation()[0] + 0,
            GetLocation()[1] + -5);

    AddVertex(
            GetLocation()[0] + -5,
            GetLocation()[1] + -5);
}

void Robot::Move(double distance)
{
    double a;
    double b;

    a = cos(GetOrientationAngleRad()) * distance;
    b = sin(GetOrientationAngleRad()) * distance;

    setLocation(
            GetLocation()[0] + a,
            GetLocation()[1] + b
            );

    Draw();

}

void Robot::Rotate(double angle)
{
    SetOrientationAngle(angle);
    Draw();


}

void Robot::Draw()
{
    RemoveVertices();

    AddVertex(
            GetLocation()[0] + (5*cos(0+GetOrientationAngleRad())),
            GetLocation()[1] + (5*sin(0+GetOrientationAngleRad())));

    AddVertex(
            GetLocation()[0] + (5*cos(M_PI/2+GetOrientationAngleRad())),
            GetLocation()[1] + (5*sin(M_PI/2+GetOrientationAngleRad())));

    AddVertex(
            GetLocation()[0] + (5*sqrt(2)*cos(3*M_PI/4+GetOrientationAngleRad())),
            GetLocation()[1] + (5*sqrt(2)*sin(3*M_PI/4+GetOrientationAngleRad())));

    AddVertex(
            GetLocation()[0] + (5*sqrt(2)*cos(5*M_PI/4+GetOrientationAngleRad())),
            GetLocation()[1] + (5*sqrt(2)*sin(5*M_PI/4+GetOrientationAngleRad())));

    AddVertex(
            GetLocation()[0] + (5*cos(3*M_PI/2+GetOrientationAngleRad())),
            GetLocation()[1] + (5*sin(3*M_PI/2+GetOrientationAngleRad())));
}
