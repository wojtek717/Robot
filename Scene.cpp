//
// Created by Wojciech Konury on 21.05.18.
//

#include <unistd.h>
#include "Scene.h"
#include "lacze_do_gnuplota.h"

using namespace std;

void Scene::Render()
{

    robots.emplace_back("rv.dat", "pathv.dat");

    Lacze.DodajNazwePliku(robots.front().GetFileName(),PzG::RR_Ciagly,2);
    Lacze.DodajNazwePliku(robots.front().GetPath().GetFileName(),PzG::RR_Ciagly,5);
    Lacze.ZmienTrybRys(PzG::TR_2D);

    Lacze.Rysuj();

    Menu();
}

void Scene::RenderMove(double distance)
{
    int i = 0;

    do
    {
        if(i > 0)
        {
            robots.front().GetPath().RemoveLastVertex();
        }

        if (distance > 0)
        {
            robots.front().Move(1);
        } else
        {
            robots.front().Move(-1);
        }

        Lacze.Rysuj();

        usleep(2000);

        i++;
    }while (i < abs(distance));
}

void Scene::RenderRotate(double angle)
{
    int i = 0;
    do
    {
        if(angle > 0)
        {
            robots.front().Rotate(1);
        } else
        {
            robots.front().Rotate(-1);
        }

        Lacze.Rysuj();

        usleep(2000);

        i++;
    }while (i < abs(angle));
}

void Scene::Menu()
{
    int choice;
    int input;

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

                RenderMove(input);

                cout << robots.front().GetPath().VerticesSize() << endl;
                break;

            case 2:
                cout << "How much: " << endl;
                cin >> input;

                RenderRotate(input);

                break;

            case 9:
                cout << "Bye" << endl;
                break;

            default:
                cout << "Bad imput" << endl;
        }
    }while (choice != 9 );

}
