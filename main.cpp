#include <iostream>
#include <iomanip>
#include <fstream>
#include <unistd.h>
#include "lacze_do_gnuplota.h"
#include "GraphicObject.h"
#include "Robot.h"
#include "Path.h"


using namespace std;


int main()
{
    Robot rb("rv.dat", "pathv.dat");
    char Znak;
    PzG::LaczeDoGNUPlota Lacze;

    int choice;
    int i;
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

                do
                {
                    rb.Move(input);
                    Lacze.Rysuj();

                    i++;
                    usleep(3000);
                }while(i < input * input/300);
                i = 0;

                break;

            case 2:
                cout << "How much: " << endl;
                cin >> input;

                do
                {
                    rb.Rotate(input);
                    Lacze.Rysuj();

                    i++;
                    usleep(3000);
                }while (i < input * input/100);
                i = 0;

                break;

            case 9:
                cout << "Bye" << endl;
                break;

            default:
                cout << "Bad imput" << endl;
        }

    }while (choice != 9);
}