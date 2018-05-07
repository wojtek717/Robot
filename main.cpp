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

    char                  Znak;
    PzG::LaczeDoGNUPlota  Lacze;

    Lacze.DodajNazwePliku("rv.dat",PzG::RR_Ciagly,2);
    Lacze.ZmienTrybRys(PzG::TR_2D);


    cout << rb.GetLocation() << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << rb.GetVertex(i) << endl;
    }

    Lacze.Rysuj();
    cin >> noskipws >> Znak;

    /*
    rb.Rotate(90);
    cout << rb.GetOrientationAngle() << endl << endl;

    for (int i = 0; i < 5; ++i)
    {
        cout << rb.GetVertex(i) << endl;
    }

    Lacze.Rysuj();
    cin >> noskipws >> Znak;
*/

    cout << "*****************" << endl << endl;

    rb.Move(50);
    cout << rb.GetLocation() << endl << endl;

    for (int i = 0; i < 5; ++i)
    {
        cout << rb.GetVertex(i) << endl;
    }

    Lacze.Rysuj();
    cin >> noskipws >> Znak;
}