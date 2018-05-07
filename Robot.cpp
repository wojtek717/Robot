//
// Created by Wojciech Konury on 06.05.18.
//

#include <cmath>
#include "Robot.h"

void Robot::Move(double distance)
{
    double a;
    double b;
    double radOrientationAngle;
    double OrientationAngle = GetOrientationAngle();

    radOrientationAngle = OrientationAngle * 3.14 / 180;

    a = cos(radOrientationAngle) * distance;
    b = sin(radOrientationAngle) * distance;

    setLocation(
            GetLocation()[0] + a,
            GetLocation()[1] + b
            );
}
