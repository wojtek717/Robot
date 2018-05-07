#include <iostream>
#include <iomanip>
#include <fstream>
#include "lacze_do_gnuplota.h"
#include "GraphicObject.h"
#include "Robot.h"
#include "Path.h"


using namespace std;


int main()
{
    Robot rb;

    rb.setLocation(0,0);
    cout << rb.GetLocation() << endl;
    rb.SetOrientationAngle(90);
    cout << rb.GetOrientationAngle() << endl;
    rb.Move(50);
    cout << rb.GetLocation() << endl;
}