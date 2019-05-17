#include "Klass.h"
#include "random.hpp"
#include "Funkcijos.h"
using Random = effolkronium::random_static;
Klass::Klass()
{
    std::string klase;
    string rase;
    string lytis;
    int dmg;
    int hp;
    int maxHP = 2;
    int pasala=0;
    int uztarimas=0;
    int gasdinimas=0;
    int DMG=0;
    //ctor
}

Klass::~Klass()
{
    //dtor
}
void Klass::Rase(string rase,string lytis,int &maxHP,int &uztarimas, int &pasala, int &gasdinimas)
{
    if(rase=="NEUZAUGA")
    {
        maxHP+=2;
        pasala+=2;
    }
    if(rase=="ZMOGEDRA")
    {
        maxHP+=8;
        pasala-=1;
        gasdinimas+=2;
    }
    if(rase=="ZMOGUS")
    {
        maxHP+=5;
        uztarimas+=1;
    }
    if(lytis=="VYRAS")
    {
        maxHP+=9;
        gasdinimas+=1;
    }
    if(lytis=="MOTERIS")
    {
        maxHP+=6;
        uztarimas+=5;
    }
}
void Klass::Klase(string klase, int &maxHP, int &HP, int &DMG, int &pasala, int &uztarimas, int &gasdinimas)
{
    if(klase =="SUKCIUS")
    {
        maxHP+=5;
        DMG+=6;
        pasala+=5;
        uztarimas+=5;
        gasdinimas+=5;
    }
    if(klase =="VIENUOLIS")
    {
        maxHP+=8;
        DMG=+3;
        uztarimas+=8;
        gasdinimas+=8;
    }
    if(klase=="KARYS")
    {
        maxHP+=10;
        DMG=+8;
        pasala-=2;
        uztarimas+=5;
        gasdinimas+=8;
    }
    hp = maxHP;
}
void Klass::Ran(int veiksmas, int&v)
{
    v=veiksmas+Random::get(1, 20);
}
void Klass::Zala(int DMG, int P, int&dmg, string klase)
{
    if(P>=15 && klase=="sukcius") S(dmg);
    dmg=DMG+Random::get(1, 8);
}
void Klass::S(int&v)
{
    v+=Random::get(1, 6);
}
void Klass::mobDMG(int&v)
{
    v-=Random::get(1, 6);
}
