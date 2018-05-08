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

    char Znak;
    PzG::LaczeDoGNUPlota Lacze;

    int choice;
    double input;

    Lacze.DodajNazwePliku("rv.dat",PzG::RR_Ciagly,2);
    Lacze.DodajNazwePliku("pathv.dat",PzG::RR_Ciagly,5);
    Lacze.ZmienTrybRys(PzG::TR_2D);


    Lacze.Rysuj();

    do
    {
        cout << "1 - Move" << endl;
        cout << "2 - Rotate" << endl;
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "How long: " << endl;
                cin >> input;

                rb.Move(input);
                Lacze.Rysuj();
                break;

            case 2:
                cout << "How much: " << endl;
                cin >> input;

                rb.Rotate(input);
                Lacze.Rysuj();
                break;

            case 9:
                cout << "Bye" << endl;
                break;

            default:
                cout << "Bad imput" << endl;
        }

    }while (choice != 9);
}