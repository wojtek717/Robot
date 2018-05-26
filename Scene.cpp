//
// Created by Wojciech Konury on 21.05.18.
//

#include <unistd.h>
#include <string>
#include <sstream>
#include "Scene.h"
#include "lacze_do_gnuplota.h"

using namespace std;

void Scene::Render()
{
    Vector2D position;
    std::string rfile;
    std::string pfile;
    std::ostringstream oss;

    cout << "How many robots do you want?" << endl;
    cin >> amountOfRobots;

    for (int i = 0; i < amountOfRobots; ++i)
    {
        position[0] = 100 * i;
        position[1] = 100 * i;

        oss << "rv" << i << ".dat";
        rfile = oss.str();
        oss.str("");
        oss.clear();

        oss << "pathv" << i << ".dat";
        pfile = oss.str();
        oss.str("");
        oss.clear();

        robots.emplace_back(rfile, pfile, position);
    }

    for(Robot r : robots)
    {
        Lacze.DodajNazwePliku(r.GetFileName(),PzG::RR_Ciagly,2);
        Lacze.DodajNazwePliku(r.GetPath().GetFileName(),PzG::RR_Ciagly,5);
    }

    Lacze.ZmienTrybRys(PzG::TR_2D);
    Lacze.Rysuj();

    Menu();
}

void Scene::RenderMove(double distance, unsigned R)
{
    int i = 0;

    std::list<Robot>::iterator robot = robots.begin();
    std::advance(robot, R);

    do
    {
        if(i > 0)
        {
            robot->GetPath().RemoveLastVertex();
        }

        if (distance > 0)
        {
            robot->Move(1);
        } else
        {
            robot->Move(-1);
        }

        Lacze.Rysuj();

        usleep(2000);

        i++;
    }while (i < abs(distance));
}

void Scene::RenderRotate(double angle, unsigned R)
{
    int i = 0;

    std::list<Robot>::iterator robot = robots.begin();
    std::advance(robot, R);

    do
    {
        if(angle > 0)
        {
            robot->Rotate(1);
        } else
        {
            robot->Rotate(-1);
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

    unsigned R;

    do
    {
        cout << "1 - Move" << endl;
        cout << "2 - Rotate" << endl;
        cout << "3 - Choose robot" << endl;
        cout << "9 - Exit" << endl;
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "How long: " << endl;
                cin >> input;

                RenderMove(input, R);

                //TODO Dac dla kazdego z robotow
                cout << "Amount of vertices: " << robots.front().GetPath().VerticesSize() << endl;
                break;

            case 2:
                cout << "How much: " << endl;
                cin >> input;

                RenderRotate(input, R);

                break;

            case 3:
                do
                {
                    cout << "What robot? " << endl;
                    cin >> R;

                    if (robots.size() < R)
                    {
                        cout << "There is no robot like that" << endl;
                    }
                }while (robots.size() < R);


                break;

            case 9:
                cout << "Bye" << endl;

                for (int i = 0; i < amountOfRobots; ++i)
                {
                    std::string file;
                    std::ostringstream oss;

                    oss << "rv" << i << ".dat";
                    file = oss.str();
                    remove(file.c_str());
                    oss.str("");
                    oss.clear();

                    oss << "pathv" << i << ".dat";
                    file = oss.str();
                    remove(file.c_str());
                    oss.str("");
                    oss.clear();
                }
                break;

            default:
                cout << "Bad imput" << endl;
        }
    }while (choice != 9 );

}
