#ifndef KLASS_H
#define KLASS_H
#include "Funkcijos.h"
using namespace std;
class Klass
{
    public:
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
    int P, U, G;
    Klass();
    void Klase(string klase, int &maxHP, int &HP, int &DMG, int &pasala, int &uztarimas, int &gasdinimas);
    void Zala(int DMG, int P, int&dmg, string klase);
    void S(int&v);
    void Rase(string rase,string lytis,int &maxHP,int &uztarimas, int &pasala, int &gasdinimas);
    void Ran(int veiksmas, int&v);
    void mobDMG(int&v);
    virtual ~Klass();
    protected:

    private:
};
#endif // KLASS_H
