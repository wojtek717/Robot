#include <iostream>
#include <iomanip>
#include <fstream>
#include <unistd.h>
#include "lacze_do_gnuplota.h"
#include "GraphicObject.h"
#include "Robot.h"
#include "Path.h"
#include "Consts.h"


using namespace std;


int main()
{
    Robot rb("rv.dat", "pathv.dat");
    PzG::LaczeDoGNUPlota Lacze;

    int choice;
    double i;
    double input;

    Lacze.DodajNazwePliku(rb.GetFileName(),PzG::RR_Ciagly,2);
    Lacze.DodajNazwePliku(rb.GetPath().GetFileName(),PzG::RR_Ciagly,5);
    Lacze.ZmienTrybRys(PzG::TR_2D);


    Lacze.Rysuj();

    do
    {
        cout << "1 - Move" << endl;
        cout << "2 - Rotate" << endl;
        cout << "9 - Exit" << endl;
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "How long: " << endl;
                cin >> input;

                i = 0;
                do
                {
                    if(i > 0)
                    {
                        rb.GetPath().RemoveLastVertex();
                    }
                    rb.Move(1);
                    Lacze.Rysuj();

                    usleep(2000);

                    i++;
                }while (i < input);

                cout << rb.GetPath().VerticesSize() << endl;
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