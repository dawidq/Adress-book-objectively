#ifndef PLIKZUZUYTKOWNIKAMI_H
#define PLIKZUZUYTKOWNIKAMI_H
#include <iostream>
#include <vector>
#include <fstream>

#include <cstdlib>

#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"
using namespace std;

class PlikZuzytkownikami
{
    const string NAZWA_PLIKU_Z_UZYTKOWNIKAMI;
    bool czyPlikJestPusty();
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);

public:
    PlikZuzytkownikami(string nazwaPlikuZUzytkownikami):NAZWA_PLIKU_Z_UZYTKOWNIKAMI(nazwaPlikuZUzytkownikami){};
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector <Uzytkownik> wczytajUzytkownikowZPliku();
    void zapiszWszystkichUzytkownikowDoPliku(vector<Uzytkownik> uzytkownicy);

};
#endif
