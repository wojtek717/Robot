//
// Created by Wojciech Konury on 21.05.18.
//

#ifndef ROBOT_SCENE_H
#define ROBOT_SCENE_H


#include "Robot.h"
#include "lacze_do_gnuplota.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <fstream>
#include <string>

class Scene
{
private:
    int amountOfRobots;

    /*! List of Robot objects */
    std::list<Robot> robots;

    /*! Lacze which is use to render objects by GNUPlot */
    PzG::LaczeDoGNUPlota Lacze;

public:
    /*! Render and animate move
     * @param[in] distance distance to move*/
    void RenderMove(double distance, unsigned R);

    /*! Render and animate rotate
     * @param[in] angle angle to rotate expressed in degrees */
    void RenderRotate(double angle, unsigned R);

    /*! Prints menu */
    void Menu();

    /*! Render objects using GNUPlot and menu */
    void Render();

    void RemoveFiles(std::string fname);

    bool CheckColision();

};

#endif //ROBOT_SCENE_H
