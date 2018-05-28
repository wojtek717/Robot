//
// Created by Wojciech Konury on 06.05.18.
//

#include <cmath>
#include <fstream>
#include <iostream>
#include "Robot.h"
#include "Consts.h"
#include "Obstacle.h"

Robot::Robot(std::string rfile, std::string pfile, Vector2D position)
{
    SetFileName(rfile);
    path.SetFileName(pfile);

    SetLocation(position);
    SetOrientationAngle(0);

    path.AddVertex(GetLocation());

    DrawVertices();
    path.SaveToFile();
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
    path.SetLocation(GetLocation()[0], GetLocation()[1]);

}

void Robot::Check(const std::list<Robot> &robots, const std::list<Obstacle> &obstacles)
{
    for (const auto &robot : robots) {
        if (&robot == this) {
            continue;
        }

        if (location.Distance(robot.location) <= 2 * Radius) {
            throw "Kolizja z innym robotem";
        }
    }

    for (const auto &obstacle : obstacles) {
        Vector2D obsLoc = obstacle.GetLocation();

        if (
            (abs(location[0] - obsLoc[0]) <= OBSTACLEX + Radius) &&
            (abs(location[1] - obsLoc[2]) <= OBSTACLEY + Radius)
            ) {
            throw "Kolizja z przeszkodą";
        }
    }
}

void Robot::Render()
{
  DrawVertices();
  path.SaveToFile();
}

void Robot::Rotate(double angle)
{

    SetOrientationAngle(angle);
    DrawVertices();
}

void Robot::DrawVertices()
{
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

    SaveToFile();
}

Path& Robot::GetPath()
{
    return path;
}
