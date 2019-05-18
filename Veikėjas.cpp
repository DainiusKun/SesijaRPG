#include "Funkcijos.h"
//#include "Klase.h"
#include "Klass.h"
Klass Va;
void Did(string &VM);
void veikejas()
{
    string vardas;
    cout << "Pasirinkite klase:\nSukcius, Vienuolis ar Karys?\n";
    cin >> Va.klase;
    cout << "Pasirinkite rase:\nNeuzauga, Zmogedra ar Zmogus?\n";
    cin >> Va.rase;
    cout << "Kuo Jus vardu?" << endl;
    cin >> vardas;
    cout << "Jus vyras ar moteris?\n";
    cin >> Va.lytis;
    Did(Va.klase);
    Did(Va.rase);
    Did(Va.lytis);
    system("pause");
    Va.Rase(Va.rase, Va.lytis, Va.maxHP, Va.uztarimas, Va.pasala, Va.gasdinimas);
    Va.Klase(Va.klase, Va.maxHP,Va.hp, Va.DMG, Va.pasala, Va.uztarimas, Va.gasdinimas);
    cout << "Tavo rase:" << Va.rase << endl;
    cout << "Tavo klase:" << Va.klase << endl;
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
