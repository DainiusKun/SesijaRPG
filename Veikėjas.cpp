#include "Funkcijos.h"
//#include "Klase.h"
#include "Klass.h"
Klass Va;
void Did(string &VM);
void veikejas()
{
    string klase, rase, vardas, lytis;
    cout << "Pasirinkite klase:\nSukcius, Vienuolis ar Karys?\n";
    cin >> klase;
    cout << "Pasirinkite rase:\nNeuzauga, Zmogedra ar Zmogus?\n";
    cin >> rase;
    cout << "Kuo Jus vardu?" << endl;
    cin >> vardas;
    cout << "Jus vyras ar moteris?\n";
    cin >> lytis;
    Did(klase);
    Did(rase);
    Did(lytis);
    system("pause");
    Va.Rase(rase,lytis,Va.maxHP,Va.U);
    if(klase=="SUKCIUS")Va.sukcius(rase, lytis, Va.maxHP, Va.HP, Va.DMG, Va.P, Va.U, Va.G);
    if(klase=="VIENUOLIS")Va.Vienuolis(rase, lytis, Va.maxHP, Va.HP, Va.DMG, Va.P, Va.U, Va.G);
    if(klase=="KARYS")Va.Karys(rase, lytis, Va.maxHP, Va.HP, Va.DMG, Va.P, Va.U, Va.G);
    cout << "Tavo rase:" << rase << endl;
    cout << "Tavo klase:" << klase << endl;
    cout << "Tavo gyvybiu kiekis:" << Va.maxHP << endl;
    Va.Ran(Va.pasala, Va.P);
    Va.Ran(Va.uztarimas, Va.U);
    Va.Ran(Va.gasdinimas, Va.G);
    cout << "Tavo miklumas:" << Va.P << endl;
    cout << "Tavo apsukrumas:" << Va.U << endl;
    cout << "Tavo piktumas:" << Va.G << endl;
    cout << endl;
    //sukcius sukcius;
    //cout << sukcius.dmg << endl;
}
void Did(string &VM)
{
  transform(VM.begin(), VM.end(), VM.begin(), ::toupper);
}
