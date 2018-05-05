//
// Created by Wojciech Konury on 05.05.18.
//

#include <fstream>
#include "GraphicObject.h"

using namespace std;

/*!
 * Przypisuje wartości współrzędnych poszczególnym wierzchołkom.
 *
 * Uwaga:Ta metoda to tylko tymczasowe rozwiązanie. Ona powinna
 *       być w klasie pochodnej.
 */
void GraphicObject::InicjalizujKsztalt()
{
    arrVertex[0][0] =   0;  arrVertex[0][1]=   0;
    arrVertex[1][0] =  30;  arrVertex[1][1]=   0;
    arrVertex[2][0] =   0;  arrVertex[2][1]= -30;
    arrVertex[3][0] = -30;  arrVertex[3][1]= -30;
    arrVertex[4][0] = -30;  arrVertex[4][1]=  30;
    arrVertex[5][0] =   0;  arrVertex[5][1]=  30;
    arrVertex[6][0] =  30;  arrVertex[6][1]=   0;

    location[0] = 0;
    location[1] = 0;
}



/*!
 *  Zmiania współrzędne położenia punktu, względem którego tworzony
 *  jest obrys obiektu.
 *  \param[in] x - współrzędna x-owa nowego położenia.
 *  \param[in] y - współrzędna y-owa nowego położenia.
 */
void GraphicObject::ZmienPolozenie(double x, double y)
{
    targetLocation[0] = x + location[0];
    targetLocation[1] = y + location[1];

    location[0] = location[0] + targetLocation[0];
    location[1] = location[1] + targetLocation[1];
}


/*!
 * Zapisuje do strumienia współrzędne globalne wierzchołków
 * obrysu obiektu.
 * \param[in,out] - strumień, do którego wpisane zostałe współrzędne
 *                  wierzchołków.
 * \retval true - gdy operacja powiodła się,
 * \retval false - w przypadku przeciwnym.
 */
bool GraphicObject::ZapiszDoStrumienia(std::ostream& StrmWy) const
{
    Vector2D  W_glob;

    for (const Vector2D&  W_lok : arrVertex)
    {
        W_glob = W_lok + targetLocation;
        StrmWy << W_glob << endl;
    }


    return !StrmWy.fail();
}


/*!
 * Zapisuje do pliku współrzędne globalne wierzchołków
 * obrysu obiektu.
 * \param[in,out] - strumień, do którego wpisane zostałe współrzędne
 *                  wierzchołków.
 * \retval true - gdy operacja powiodła się,
 * \retval false - w przypadku przeciwnym.
 */
bool GraphicObject::ZapiszDoPliku(const char* sNazwaPliku) const
{
    ofstream   StrmWy(sNazwaPliku);

    if (!StrmWy.is_open()) {
        cerr << endl
             << "Blad: Otwarcie do zapisu pliku '" << sNazwaPliku
             << "' nie powiodlo sie." << endl
             << endl;
        return false;
    }
    return ZapiszDoStrumienia(StrmWy);
}