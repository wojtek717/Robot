//
// Created by Wojciech Konury on 05.05.18.
//

#ifndef ROBOT_SVECTOR_H
#define ROBOT_SVECTOR_H

#include <iostream>

/*!
 *  Template for Vector
 */

template <typename STyp, int SWymiar>
class SVector
{
private:
    STyp  _Wsp[SWymiar];

public:
    SVector()
    {
        for (STyp &Wsp: _Wsp) Wsp = 0;
    }

    SVector(STyp x, STyp y)
    {
        _Wsp[0] = x;
        _Wsp[1] = y;
    }

    STyp Distance(const SVector<STyp, SWymiar> &vec);

    STyp  operator [] (unsigned int Ind) const
    {
        return _Wsp[Ind];
    }

    STyp &operator [] (unsigned int Ind)
    {
        return _Wsp[Ind];
    }

    SVector<STyp,SWymiar> operator - (const SVector<STyp,SWymiar> &Odjemnik) const;

    SVector<STyp,SWymiar> operator + (const SVector<STyp,SWymiar> &Skl2) const;

    SVector<STyp,SWymiar> operator * (double Mnoznik) const;
};


template <typename STyp, int SWymiar>
SVector<STyp,SWymiar> SVector<STyp,SWymiar>::operator - (const SVector<STyp,SWymiar> &Odjemnik) const
{
    SVector<STyp,SWymiar>  Wynik;

    for (unsigned int Ind = 0; Ind < SWymiar; ++Ind) Wynik[Ind] = (*this)[Ind] - Odjemnik[Ind];
    return Wynik;
}

template <typename STyp, int SWymiar>
SVector<STyp,SWymiar> SVector<STyp,SWymiar>::operator + (const SVector<STyp,SWymiar> &Skl2) const
{
    SVector<STyp,SWymiar>  Wynik;

    for (unsigned int Ind = 0; Ind < SWymiar; ++Ind) Wynik[Ind] = (*this)[Ind] + Skl2[Ind];
    return Wynik;
}

template <typename STyp, int SWymiar>
SVector<STyp,SWymiar> SVector<STyp,SWymiar>::operator * (double Mnoznik) const
{
    SVector<STyp,SWymiar>  Wynik;

    for (unsigned int Ind = 0; Ind < SWymiar; ++Ind) Wynik[Ind] = (*this)[Ind]*Mnoznik;
    return Wynik;
}

template<typename STyp, int SWymiar>
STyp SVector<STyp, SWymiar>::Distance(const SVector<STyp, SWymiar> &vec) {
    STyp sum = 0;

    for (int i = 0; i < SWymiar; ++i) {
        sum += _Wsp[i] * _Wsp[i];
    }

    return sqrt(sum);
}

template <typename STyp, int SWymiar>
std::ostream& operator << (std::ostream &StrmWyj, const SVector<STyp,SWymiar>& W)
{
    for (unsigned int Ind = 0; Ind < SWymiar; ++Ind) {
        StrmWyj << " " << W[Ind];
    }
    return StrmWyj;
}


#endif //ROBOT_SVECTOR_H
