# Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`define `[`MVELOCITY`](#Consts_8h_1ab8e96a2112ea3e9b4c8f1e75899a4e8a)            | 
`define `[`RVELOCITY`](#Consts_8h_1a25bf7747f2f9e574a6ee6660faede421)            | 
`define `[`FPSTIME`](#Consts_8h_1a40d967f9ce60117a581fdd8930bfd745)            | 
`public template<>`  <br/>`std::ostream & `[`operator<<`](#SVector_8h_1a213ebd862366d099883da35e35a367eb)`(std::ostream & StrmWyj,const `[`SVector`](#classSVector)`< STyp, SWymiar > & W)`            | 
`namespace `[`PzG`](#namespacePzG) | Moduł narzędzi umożliwiających połącznie z GNUPlotem.
`class `[`GraphicObject`](#classGraphicObject) | This class fully represents graphic object in program. [GraphicObject](#classGraphicObject) inherit from [VerticesCollection](#classVerticesCollection)
`class `[`Path`](#classPath) | Class represents the path of moving the [Robot](#classRobot) object [Path](#classPath) inherits from [GraphicObject](#classGraphicObject)
`class `[`Robot`](#classRobot) | 
`class `[`Scene`](#classScene) | 
`class `[`SVector`](#classSVector) | Template for Vector
`class `[`VerticesCollection`](#classVerticesCollection) | Set of vertices. Contain std::vector<Vector2D> where vertices are held and methods to Get/Set/Modify it.

## Members

#### `define `[`MVELOCITY`](#Consts_8h_1ab8e96a2112ea3e9b4c8f1e75899a4e8a) 

#### `define `[`RVELOCITY`](#Consts_8h_1a25bf7747f2f9e574a6ee6660faede421) 

#### `define `[`FPSTIME`](#Consts_8h_1a40d967f9ce60117a581fdd8930bfd745) 

#### `public template<>`  <br/>`std::ostream & `[`operator<<`](#SVector_8h_1a213ebd862366d099883da35e35a367eb)`(std::ostream & StrmWyj,const `[`SVector`](#classSVector)`< STyp, SWymiar > & W)` 

# namespace `PzG` 

Moduł narzędzi umożliwiających połącznie z GNUPlotem.

Niniejsza przestrzeń nazw stanowi moduł logiczny zawierający narzędzia umożliwiające realizację połączenia z programem `gnuplot`.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`enum `[`TrybRysowania`](#namespacePzG_1aeedae1ef10c66d720f9e89de408ca4ca)            | Określa tryb rysowania realizowanego przez program `gnuplot`.
`enum `[`RodzajRysowania`](#namespacePzG_1a705c92106f39b7d0c34a6739d10ff0b6)            | Sposób rysowania linii.
`class `[`PzG::InfoPlikuDoRysowania`](#classPzG_1_1InfoPlikuDoRysowania) | Zestaw informacji dotyczący pliku i sposobu rysowania.
`class `[`PzG::LaczeDoGNUPlota`](#classPzG_1_1LaczeDoGNUPlota) | Klasa realizuje interfejs do programu GNUPlot.

## Members

#### `enum `[`TrybRysowania`](#namespacePzG_1aeedae1ef10c66d720f9e89de408ca4ca) 

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
TR_2D            | 
TR_3D            | 

Określa tryb rysowania realizowanego przez program `gnuplot`.

Typ wyliczeniowy określające dopuszczalne tryby rysowania realizowanego przez program `gnuplot`. Wybór trybu wiąże się ze zmianą sposobu interpretacji danych zawartych pliku. Jeśli np. wybrany zostanie tryb 2D, to zakłada się, że w każdej linii pliku z danymi znajdują się wartości współrzędnych *x*, *y*. Wartości typu: 

* `TR_2D` - rysowanie w trybie 2D, co sprowadza się do rysowania wykresów funkcji jednej zmiennej. 

* `TR_3D` - rysowanie w trybie 3D. Oznacza to możliwość rysowania wykresów funkcji dwóch zmiennych.

#### `enum `[`RodzajRysowania`](#namespacePzG_1a705c92106f39b7d0c34a6739d10ff0b6) 

 Values                         | Descriptions                                
--------------------------------|---------------------------------------------
RR_Ciagly            | 
RR_Punktowy            | 

Sposób rysowania linii.

Określa sposób rysowania linii.

# class `PzG::InfoPlikuDoRysowania` 

Zestaw informacji dotyczący pliku i sposobu rysowania.

Klasa modeluje zestaw informacji dotyczący pliku i sposobu w jaki mają być wizualizowane zawarte w nim dane.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`InfoPlikuDoRysowania`](#classPzG_1_1InfoPlikuDoRysowania_1a48bc8ad94ef5fd5120b668a566c9172e)`(const char * NazwaPliku,`[`RodzajRysowania`](#namespacePzG_1a705c92106f39b7d0c34a6739d10ff0b6)` RodzRys,int Szerokosc)` | Inicjalizuje obiekt. 
`public inline const std::string `[`WezNazwePliku`](#classPzG_1_1InfoPlikuDoRysowania_1ac92a5dc258f9b6164631e2ea5247a7a7)`() const` | Udostępia nazwę pliku do rysowania.
`public inline void `[`ZmienNazwePliku`](#classPzG_1_1InfoPlikuDoRysowania_1ae734c69f5cecf9c0584e3a7f433340ea)`(const std::string & NazwaPliku)` | Zmienia nazwę pliku do rysowania.
`public inline `[`RodzajRysowania`](#namespacePzG_1a705c92106f39b7d0c34a6739d10ff0b6)` `[`WezRodzRys`](#classPzG_1_1InfoPlikuDoRysowania_1a6a46f3c7b7a08dfa9d694f387f873234)`() const` | Udostępnia sposób rysowanej linii.
`public inline int `[`WezSzerokosc`](#classPzG_1_1InfoPlikuDoRysowania_1a627bb615c50f3b03374774e6b974488b)`() const` | Udostępnia informację o szerokości linii.

## Members

#### `public inline  `[`InfoPlikuDoRysowania`](#classPzG_1_1InfoPlikuDoRysowania_1a48bc8ad94ef5fd5120b668a566c9172e)`(const char * NazwaPliku,`[`RodzajRysowania`](#namespacePzG_1a705c92106f39b7d0c34a6739d10ff0b6)` RodzRys,int Szerokosc)` 

Inicjalizuje obiekt. 
#### Parameters
* `NazwaPliku` - nazwa pliku, z którego pobierane będą dane, 

* `RodzRys` - rodzaj rysowania linii, 

* `Szerokosc` - szerokosc linii.

#### `public inline const std::string `[`WezNazwePliku`](#classPzG_1_1InfoPlikuDoRysowania_1ac92a5dc258f9b6164631e2ea5247a7a7)`() const` 

Udostępia nazwę pliku do rysowania.

Udostępnia nazwę pliku z danymi do rysowania.

#### `public inline void `[`ZmienNazwePliku`](#classPzG_1_1InfoPlikuDoRysowania_1ae734c69f5cecf9c0584e3a7f433340ea)`(const std::string & NazwaPliku)` 

Zmienia nazwę pliku do rysowania.

Zmienia nazwę pliku z danymi do rysowania.

#### `public inline `[`RodzajRysowania`](#namespacePzG_1a705c92106f39b7d0c34a6739d10ff0b6)` `[`WezRodzRys`](#classPzG_1_1InfoPlikuDoRysowania_1a6a46f3c7b7a08dfa9d694f387f873234)`() const` 

Udostępnia sposób rysowanej linii.

Udostępnia informację o sposóbie rysowania linii.

#### `public inline int `[`WezSzerokosc`](#classPzG_1_1InfoPlikuDoRysowania_1a627bb615c50f3b03374774e6b974488b)`() const` 

Udostępnia informację o szerokości linii.

Udostępnia informację o szerokości rysowanej linii.

# class `PzG::LaczeDoGNUPlota` 

Klasa realizuje interfejs do programu GNUPlot.

Klasa realizuje interfejs do programu GNUPlot. Pozwala ona na wskazanie zbioru punktów płaszczyzn umieszczonych w pliku lub plikach. Każdy taki zbiór może być następnie wizualizowany przez program gnuplot w postaci oddzielnych płaszczyzn z wycinaniem części zasłanianych.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline void `[`PokazOs_OX`](#classPzG_1_1LaczeDoGNUPlota_1a11421d7c67deab6b7524cc492407e897)`(bool Pokaz)` | Umożliwia lub zabrania rysowania osi OX.
`public inline bool `[`PokazOs_OX`](#classPzG_1_1LaczeDoGNUPlota_1ae112972af57167c3b053bf922bce6bbf)`() const` | Czy oś OX ma być rysowana.
`public inline void `[`PokazOs_OY`](#classPzG_1_1LaczeDoGNUPlota_1a7c3db909b266fc30808e86406c04b516)`(bool Pokaz)` | Umożliwia lub zabrania rysowania osi OY.
`public inline bool `[`PokazOs_OY`](#classPzG_1_1LaczeDoGNUPlota_1a7298f469f6932f5c808dcf620650b4b8)`() const` | Czy oś OY ma być rysowana.
`public inline void `[`PokazOs_OZ`](#classPzG_1_1LaczeDoGNUPlota_1a9fabfe88cb1801a5de8923f45f514b99)`(bool Pokaz)` | Umożliwia lub zabrania rysowania osi OZ.
`public inline bool `[`PokazOs_OZ`](#classPzG_1_1LaczeDoGNUPlota_1a22c708af33c57bf3b5d1b4e82b4017b7)`() const` | Czy oś OZ ma być rysowana.
`public inline float `[`Xmin`](#classPzG_1_1LaczeDoGNUPlota_1a66836c9749bf179420e4ca3e9447efd7)`() const` | Udostępnia dolną wartość zakresu skali wzdłuż osi *OX*.
`public inline float `[`Xmax`](#classPzG_1_1LaczeDoGNUPlota_1a8e23479629af3df3d352b7839ae396b8)`() const` | Udostępnia górną wartość zakresu skali wzdłuż osi *OX*.
`public inline float `[`Ymin`](#classPzG_1_1LaczeDoGNUPlota_1a9352c0382bfaeaaba9f65399a7383164)`() const` | Udostępnia dolną wartość zakresu skali wzdłuż osi *OY*.
`public inline float `[`Ymax`](#classPzG_1_1LaczeDoGNUPlota_1ac54e4e7448ce3bd324efdc94a999f535)`() const` | Udostępnia górną wartość zakresu skali wzdłuż osi *OY*.
`public inline float `[`Zmin`](#classPzG_1_1LaczeDoGNUPlota_1a9068bd9a9873ba9c6d70016f1ae7cd7f)`() const` | Udostępnia dolną wartość zakresu skali wzdłuż osi *OZ*.
`public inline float `[`Zmax`](#classPzG_1_1LaczeDoGNUPlota_1a20a5d03e1fc19c682032bffc54340f12)`() const` | Udostępnia górną wartość zakresu skali wzdłuż osi *OZ*.
`public inline void `[`ZmienTrybRys`](#classPzG_1_1LaczeDoGNUPlota_1a10950349b348fd3a3d4143e95337527c)`(`[`TrybRysowania`](#namespacePzG_1aeedae1ef10c66d720f9e89de408ca4ca)` Tryb)` | Zmienia tryb rysowania.
`public inline `[`TrybRysowania`](#namespacePzG_1aeedae1ef10c66d720f9e89de408ca4ca)` `[`WezTrybRys`](#classPzG_1_1LaczeDoGNUPlota_1a7c417f27b4b112f58a5be3ce6ea8d1fe)`() const` | Udostępnia aktualny tryb rysowania.
`public inline void `[`UstawZakresX`](#classPzG_1_1LaczeDoGNUPlota_1a9c91987dfc869d6fcea96205c581daef)`(float Xo,float Xn)` | Ustawia zakres osi *OX*.
`public inline void `[`UstawZakresY`](#classPzG_1_1LaczeDoGNUPlota_1a54c6e9cf9ab2eae479451fd953c2717c)`(float Yo,float Yn)` | Ustawia zakres osi *OY*.
`public inline void `[`UstawZakresZ`](#classPzG_1_1LaczeDoGNUPlota_1a1dbbb2b86fb13b8632e6bad9df2a82e3)`(float Zo,float Zn)` | Ustawia zakres osi *OZ*.
`public inline float `[`SkalaX`](#classPzG_1_1LaczeDoGNUPlota_1a4b1eb252fd785a5aeff938e7b2dce2b1)`() const` | Udostępnia skalę dla osi *OX*.
`public inline float `[`SkalaZ`](#classPzG_1_1LaczeDoGNUPlota_1a44f922ccbc508d6cd7809c669238dae3)`() const` | Udostępnia skalę dla osi *OZ*.
`public inline void `[`UstawSkaleX`](#classPzG_1_1LaczeDoGNUPlota_1a855b8338bfe3e5d294d719f24b11090e)`(float skala_x)` | Zadaje skalę wzdłuż osi *OZ*.
`public inline void `[`UstawSkaleZ`](#classPzG_1_1LaczeDoGNUPlota_1ab0486db3166d8db6580a221079af241f)`(float skala_z)` | Zadaje skalę wzdłuż osi *OZ*.
`public inline void `[`UstawSkaleXZ`](#classPzG_1_1LaczeDoGNUPlota_1a4308151b54e105d302803146a3238699)`(float skala_x,float skala_z)` | Zadaje skalę wzdłuż osi *OX* i *OZ*.
`public inline float `[`RotacjaX`](#classPzG_1_1LaczeDoGNUPlota_1addf0b844f626f3f5220de70efcbbdbb3)`() const` | Udostępnia wartość kąta rotacji renderowanego rysunku wokół osi *OX*. Zwracana wartość wyrażona jest w stopiniach.
`public inline float `[`RotacjaZ`](#classPzG_1_1LaczeDoGNUPlota_1a9dac73754fab10644b287756003e9c79)`() const` | Udostępnia wartość kąta rotacji renderowanego rysunku wokół osi *OZ*. Zwracana wartość wyrażona jest w stopiniach.
`public inline void `[`UstawRotacjeX`](#classPzG_1_1LaczeDoGNUPlota_1a88324c53a70846fb6bc9d918ce21fd56)`(float kat_x)` | Ustawia rotację wokół osi *OX*.
`public inline void `[`UstawRotacjeZ`](#classPzG_1_1LaczeDoGNUPlota_1a458399aa2a8f4b3f00ccd5b272857ea1)`(float kat_z)` | Ustawia rotację wokół osi *OZ*.
`public inline void `[`UstawRotacjeXZ`](#classPzG_1_1LaczeDoGNUPlota_1a94d8527fd78048ed6cb32ffb29e5f903)`(float kat_x,float kat_z)` | Ustawia rotację wokół osi *OX* i *OZ*.
`public void `[`WyswietlajKomunikatyBledow`](#classPzG_1_1LaczeDoGNUPlota_1a4531e6d166faf2e2c8bb4a54a9c9e1f8)`(bool Tryb)` | Zezwala lub zabrania wyświetlania komunikatów.
`public bool `[`DodajNazwePliku`](#classPzG_1_1LaczeDoGNUPlota_1a34bd48f57c0fd69c12bf4127a1cacd8f)`(const char * NazwaPliku,`[`RodzajRysowania`](#namespacePzG_1a705c92106f39b7d0c34a6739d10ff0b6)` RodzRys,int Szerokosc)` | Dodaje nazwę pliku.
`public bool `[`DopiszRysowanieZPlikow`](#classPzG_1_1LaczeDoGNUPlota_1ad3d7607946b82aa941d786dcd086d27e)`(std::string & Polecenie,char const ** Sep)` | Tworzy listę parametrów umożliwiających rysowanie brył z plików.
`public bool `[`CzyPolaczenieJestZainicjowane`](#classPzG_1_1LaczeDoGNUPlota_1af8be8aeb3b1b524fab67d4411cba5b9e)`() const` | Informuje, czy połączenie z *gnuplot'em* jest zainicjalizowane.
`public bool `[`Rysuj`](#classPzG_1_1LaczeDoGNUPlota_1a065f5b8402737cc62b0ad4f66d028335)`()` | Jeżeli lista plików nie jest pusta, to generuje sekwencje poleceń dla programu *gnuplot* mająca na celu narysowanie płaszczyzn na na podstawie danych zawartych w plikach z listy.
`public bool `[`RysujDoPliku`](#classPzG_1_1LaczeDoGNUPlota_1addae9ac156ae2fb227f792faff3aa148)`(const char * NazwaPliku)` | Działa analogicznie jak metoda [Rysuj](#classPzG_1_1LaczeDoGNUPlota_1a065f5b8402737cc62b0ad4f66d028335), z tą różnicą, że rysunek robota składowany jest w pliku o nazwie przekazanej przez parametr *NazwaPliku*. Rysunek jest zapisywany w formacie *PNG*.
`public bool `[`Inicjalizuj`](#classPzG_1_1LaczeDoGNUPlota_1a200ce6bdb980c314a9eafe49e8f2dd5e)`()` | Inicjalizuje połączenie z programem *gnuplot*.
`public void `[`UsunOstatniaNazwe`](#classPzG_1_1LaczeDoGNUPlota_1a75f599f17413ea8602c6dbba09f36407)`()` | Usuwa ostatnią nazwę pliku.
`public void `[`UsunWszystkieNazwyPlikow`](#classPzG_1_1LaczeDoGNUPlota_1a89a1d90d017d264cd26398464d074073)`()` | Kasuje zawartość listy nazw plików.
`public  `[`LaczeDoGNUPlota`](#classPzG_1_1LaczeDoGNUPlota_1a5845189b5ab8c3634acf57024e5deeaf)`()` | 
`public virtual  `[`~LaczeDoGNUPlota`](#classPzG_1_1LaczeDoGNUPlota_1a4f088b3c3f67cb82f71ce1c6db357f42)`()` | 
`protected int `[`_Wejscie_GNUPlota`](#classPzG_1_1LaczeDoGNUPlota_1adc3a2250216c2473a61da379da70b2d7) | Pole przechowuje deskryptor do wejścia standardowego uruchomionego programu gnuplot.
`protected int `[`_Wyjscie_GNUPlota`](#classPzG_1_1LaczeDoGNUPlota_1a7d05a4767a35ee494d59724bb740dbc2) | Pole przechowuje deskryptor do weyjścia standardowego uruchomionego programu gnuplot.
`protected bool `[`_WyswietlajKomunikatyOBledach`](#classPzG_1_1LaczeDoGNUPlota_1a2f2800f14ebfe1caef0b4d30c410a7fe) | Decyduje czy mają być wyświetlane komunikaty o błędach, czy też nie.
`protected `[`TrybRysowania`](#namespacePzG_1aeedae1ef10c66d720f9e89de408ca4ca)` `[`_TrybRys`](#classPzG_1_1LaczeDoGNUPlota_1a00e3a51bb47d3fb26eee875dc48215db) | Określa aktualny tryb rysowania.
`protected float `[`_Xmin`](#classPzG_1_1LaczeDoGNUPlota_1a69d530edfe769e38448972e897456deb) | Dolny zakres wyświetlanej skali skali dla osi *OX*.
`protected float `[`_Xmax`](#classPzG_1_1LaczeDoGNUPlota_1a847e00678a413ab076ccbcb7eba3ae58) | Górny zakres wyświetlanej skali skali dla osi *OX*.
`protected float `[`_Ymin`](#classPzG_1_1LaczeDoGNUPlota_1abc555fd6b82b0d5c9efb4802b58dc317) | Dolny zakres wyświetlanej skali skali dla osi *OY*.
`protected float `[`_Ymax`](#classPzG_1_1LaczeDoGNUPlota_1ad7dfd3fad82ea0720ec89eacc18410bf) | Górny zakres wyświetlanej skali skali dla osi *OY*.
`protected float `[`_Zmin`](#classPzG_1_1LaczeDoGNUPlota_1a8f9797e881df35f4206cb7d8030e5edc) | Dolny zakres wyświetlanej skali skali dla osi *OZ*.
`protected float `[`_Zmax`](#classPzG_1_1LaczeDoGNUPlota_1a26949eedd421832f0f206ce3c8f90694) | Górny zakres wyświetlanej skali skali dla osi *OZ*.
`protected float `[`_Xskala`](#classPzG_1_1LaczeDoGNUPlota_1a2c9303c4dbb4c9f0ddc4f1fe02eb3f70) | Wartość tego pola definiuje skalowanie rysunku wzdłuż osi *OX* (oś horyzontalna ekranu).
`protected float `[`_Zskala`](#classPzG_1_1LaczeDoGNUPlota_1a85446d06b2d714b2f852ef43c47c73c1) | Wartość tego pola definiuje skalowanie rysunku wzdłuż osi *OZ* (oś wertykalna ekranu).
`protected float `[`_Xrotacja`](#classPzG_1_1LaczeDoGNUPlota_1a21e77f0a2bfb7fed989b6dc2d64b5a7e) | Wartość tego pola definiuje rotację rysunku (zmiane punktu patrzenia) względem osi *OX*.
`protected float `[`_Zrotacja`](#classPzG_1_1LaczeDoGNUPlota_1aa65781b1ff96dfb31a780e98ee28d6ed) | Wartość tego pola definiuje rotację rysunku (zmiane punktu patrzenia) względem osi *OZ*.
`protected bool `[`_PokazOs_OX`](#classPzG_1_1LaczeDoGNUPlota_1a833aa8994b9913786f920ec8c259731f) | Czy oś OX ma być widoczna.
`protected bool `[`_PokazOs_OY`](#classPzG_1_1LaczeDoGNUPlota_1ae8d9b4dac5eae6ce86b7043c45b70ed8) | Czy oś OY ma być widoczna.
`protected bool `[`_PokazOs_OZ`](#classPzG_1_1LaczeDoGNUPlota_1a5b0afc06dc248790d2e7475b2162e309) | Czy oś OZ ma być widoczna.
`protected inline virtual bool `[`DopiszPlikiDoPoleceniaRysowania`](#classPzG_1_1LaczeDoGNUPlota_1a25585ec3f1bd3b6bf42f374c38b8d237)`(std::string & Polecenie,char const ** Sep)` | Tworzy listę parametrów umożliwiających rysowanie dodatkowych elementów.
`protected std::string `[`ZapiszUstawienieZakresu`](#classPzG_1_1LaczeDoGNUPlota_1a4579aecf7b4777fdde0cae4e98c275c2)`(char Os) const` | Tworzy polecenie ustawiające zakres dla danej współrzędnej.
`protected std::string `[`ZapiszUstawienieRotacjiISkali`](#classPzG_1_1LaczeDoGNUPlota_1aa92b463e8cbae31b50dd797a4183bce8)`() const` | Tworzy polecenie ustawiające punkt obserwacji.
`protected bool `[`PrzeslijDoGNUPlota`](#classPzG_1_1LaczeDoGNUPlota_1a5063854b7232a7951d120a21df63f2b7)`(const char * Polecenie)` | Przesyła na wejście programu *gnuplot* zadany ciąg znaków. 
`protected inline bool `[`CzyWyswietlacKomunikaty`](#classPzG_1_1LaczeDoGNUPlota_1a5e4f3a226ed36f7110032d802d84847c)`() const` | Udostępnia informację czy mają być wyświetlane informacje o błędach.
`protected bool `[`UtworzProcesPotomny`](#classPzG_1_1LaczeDoGNUPlota_1a1c7b9acc40de8d8bbb40fb0722512933)`()` | Uruchamia program *gnuplot* jako proces potomny.
`protected void `[`KomunikatBledu`](#classPzG_1_1LaczeDoGNUPlota_1a90056743aeaa546721528005f2cf41e6)`(const char * Komunikat) const` | Wyświetla na wyjście "standard error" komunikat (przekazany jako parametr), o ile pole [_WyswietlajKomunikatyOBledach](#classPzG_1_1LaczeDoGNUPlota_1a2f2800f14ebfe1caef0b4d30c410a7fe) ma wartość `true`. W przypadku przeciwnym komunikat nie jest wyświetlany.
`protected void `[`BudujPreambulePoleceniaRysowania`](#classPzG_1_1LaczeDoGNUPlota_1a0da98f68f533070d5a32adbdb519cf56)`(std::string & Preambula) const` | Tworzy preambułę poprzedzającą polecenie rysowania.
`protected void `[`BudujPreambule_2D`](#classPzG_1_1LaczeDoGNUPlota_1a0ac655ff1934abb69ea668cd92ae77ec)`(std::string & Preambula) const` | Tworzy preambułę poprzedzającą polecenie rysowania w trybie 2D.
`protected void `[`BudujPreambule_3D`](#classPzG_1_1LaczeDoGNUPlota_1a50a544677e52829cac4dd4a95b821dcb)`(std::string & Preambula) const` | Tworzy preambułę poprzedzającą polecenie rysowania w trybie 3D.

## Members

#### `public inline void `[`PokazOs_OX`](#classPzG_1_1LaczeDoGNUPlota_1a11421d7c67deab6b7524cc492407e897)`(bool Pokaz)` 

Umożliwia lub zabrania rysowania osi OX.

Umożliwia lub zabrania rysowania osi *OX* na rysunku wykresu. 
#### Parameters
* `Pokaz` - decyduje o tym czy oś *OX* będzie rysowana (`true`), czy też nie (`false`).

#### `public inline bool `[`PokazOs_OX`](#classPzG_1_1LaczeDoGNUPlota_1ae112972af57167c3b053bf922bce6bbf)`() const` 

Czy oś OX ma być rysowana.

Udostępnia informację czy oś *OX* ma być rysowana, czy też nie. 
#### Parameters
* `true` - gdy oś *OX* ma być rysowana, 

* `false` - w przypadku przeciwnym.

#### `public inline void `[`PokazOs_OY`](#classPzG_1_1LaczeDoGNUPlota_1a7c3db909b266fc30808e86406c04b516)`(bool Pokaz)` 

Umożliwia lub zabrania rysowania osi OY.

Umożliwia lub zabrania rysowania osi *OY* na rysunku wykresu. 
#### Parameters
* `Pokaz` - decyduje o tym czy oś *OY* będzie rysowana (`true`), czy też nie (`false`).

#### `public inline bool `[`PokazOs_OY`](#classPzG_1_1LaczeDoGNUPlota_1a7298f469f6932f5c808dcf620650b4b8)`() const` 

Czy oś OY ma być rysowana.

Udostępnia informację czy oś *OY* ma być rysowana, czy też nie. 
#### Parameters
* `true` - gdy oś *OY* ma być rysowana, 

* `false` - w przypadku przeciwnym.

#### `public inline void `[`PokazOs_OZ`](#classPzG_1_1LaczeDoGNUPlota_1a9fabfe88cb1801a5de8923f45f514b99)`(bool Pokaz)` 

Umożliwia lub zabrania rysowania osi OZ.

Umożliwia lub zabrania rysowania osi *OZ* na rysunku wykresu. 
#### Parameters
* `Pokaz` - decyduje o tym czy oś *OZ* będzie rysowana (`true`), czy też nie (`false`).

#### `public inline bool `[`PokazOs_OZ`](#classPzG_1_1LaczeDoGNUPlota_1a22c708af33c57bf3b5d1b4e82b4017b7)`() const` 

Czy oś OZ ma być rysowana.

Udostępnia informację czy oś *OZ* ma być rysowana, czy też nie. 
#### Parameters
* `true` - gdy oś *OZ* ma być rysowana, 

* `false` - w przypadku przeciwnym.

#### `public inline float `[`Xmin`](#classPzG_1_1LaczeDoGNUPlota_1a66836c9749bf179420e4ca3e9447efd7)`() const` 

Udostępnia dolną wartość zakresu skali wzdłuż osi *OX*.

#### `public inline float `[`Xmax`](#classPzG_1_1LaczeDoGNUPlota_1a8e23479629af3df3d352b7839ae396b8)`() const` 

Udostępnia górną wartość zakresu skali wzdłuż osi *OX*.

#### `public inline float `[`Ymin`](#classPzG_1_1LaczeDoGNUPlota_1a9352c0382bfaeaaba9f65399a7383164)`() const` 

Udostępnia dolną wartość zakresu skali wzdłuż osi *OY*.

#### `public inline float `[`Ymax`](#classPzG_1_1LaczeDoGNUPlota_1ac54e4e7448ce3bd324efdc94a999f535)`() const` 

Udostępnia górną wartość zakresu skali wzdłuż osi *OY*.

#### `public inline float `[`Zmin`](#classPzG_1_1LaczeDoGNUPlota_1a9068bd9a9873ba9c6d70016f1ae7cd7f)`() const` 

Udostępnia dolną wartość zakresu skali wzdłuż osi *OZ*.

#### `public inline float `[`Zmax`](#classPzG_1_1LaczeDoGNUPlota_1a20a5d03e1fc19c682032bffc54340f12)`() const` 

Udostępnia górną wartość zakresu skali wzdłuż osi *OZ*.

#### `public inline void `[`ZmienTrybRys`](#classPzG_1_1LaczeDoGNUPlota_1a10950349b348fd3a3d4143e95337527c)`(`[`TrybRysowania`](#namespacePzG_1aeedae1ef10c66d720f9e89de408ca4ca)` Tryb)` 

Zmienia tryb rysowania.

Zmienia tryb rysowania jaki zostanie wymuszony na programie `gnuplot`. 
#### Parameters
* `Tryb` - wartość parametru określa nowy tryb rysowania.

#### `public inline `[`TrybRysowania`](#namespacePzG_1aeedae1ef10c66d720f9e89de408ca4ca)` `[`WezTrybRys`](#classPzG_1_1LaczeDoGNUPlota_1a7c417f27b4b112f58a5be3ce6ea8d1fe)`() const` 

Udostępnia aktualny tryb rysowania.

Udostępnia informację o aktualnym trybie rysowania.

#### `public inline void `[`UstawZakresX`](#classPzG_1_1LaczeDoGNUPlota_1a9c91987dfc869d6fcea96205c581daef)`(float Xo,float Xn)` 

Ustawia zakres osi *OX*.

Ustawia zakres osi *OX*. Ogranicza to obszar, który będzie zwizualizowany przez programa *gnuplot*. 
#### Parameters
* `Xo` - dolna granica obszaru rysowania dla osi *OX*. 

* `Xn` - górna granica obszaru rysowania dla osi *OX*.

#### `public inline void `[`UstawZakresY`](#classPzG_1_1LaczeDoGNUPlota_1a54c6e9cf9ab2eae479451fd953c2717c)`(float Yo,float Yn)` 

Ustawia zakres osi *OY*.

Ustawia zakres osi *OY*. Ogranicza to obszar, który będzie zwizualizowany przez programa *gnuplot*. 
#### Parameters
* `Yo` - dolna granica obszaru rysowania dla osi *OY*. 

* `Yn` - górna granica obszaru rysowania dla osi *OY*.

#### `public inline void `[`UstawZakresZ`](#classPzG_1_1LaczeDoGNUPlota_1a1dbbb2b86fb13b8632e6bad9df2a82e3)`(float Zo,float Zn)` 

Ustawia zakres osi *OZ*.

Ustawia zakres osi *OZ*. Ogranicza to obszar, który będzie zwizualizowany przez programa *gnuplot*. 
#### Parameters
* `Zo` - dolna granica obszaru rysowania dla osi *OZ*. 

* `Zn` - górna granica obszaru rysowania dla osi *OZ*.

#### `public inline float `[`SkalaX`](#classPzG_1_1LaczeDoGNUPlota_1a4b1eb252fd785a5aeff938e7b2dce2b1)`() const` 

Udostępnia skalę dla osi *OX*.

Udostępnia skalę dla osi *OX* dla tworzonego rysunku.

#### `public inline float `[`SkalaZ`](#classPzG_1_1LaczeDoGNUPlota_1a44f922ccbc508d6cd7809c669238dae3)`() const` 

Udostępnia skalę dla osi *OZ*.

Udostępnia skalę dla osi *OZ* dla tworzonego rysunku.

#### `public inline void `[`UstawSkaleX`](#classPzG_1_1LaczeDoGNUPlota_1a855b8338bfe3e5d294d719f24b11090e)`(float skala_x)` 

Zadaje skalę wzdłuż osi *OZ*.

Zadaje skalę wzdłuż osi *OX* dla tworzonego rysunku. 
#### Parameters
* `skala_x` - skala wzdłuż osi *OX*.

#### `public inline void `[`UstawSkaleZ`](#classPzG_1_1LaczeDoGNUPlota_1ab0486db3166d8db6580a221079af241f)`(float skala_z)` 

Zadaje skalę wzdłuż osi *OZ*.

Zadaje skalę wzdłuż osi *OZ* dla tworzonego rysunku. 
#### Parameters
* `skala_z` - skala wzdłuż osi *OZ*.

#### `public inline void `[`UstawSkaleXZ`](#classPzG_1_1LaczeDoGNUPlota_1a4308151b54e105d302803146a3238699)`(float skala_x,float skala_z)` 

Zadaje skalę wzdłuż osi *OX* i *OZ*.

Zadaje skalę wzdłuż osi *OX* i *OZ* dla tworzonego rysunku. 
#### Parameters
* `skala_x` - skala wzdłuż osi *OX*. 

* `skala_z` - skala wzdłuż osi *OZ*.

#### `public inline float `[`RotacjaX`](#classPzG_1_1LaczeDoGNUPlota_1addf0b844f626f3f5220de70efcbbdbb3)`() const` 

Udostępnia wartość kąta rotacji renderowanego rysunku wokół osi *OX*. Zwracana wartość wyrażona jest w stopiniach.

#### `public inline float `[`RotacjaZ`](#classPzG_1_1LaczeDoGNUPlota_1a9dac73754fab10644b287756003e9c79)`() const` 

Udostępnia wartość kąta rotacji renderowanego rysunku wokół osi *OZ*. Zwracana wartość wyrażona jest w stopiniach.

#### `public inline void `[`UstawRotacjeX`](#classPzG_1_1LaczeDoGNUPlota_1a88324c53a70846fb6bc9d918ce21fd56)`(float kat_x)` 

Ustawia rotację wokół osi *OX*.

Zadaje kąt rotacji wokół osi *OX*. Umożliwia to zmianę punktu obserwacji renderowanego rysunku. 
#### Parameters
* `kat_x` - wartość kąta rotacji. Jego wartość podawana jest w stopniach.

#### `public inline void `[`UstawRotacjeZ`](#classPzG_1_1LaczeDoGNUPlota_1a458399aa2a8f4b3f00ccd5b272857ea1)`(float kat_z)` 

Ustawia rotację wokół osi *OZ*.

Zadaje kąt rotacji wokół osi *OZ*. Umożliwia to zmianę punktu obserwacji renderowanego rysunku. 
#### Parameters
* `kat_z` - wartość kąta rotacji. Jego wartość podawana jest w stopniach.

#### `public inline void `[`UstawRotacjeXZ`](#classPzG_1_1LaczeDoGNUPlota_1a94d8527fd78048ed6cb32ffb29e5f903)`(float kat_x,float kat_z)` 

Ustawia rotację wokół osi *OX* i *OZ*.

Zadaje jednocześnie kąt rotacji wokół osi *OX* i *OZ*. Umożliwia to zmianę punktu obserwacji renderowanego rysunku. 
#### Parameters
* `kat_x` - wartość kąta rotacji względem osi *OX*. Jego wartość podawana jest w stopniach. 

* `kat_z` - wartość kąta rotacji względem osi *OZ*. Jego wartość podawana jest w stopniach.

#### `public void `[`WyswietlajKomunikatyBledow`](#classPzG_1_1LaczeDoGNUPlota_1a4531e6d166faf2e2c8bb4a54a9c9e1f8)`(bool Tryb)` 

Zezwala lub zabrania wyświetlania komunikatów.

Metoda pozwala, albo też zabrania wyświetlania komunikatów o blędach. Jeżeli jakaś z operacji nie powiedzie się, to jako wynik zwracana jest wartość `false`. Oprócz tego metody takie moga wyświetlać komunikaty, które kierowane są na wyjście "standard error" Domyślnie przymuje się, że programista nie chce dodatkwego wyświetlania komunikatów.

#### `public bool `[`DodajNazwePliku`](#classPzG_1_1LaczeDoGNUPlota_1a34bd48f57c0fd69c12bf4127a1cacd8f)`(const char * NazwaPliku,`[`RodzajRysowania`](#namespacePzG_1a705c92106f39b7d0c34a6739d10ff0b6)` RodzRys,int Szerokosc)` 

Dodaje nazwę pliku.

Powoduje dodanie do listy plików zawierajacych dane dla *gnuplota*, nowej nazwy pliku.

#### Parameters
* `NazwaPliku` - nazwa pliku z danymi dla gnuplota. 

* `RodzRys` - tryb rysowania danego zbioru punktow. Może być ciągły lub jako zbiór osobnych punktów. 

* `Szerokosc` - szerokość rysowanego obiektu. W przypadku punktów parametr ten jest połową szerokości kwadratu reprezentującego dany punkt.

#### Parameters
* `true` - jeżeli istnieje plik o nazwie udostępnionej poprzez parametr *NazwaPliku* oraz jest zezwolenie na jego czytanie. Nazwa pliku zostaje dodana do listy plików z danymi dla *gnuplota*. 

* `false` - Jeżeli nie istnieje plik o nazwie przekazanej poprzez parametr *NazwaPliku*. Nazwa pliku zostaje dodana do listy plików z danymi dla *gnuplota*.

#### `public bool `[`DopiszRysowanieZPlikow`](#classPzG_1_1LaczeDoGNUPlota_1ad3d7607946b82aa941d786dcd086d27e)`(std::string & Polecenie,char const ** Sep)` 

Tworzy listę parametrów umożliwiających rysowanie brył z plików.

#### `public bool `[`CzyPolaczenieJestZainicjowane`](#classPzG_1_1LaczeDoGNUPlota_1af8be8aeb3b1b524fab67d4411cba5b9e)`() const` 

Informuje, czy połączenie z *gnuplot'em* jest zainicjalizowane.

Informuje, czy połączenie z programem *gnuplot* jest zainicjowane. 
#### Parameters
* `true` - jeśli tak, 

* `false` - w przypadku przeciwnym.

#### `public bool `[`Rysuj`](#classPzG_1_1LaczeDoGNUPlota_1a065f5b8402737cc62b0ad4f66d028335)`()` 

Jeżeli lista plików nie jest pusta, to generuje sekwencje poleceń dla programu *gnuplot* mająca na celu narysowanie płaszczyzn na na podstawie danych zawartych w plikach z listy.

Lista plików nie powinna być pusta. Nazwy plików na niej można umieścić za pomoca metody [DodajNazwe](#). Metoda nie wymaga wcześniejszego zainicjowania połączenia z *gnuplotem*. 

#### Parameters
* `true` - gdy zostają poprawnie wysłane polecenia dla gnuplota. Nie oznacza to jednak, że proces rysowania zakończył się pomyślnie. 

* `false` - gdy połączenie z gnuplotem nie może zostać poprawnie zainicjalizowane lub gdy lista plików jest pusta.

#### `public bool `[`RysujDoPliku`](#classPzG_1_1LaczeDoGNUPlota_1addae9ac156ae2fb227f792faff3aa148)`(const char * NazwaPliku)` 

Działa analogicznie jak metoda [Rysuj](#classPzG_1_1LaczeDoGNUPlota_1a065f5b8402737cc62b0ad4f66d028335), z tą różnicą, że rysunek robota składowany jest w pliku o nazwie przekazanej przez parametr *NazwaPliku*. Rysunek jest zapisywany w formacie *PNG*.

Lista plików nie powinna być pusta ponadto powinno być możliwe otwarcie do zapisu pliku o nazwie przekazanej przez parametr *NazwaPliku*, do której dołączane jest rozszerzenie .ps . Metoda nie wymaga wcześniejszego zainicjowania połączenia z programem *gnuplot*.

#### Parameters
* `true` - gdy zostają poprawnie wysłane polecenia dla *gnuplota*. Nie oznacza to jednak, że proces rysowania zakończył się pomyślnie. 

* `false` - gdy połączenie z gnuplotem nie może zostać poprawnie zainicjalizowane lub gdy lista plików jest pusta lub też gdy nie można otworzyć pliku do zapisu.

#### `public bool `[`Inicjalizuj`](#classPzG_1_1LaczeDoGNUPlota_1a200ce6bdb980c314a9eafe49e8f2dd5e)`()` 

Inicjalizuje połączenie z programem *gnuplot*.

Inicjalizuje połączenie z programem *gnuplot*. Realizowane jest to poprzez rozwidlenie procesu i uruchomienie jako procesu potomnego programu *gnuplot*. Komunikacja z programem *gnuplot* realizowana jest poprzez przejęcie jego wejścia i wyjścia standardowego.

#### Parameters
* `true` - gdy połączenie z programem *0gnuplot* zostało poprawnie zainicjalizowane lub gdy już wcześniej było zainicjalizowane. 

* `false` - gdy proces inicjalizacji połączenia zakończył się niepowodzeniem.

#### `public void `[`UsunOstatniaNazwe`](#classPzG_1_1LaczeDoGNUPlota_1a75f599f17413ea8602c6dbba09f36407)`()` 

Usuwa ostatnią nazwę pliku.

Usuwa ostatnią nazwę z listy nazw plików.

#### `public void `[`UsunWszystkieNazwyPlikow`](#classPzG_1_1LaczeDoGNUPlota_1a89a1d90d017d264cd26398464d074073)`()` 

Kasuje zawartość listy nazw plików.

Calkowicie kasuje zawartość listy nazw plików.

#### `public  `[`LaczeDoGNUPlota`](#classPzG_1_1LaczeDoGNUPlota_1a5845189b5ab8c3634acf57024e5deeaf)`()` 

#### `public virtual  `[`~LaczeDoGNUPlota`](#classPzG_1_1LaczeDoGNUPlota_1a4f088b3c3f67cb82f71ce1c6db357f42)`()` 

#### `protected int `[`_Wejscie_GNUPlota`](#classPzG_1_1LaczeDoGNUPlota_1adc3a2250216c2473a61da379da70b2d7) 

Pole przechowuje deskryptor do wejścia standardowego uruchomionego programu gnuplot.

#### `protected int `[`_Wyjscie_GNUPlota`](#classPzG_1_1LaczeDoGNUPlota_1a7d05a4767a35ee494d59724bb740dbc2) 

Pole przechowuje deskryptor do weyjścia standardowego uruchomionego programu gnuplot.

#### `protected bool `[`_WyswietlajKomunikatyOBledach`](#classPzG_1_1LaczeDoGNUPlota_1a2f2800f14ebfe1caef0b4d30c410a7fe) 

Decyduje czy mają być wyświetlane komunikaty o błędach, czy też nie.

Wartość tego pola decyduje o tym czy komunikaty o błędach będą wyświetlane na wyjście standardowe błędów (**cerr**), czy też nie. 

* `true` - komunikaty będę wyświetlane, 

* `false` - komunikaty nie będę wyświetlane.

#### `protected `[`TrybRysowania`](#namespacePzG_1aeedae1ef10c66d720f9e89de408ca4ca)` `[`_TrybRys`](#classPzG_1_1LaczeDoGNUPlota_1a00e3a51bb47d3fb26eee875dc48215db) 

Określa aktualny tryb rysowania.

Zawartość pola determinuje sposób rysowania, jaki zostanie wymuszony na programie `gnuplot` poprzez wysłanie do niego odpowiednich poleceń. Wspomniane wymuszenie jest realizowane poprzez wywołanie polecenia [Rysuj()](#classPzG_1_1LaczeDoGNUPlota_1a065f5b8402737cc62b0ad4f66d028335)

#### `protected float `[`_Xmin`](#classPzG_1_1LaczeDoGNUPlota_1a69d530edfe769e38448972e897456deb) 

Dolny zakres wyświetlanej skali skali dla osi *OX*.

Określa dolny zakres wyświetlanej skali dla osi *OX*.

#### `protected float `[`_Xmax`](#classPzG_1_1LaczeDoGNUPlota_1a847e00678a413ab076ccbcb7eba3ae58) 

Górny zakres wyświetlanej skali skali dla osi *OX*.

Określa górny zakres wyświetlanej skali dla osi *OX*.

#### `protected float `[`_Ymin`](#classPzG_1_1LaczeDoGNUPlota_1abc555fd6b82b0d5c9efb4802b58dc317) 

Dolny zakres wyświetlanej skali skali dla osi *OY*.

Określa dolny zakres wyświetlanej skali dla osi *OY*.

#### `protected float `[`_Ymax`](#classPzG_1_1LaczeDoGNUPlota_1ad7dfd3fad82ea0720ec89eacc18410bf) 

Górny zakres wyświetlanej skali skali dla osi *OY*.

Określa górny zakres wyświetlanej skali dla osi *OY*.

#### `protected float `[`_Zmin`](#classPzG_1_1LaczeDoGNUPlota_1a8f9797e881df35f4206cb7d8030e5edc) 

Dolny zakres wyświetlanej skali skali dla osi *OZ*.

Określa dolny zakres wyświetlanej skali dla osi *OZ*.

#### `protected float `[`_Zmax`](#classPzG_1_1LaczeDoGNUPlota_1a26949eedd421832f0f206ce3c8f90694) 

Górny zakres wyświetlanej skali skali dla osi *OZ*.

Określa górny zakres wyświetlanej skali dla osi *OZ*.

#### `protected float `[`_Xskala`](#classPzG_1_1LaczeDoGNUPlota_1a2c9303c4dbb4c9f0ddc4f1fe02eb3f70) 

Wartość tego pola definiuje skalowanie rysunku wzdłuż osi *OX* (oś horyzontalna ekranu).

#### `protected float `[`_Zskala`](#classPzG_1_1LaczeDoGNUPlota_1a85446d06b2d714b2f852ef43c47c73c1) 

Wartość tego pola definiuje skalowanie rysunku wzdłuż osi *OZ* (oś wertykalna ekranu).

#### `protected float `[`_Xrotacja`](#classPzG_1_1LaczeDoGNUPlota_1a21e77f0a2bfb7fed989b6dc2d64b5a7e) 

Wartość tego pola definiuje rotację rysunku (zmiane punktu patrzenia) względem osi *OX*.

#### `protected float `[`_Zrotacja`](#classPzG_1_1LaczeDoGNUPlota_1aa65781b1ff96dfb31a780e98ee28d6ed) 

Wartość tego pola definiuje rotację rysunku (zmiane punktu patrzenia) względem osi *OZ*.

#### `protected bool `[`_PokazOs_OX`](#classPzG_1_1LaczeDoGNUPlota_1a833aa8994b9913786f920ec8c259731f) 

Czy oś OX ma być widoczna.

Przechowuje informację decydującą o tym czy oś OX będzie widoczna na rysunku (`true`), czy też nie (`false`).

#### `protected bool `[`_PokazOs_OY`](#classPzG_1_1LaczeDoGNUPlota_1ae8d9b4dac5eae6ce86b7043c45b70ed8) 

Czy oś OY ma być widoczna.

Przechowuje informację decydującą o tym czy oś OY będzie widoczna na rysunku (`true`), czy też nie (`false`).

#### `protected bool `[`_PokazOs_OZ`](#classPzG_1_1LaczeDoGNUPlota_1a5b0afc06dc248790d2e7475b2162e309) 

Czy oś OZ ma być widoczna.

Przechowuje informację decydującą o tym czy oś OZ będzie widoczna na rysunku (`true`), czy też nie (`false`).

#### `protected inline virtual bool `[`DopiszPlikiDoPoleceniaRysowania`](#classPzG_1_1LaczeDoGNUPlota_1a25585ec3f1bd3b6bf42f374c38b8d237)`(std::string & Polecenie,char const ** Sep)` 

Tworzy listę parametrów umożliwiających rysowanie dodatkowych elementów.

Metoda ta przewidziana jest jako element rozszerzenia pozwalającego w klasach pochodnych powiększyć listę rysowanych elementów. Parametr *Polecenie* powinien zawierać polecenie *plot* lub *splot*, do którego będzie możliwe dopisanie dalszego ciągu. 

#### Parameters
* `Polecenie` - polecenie rysowania, do którego mają być dopisane nazwy plików i odpowiednie parametry dla polecenia plot. 

* `Sep` - zawiera znak separatora między poszczególnymi parametrami. Jeżeli parametry listy przeszkód są generowane jako pierwsze, to zmienna ta musi być wskaźnikiem do wskaźnika na łańcuch: " ".

#### `protected std::string `[`ZapiszUstawienieZakresu`](#classPzG_1_1LaczeDoGNUPlota_1a4579aecf7b4777fdde0cae4e98c275c2)`(char Os) const` 

Tworzy polecenie ustawiające zakres dla danej współrzędnej.

Tworzy polecenie dla programu *gnuplot* ustawiające zakres współrzędnych wybranej współrzędnej *x*, *y* lub *z*, dla której ma być tworzony dany rysunek. 
#### Parameters
* `Os` - zawiera znak określający współrzędną, dla której ma zostać wygenerowane polecenie ustawienia zakresu. 

#### Returns
łańcuch znaków polecenia ustawiającego żądany zakres dla wybranej współrzędnej.

#### `protected std::string `[`ZapiszUstawienieRotacjiISkali`](#classPzG_1_1LaczeDoGNUPlota_1aa92b463e8cbae31b50dd797a4183bce8)`() const` 

Tworzy polecenie ustawiające punkt obserwacji.

Tworzy polecenie dla programu *gnuplot* ustawiajające punkt obserwacji poprzez zadanie rotacji i skali dla poszczególnych osi.

#### `protected bool `[`PrzeslijDoGNUPlota`](#classPzG_1_1LaczeDoGNUPlota_1a5063854b7232a7951d120a21df63f2b7)`(const char * Polecenie)` 

Przesyła na wejście programu *gnuplot* zadany ciąg znaków. 
#### Parameters
* `Polecenie` - komunikat przeznaczony do przeslania.

Musi być zainicjowane połączenie z programem gnuplot.

#### Parameters
* `true` - jesli przeslanie polecenia zakończyło się powodzeniem, 

* `false` - w przypadku przeciwnym.

#### `protected inline bool `[`CzyWyswietlacKomunikaty`](#classPzG_1_1LaczeDoGNUPlota_1a5e4f3a226ed36f7110032d802d84847c)`() const` 

Udostępnia informację czy mają być wyświetlane informacje o błędach.

Udostępnia wartość pola [_WyswietlajKomunikatyOBledach](#classPzG_1_1LaczeDoGNUPlota_1a2f2800f14ebfe1caef0b4d30c410a7fe). Określa ono, czy mają być wyświetlane komunikaty o błędach na wyjście standardowe, czy też nie.

#### `protected bool `[`UtworzProcesPotomny`](#classPzG_1_1LaczeDoGNUPlota_1a1c7b9acc40de8d8bbb40fb0722512933)`()` 

Uruchamia program *gnuplot* jako proces potomny.

#### `protected void `[`KomunikatBledu`](#classPzG_1_1LaczeDoGNUPlota_1a90056743aeaa546721528005f2cf41e6)`(const char * Komunikat) const` 

Wyświetla na wyjście "standard error" komunikat (przekazany jako parametr), o ile pole [_WyswietlajKomunikatyOBledach](#classPzG_1_1LaczeDoGNUPlota_1a2f2800f14ebfe1caef0b4d30c410a7fe) ma wartość `true`. W przypadku przeciwnym komunikat nie jest wyświetlany.

#### `protected void `[`BudujPreambulePoleceniaRysowania`](#classPzG_1_1LaczeDoGNUPlota_1a0da98f68f533070d5a32adbdb519cf56)`(std::string & Preambula) const` 

Tworzy preambułę poprzedzającą polecenie rysowania.

Tworzy zbiór poleceń, które ustawiają właściwy tryb rysowania oraz zakresy współrzędnych, jak też wszystkie inne parametry wynikające z przyjętego trybu rysowania.

#### `protected void `[`BudujPreambule_2D`](#classPzG_1_1LaczeDoGNUPlota_1a0ac655ff1934abb69ea668cd92ae77ec)`(std::string & Preambula) const` 

Tworzy preambułę poprzedzającą polecenie rysowania w trybie 2D.

Tworzy zbiór poleceń, które ustawiają właściwy tryb rysowania oraz zakresy współrzędnych, jak też wszystkie inne parametry wynikające z trybu rysowania 2D.

#### `protected void `[`BudujPreambule_3D`](#classPzG_1_1LaczeDoGNUPlota_1a50a544677e52829cac4dd4a95b821dcb)`(std::string & Preambula) const` 

Tworzy preambułę poprzedzającą polecenie rysowania w trybie 3D.

Tworzy zbiór poleceń, które ustawiają właściwy tryb rysowania oraz zakresy współrzędnych, jak też wszystkie inne parametry wynikające z trybu rysowania 3D.

# class `GraphicObject` 

```
class GraphicObject
  : public VerticesCollection
```  

This class fully represents graphic object in program. [GraphicObject](#classGraphicObject) inherit from [VerticesCollection](#classVerticesCollection)

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`GraphicObject`](#classGraphicObject_1ae1b56ae4484ad120f5ba77c0b683a045)`()` | Constructor for [GraphicObject](#classGraphicObject)
`public void `[`SetLocation`](#classGraphicObject_1a8dc588d1a3bd20ba79a9da1d651ec454)`(double x,double y)` | Sets new location for object 
`public `[`Vector2D`](#Vector2D_8h_1a2a0274942d24318d2654bd0f75c54fb7)` `[`GetLocation`](#classGraphicObject_1adc2f473f234cedd0a512a4e1c41e3fa4)`()` | #### Returns
`public void `[`SetOrientationAngle`](#classGraphicObject_1a19bc9ba1759660382867ff151501f5a0)`(double angle)` | Sets new rotation of object of object in degrees 
`public double `[`GetOrientationAngleRad`](#classGraphicObject_1a1f78c24074e454b60ed986a29722c1ff)`()` | #### Returns
`public void `[`SetFileName`](#classGraphicObject_1a0dfb2d11fad4237edb8653fd6df609e9)`(std::string fname)` | Sets file name with vertices for graphic object 
`public const char * `[`GetFileName`](#classGraphicObject_1adb1852f7b3906ab7c69c664f3fcd9388)`()` | #### Returns
`public bool `[`SaveToFile`](#classGraphicObject_1a2c68d0e1ae71d0d866455fa39f3d60ce)`()` | Saves vertices to file 

## Members

#### `public  `[`GraphicObject`](#classGraphicObject_1ae1b56ae4484ad120f5ba77c0b683a045)`()` 

Constructor for [GraphicObject](#classGraphicObject)

#### `public void `[`SetLocation`](#classGraphicObject_1a8dc588d1a3bd20ba79a9da1d651ec454)`(double x,double y)` 

Sets new location for object 
#### Parameters
* `x` coordinate x 

* `y` coordinate y

#### `public `[`Vector2D`](#Vector2D_8h_1a2a0274942d24318d2654bd0f75c54fb7)` `[`GetLocation`](#classGraphicObject_1adc2f473f234cedd0a512a4e1c41e3fa4)`()` 

#### Returns
Current location of object

#### `public void `[`SetOrientationAngle`](#classGraphicObject_1a19bc9ba1759660382867ff151501f5a0)`(double angle)` 

Sets new rotation of object of object in degrees 
#### Parameters
* `angle` rotation angle expressed in degrees

#### `public double `[`GetOrientationAngleRad`](#classGraphicObject_1a1f78c24074e454b60ed986a29722c1ff)`()` 

#### Returns
Current rotation of object expressed in radians

#### `public void `[`SetFileName`](#classGraphicObject_1a0dfb2d11fad4237edb8653fd6df609e9)`(std::string fname)` 

Sets file name with vertices for graphic object 
#### Parameters
* `fname` file name

#### `public const char * `[`GetFileName`](#classGraphicObject_1adb1852f7b3906ab7c69c664f3fcd9388)`()` 

#### Returns
File name for graphic object

#### `public bool `[`SaveToFile`](#classGraphicObject_1a2c68d0e1ae71d0d866455fa39f3d60ce)`()` 

Saves vertices to file 
#### Returns
Is file successfully saved?

# class `Path` 

```
class Path
  : public GraphicObject
```  

Class represents the path of moving the [Robot](#classRobot) object [Path](#classPath) inherits from [GraphicObject](#classGraphicObject)

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------

## Members

# class `Robot` 

```
class Robot
  : public GraphicObject
```  

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  `[`Robot`](#classRobot_1ad228181e400915ecb155fbe904d828ab)`(std::string rfile,std::string pfile)` | Constructor for [Robot](#classRobot)
`public void `[`Move`](#classRobot_1ab259b89805dff8afe10bac7fb25da974)`(double distance)` | Moves robot by a given distance 
`public void `[`Rotate`](#classRobot_1a1cb405ec49d47c46f3aa87fde1415b59)`(double angle)` | Rotates robot by a given angle expressed in degrees 
`public `[`Path`](#classPath)` & `[`GetPath`](#classRobot_1a463fc583a30a58358fcf8e2ef052accd)`()` | #### Returns

## Members

#### `public  `[`Robot`](#classRobot_1ad228181e400915ecb155fbe904d828ab)`(std::string rfile,std::string pfile)` 

Constructor for [Robot](#classRobot)
#### Parameters
* `rfile` file where [Robot](#classRobot)'s vertices are save to 

* `pfile` file where path's vertices are save to

#### `public void `[`Move`](#classRobot_1ab259b89805dff8afe10bac7fb25da974)`(double distance)` 

Moves robot by a given distance 
#### Parameters
* `distance` distance to move

#### `public void `[`Rotate`](#classRobot_1a1cb405ec49d47c46f3aa87fde1415b59)`(double angle)` 

Rotates robot by a given angle expressed in degrees 
#### Parameters
* `angle` rotation angle expressed in degrees

#### `public `[`Path`](#classPath)` & `[`GetPath`](#classRobot_1a463fc583a30a58358fcf8e2ef052accd)`()` 

#### Returns
reference to path

# class `Scene` 

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public void `[`RenderMove`](#classScene_1a4c4182f461b3874840a721b3e9828eae)`(double distance)` | Render and animate move 
`public void `[`RenderRotate`](#classScene_1a849cf1c78718f18d5ae36c7ca7a38562)`(double angle)` | Render and animate rotate 
`public void `[`Menu`](#classScene_1ac43d99a498fae214af6a7f52f1ce510b)`()` | Prints menu
`public void `[`Render`](#classScene_1a91913b921d41d374e00eac347358dc14)`()` | Render objects using GNUPlot and menu

## Members

#### `public void `[`RenderMove`](#classScene_1a4c4182f461b3874840a721b3e9828eae)`(double distance)` 

Render and animate move 
#### Parameters
* `distance` distance to move

#### `public void `[`RenderRotate`](#classScene_1a849cf1c78718f18d5ae36c7ca7a38562)`(double angle)` 

Render and animate rotate 
#### Parameters
* `angle` angle to rotate expressed in degrees

#### `public void `[`Menu`](#classScene_1ac43d99a498fae214af6a7f52f1ce510b)`()` 

Prints menu

#### `public void `[`Render`](#classScene_1a91913b921d41d374e00eac347358dc14)`()` 

Render objects using GNUPlot and menu

# class `SVector` 

Template for Vector

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`SVector`](#classSVector_1abfa8373f84e633e4e3e1809872a8407e)`()` | 
`public inline  `[`SVector`](#classSVector_1a73f43519424798b4987b2c462798817e)`(STyp x,STyp y)` | 
`public inline STyp `[`operator[]`](#classSVector_1a1791455c796655130e02fddab501c0d5)`(unsigned int Ind) const` | 
`public inline STyp & `[`operator[]`](#classSVector_1ad45c95945940a25c4d9bbb7c7eca6226)`(unsigned int Ind)` | 
`public `[`SVector`](#classSVector)`< STyp, SWymiar > `[`operator-`](#classSVector_1a55a33376410034fd14e7534f0544d0ee)`(const `[`SVector`](#classSVector)`< STyp, SWymiar > & Odjemnik) const` | 
`public `[`SVector`](#classSVector)`< STyp, SWymiar > `[`operator+`](#classSVector_1ab953dcf9cd5c055a6220181472e1c143)`(const `[`SVector`](#classSVector)`< STyp, SWymiar > & Skl2) const` | 
`public `[`SVector`](#classSVector)`< STyp, SWymiar > `[`operator*`](#classSVector_1a8a915532614341a6365ddb74b1eca496)`(double Mnoznik) const` | 

## Members

#### `public inline  `[`SVector`](#classSVector_1abfa8373f84e633e4e3e1809872a8407e)`()` 

#### `public inline  `[`SVector`](#classSVector_1a73f43519424798b4987b2c462798817e)`(STyp x,STyp y)` 

#### `public inline STyp `[`operator[]`](#classSVector_1a1791455c796655130e02fddab501c0d5)`(unsigned int Ind) const` 

#### `public inline STyp & `[`operator[]`](#classSVector_1ad45c95945940a25c4d9bbb7c7eca6226)`(unsigned int Ind)` 

#### `public `[`SVector`](#classSVector)`< STyp, SWymiar > `[`operator-`](#classSVector_1a55a33376410034fd14e7534f0544d0ee)`(const `[`SVector`](#classSVector)`< STyp, SWymiar > & Odjemnik) const` 

#### `public `[`SVector`](#classSVector)`< STyp, SWymiar > `[`operator+`](#classSVector_1ab953dcf9cd5c055a6220181472e1c143)`(const `[`SVector`](#classSVector)`< STyp, SWymiar > & Skl2) const` 

#### `public `[`SVector`](#classSVector)`< STyp, SWymiar > `[`operator*`](#classSVector_1a8a915532614341a6365ddb74b1eca496)`(double Mnoznik) const` 

# class `VerticesCollection` 

Set of vertices. Contain std::vector<Vector2D> where vertices are held and methods to Get/Set/Modify it.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public void `[`AddVertex`](#classVerticesCollection_1ad48453b9bc2a25aba1b67b51ab295b1d)`(`[`Vector2D`](#Vector2D_8h_1a2a0274942d24318d2654bd0f75c54fb7)` Vertex)` | Adds a new vertex to the end of the vertices 
`public void `[`AddVertex`](#classVerticesCollection_1afb7e83a7d84185b40ade1b2999edd108)`(double x,double y)` | Creates a new vertex and adds it to the end of the vertices 
`public void `[`RemoveVertices`](#classVerticesCollection_1a92a341f41b621dad57b7ab74265f1a14)`()` | Remove all vertices
`public `[`Vector2D`](#Vector2D_8h_1a2a0274942d24318d2654bd0f75c54fb7)` `[`GetVertex`](#classVerticesCollection_1a8d7a19d4bd0971cc0ac81ae1b0252ef3)`(int position)` | Returns vertex at given position 
`public int `[`VerticesSize`](#classVerticesCollection_1a357dc6b6248ad83862febe8a952abb3a)`()` | #### Returns
`public void `[`RemoveLastVertex`](#classVerticesCollection_1ad0c22e7014760ba1cf5c15230657fa81)`()` | Removes vertex from last position in vertices

## Members

#### `public void `[`AddVertex`](#classVerticesCollection_1ad48453b9bc2a25aba1b67b51ab295b1d)`(`[`Vector2D`](#Vector2D_8h_1a2a0274942d24318d2654bd0f75c54fb7)` Vertex)` 

Adds a new vertex to the end of the vertices 
#### Parameters
* `Vertex` vertex to add

#### `public void `[`AddVertex`](#classVerticesCollection_1afb7e83a7d84185b40ade1b2999edd108)`(double x,double y)` 

Creates a new vertex and adds it to the end of the vertices 
#### Parameters
* `x` coordinate x 

* `y` coordinate y

#### `public void `[`RemoveVertices`](#classVerticesCollection_1a92a341f41b621dad57b7ab74265f1a14)`()` 

Remove all vertices

#### `public `[`Vector2D`](#Vector2D_8h_1a2a0274942d24318d2654bd0f75c54fb7)` `[`GetVertex`](#classVerticesCollection_1a8d7a19d4bd0971cc0ac81ae1b0252ef3)`(int position)` 

Returns vertex at given position 
#### Parameters
* `position` vertex's index 

#### Returns
Vertex from given position

#### `public int `[`VerticesSize`](#classVerticesCollection_1a357dc6b6248ad83862febe8a952abb3a)`()` 

#### Returns
Number of elements in vertices

#### `public void `[`RemoveLastVertex`](#classVerticesCollection_1ad0c22e7014760ba1cf5c15230657fa81)`()` 

Removes vertex from last position in vertices

Generated by [Moxygen](https://sourcey.com/moxygen)