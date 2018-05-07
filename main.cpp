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
    rb.Rotate(90);
    cout << rb.GetOrientationAngle() << endl << endl;

    for (int i = 0; i < 5; ++i)
    {
        cout << rb.GetVertex(i) << endl;
    }

    cout << "*****************" << endl << endl;

    rb.Move(5);
    cout << rb.GetLocation() << endl << endl;

    for (int i = 0; i < 5; ++i)
    {
        cout << rb.GetVertex(i) << endl;
    }


}