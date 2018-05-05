/*!
 * \file
 * \brief Zawiera wywołanie funkcji main
 *
 * Główny moduł programu wraz z wywołaniem funkcji main.
 */

#include <iostream>
#include <iomanip>
#include <fstream>
#include "lacze_do_gnuplota.h"
#include "GraphicObject.h"


using namespace std;


//GIT TEST COMMENT
int main()
{
    char Znak;
    PzG::LaczeDoGNUPlota Lacze;  // Ta zmienna jest potrzebna do wizualizacji
    // rysunku prostokata
    GraphicObject Ob;

    Ob.InicjalizujKsztalt();


    //-------------------------------------------------------
    //  Wspolrzedne wierzcholkow beda zapisywane w pliku "prostokat.dat"
    //  Ponizsze metody powoduja, ze dane z pliku beda wizualizowane
    //  na dwa sposoby:
    //   1. Rysowane jako linia ciagl o grubosci 2 piksele
    //
    Lacze.DodajNazwePliku("figury/robot.dat",PzG::RR_Ciagly,2);
    //
    //  Ustawienie trybu rysowania 2D, tzn. rysowany zbiór punktów
    //  znajduje się na wspólnej płaszczyźnie. Z tego powodu powoduj
    //  jako wspolrzedne punktow podajemy tylko x,y.
    //
    Lacze.ZmienTrybRys(PzG::TR_2D);


    if (!Ob.ZapiszDoPliku("figury/robot.dat")) return 1;
    Lacze.Rysuj(); // <- Tutaj gnuplot rysuje, to co zapisaliśmy do pliku
    cout << "Nacisnij ENTER, aby kontynuowac" << endl;
    cin >> noskipws >> Znak;

    //----------------------------------------------------------
    // Zmienia pozycje obiektu i zapisuje współrzędne jego wierzchołków
    //
    Ob.ZmienPolozenie(100,100);
    if (!Ob.ZapiszDoPliku("figury/robot.dat")) return 1;
    Lacze.Rysuj(); // <- Tutaj gnuplot rysuje, to co zapisaliśmy do pliku
    cout << "Nacisnij ENTER, aby kontynuowac" << endl;
    cin >> noskipws >> Znak;

    Ob.ZmienPolozenie(50,50);
    if (!Ob.ZapiszDoPliku("figury/robot.dat")) return 1;
    Lacze.Rysuj(); // <- Tutaj gnuplot rysuje, to co zapisaliśmy do pliku
    cout << "Nacisnij ENTER, aby kontynuowac" << endl;
    cin >> noskipws >> Znak;
}