#include "Funkcijos.h"
//#include "Klase.h"
#include "Klass.h"
Klass Va;
void Did(string &VM);
void veikejas()
{
    while(!(Va.klase=="SUKCIUS" || Va.klase=="VIENUOLIS" || Va.klase=="KARYS"))
    {
        cout << "Pasirinkite klase:\nSukcius, Vienuolis ar Karys?\n";
        cin >> Va.klase;
        Did(Va.klase);
    }
    while (!(Va.rase=="NEUZAUGA" || Va.rase=="ZMOGEDRA" || Va.rase=="ZMOGUS"))
    {
        cout << "Pasirinkite rase:\nNeuzauga, Zmogedra ar Zmogus?\n";
        cin >> Va.rase;
        Did(Va.rase);
    }
    cout << "Kuo Jus vardu?" << endl;
    cin >> Va.vardas;
    while (!(Va.lytis=="VYRAS" || Va.lytis=="MOTERIS"))
    {
        cout << "Jus vyras ar moteris?\n";
        cin >> Va.lytis;
        Did(Va.lytis);
    }
    system("pause");
    Va.Rase(Va.rase, Va.lytis, Va.maxHP, Va.uztarimas, Va.pasala, Va.gasdinimas);
    Va.Klase(Va.klase, Va.maxHP,Va.hp, Va.DMG, Va.pasala, Va.uztarimas, Va.gasdinimas);
    //cout << "Tavo rase:" << Va.rase << endl;
    //cout << "Tavo klase:" << Va.klase << endl;
    //cout << "Tavo gyvybiu kiekis:" << Va.maxHP << endl;
    //Va.Ran(Va.pasala, Va.P);
    //Va.Ran(Va.uztarimas, Va.U);
    //Va.Ran(Va.gasdinimas, Va.G);
    //cout << "Tavo miklumas:" << Va.P << endl;
    //cout << "Tavo apsukrumas:" << Va.U << endl;
    //cout << "Tavo piktumas:" << Va.G << endl;
    //cout << endl;
    //sukcius sukcius;
    //cout << sukcius.dmg << endl;
}
void Did(string &VM)
{
  transform(VM.begin(), VM.end(), VM.begin(), ::toupper);
}
