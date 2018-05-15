//
// Created by Wojciech Konury on 07.05.18.
//

#include <fstream>
#include "Path.h"

//TODO ZAMIAST TEGO BEDZIE TA METODA NIZEJ ZAMIAST DO PLIKU I BEDZIE WYWOLYWANA W ROBOT
void Path::DrawVertices()
{
    //TODO TO MA BYC OSOBNA METODA ALBO W GraphicObject albo VerticesCollection
    std::fstream verticesPlick;

    verticesPlick.open("pathv.dat", std::ios::out);

    if(verticesPlick.is_open())
    {
        std::cout << "FILE OPENED" << std::endl;

        for (int i = 0; i < VertivesSize(); ++i)
        {
            verticesPlick << GetVertex(i) << std::endl;
        }

        verticesPlick.close();
    } else
    {
        std::cout << "CANT OPEN FILE" << std::endl;
    }
}
