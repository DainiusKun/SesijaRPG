#include "Funkcijos.h"
extern Klass Va;
#include "random.hpp"
using Random = effolkronium::random_static;
void Did(string &VM);
void Kova();
void EV(string V, int&Z);
void Egza()
{
    string V;
    cout << "*Einate i egzamina*" << endl;
    system("pause");
    system("cls");
    cout <<"Destytojas: Ar esate pasiruose?" << endl;
    cout <<"Z - Taip\nX - Ne\n";
    kbhit();
    V = getch();
    Did(V);
    if(V=="Z") cout << "Destytojas: Gerai pradedame." << endl;
    if(V=="X")
    {
        cout << "Destytojas: Na, gal 5-etui istemsite." << endl;
        Va.mobDMG(Va.hp);
        Va.hpCheck(Va.hp, Va.maxHP);
    }
    Kova();
}
void Kova()
{
    int n, d, v, Z=0, k = 0;
    string V;
    int uzmaxHp;
    double patikra;
    string vardas;
    vector <int> uzHp;
    n=Random::get(1, 4);
    if(n==1)cout << "*Destytojas pateikia " << n << " uzdavini.*" << endl;
    else cout << "*Destytojas pateikia " << n << " uzdavinius.*" << endl;
    uzmaxHp=100/n;
    d = n;
    system("pause");
    system("cls");
    for(int i = 0; i < n; i++)
    {
        uzHp.push_back(uzmaxHp);
    }
    //cout << uzHp[0] << endl;
    while(d!=0 && !(Va.hp<=0))
    {
        cout << "Kuri uzdavini puolate?" << endl;
        for(int j = 0; j < n; j++)
        {
            patikra = (double(uzHp[j])/double(uzmaxHp))*100;
            cout << j+1 << "-aji " << patikra << " % liko padaryti" << endl;
        }
        kbhit();
        v = getch();
        cout << v << endl;
        while (!(v>=49 && v<=49+n))
        {
            cout << "Tokio uzdavinio nera, rinkites kita." << endl;
            kbhit();
            v = getch();
        }

        //cout << v << endl;
        //cout << v << endl;
        //cout << uzHp[v-49] << endl;
        while(uzHp[v-49]<=0)
        {
            cout << "Sis uzdavinys atliktas, rinkites kita." << endl;
            kbhit();
            v = getch();
        }
        EV(V, Z);
        Va.Zala(Va.DMG, Va.P, Va.dmg, Va.klase);
        uzHp[v-49]-=(Va.dmg+Z);
        Z = 0;
        if(uzHp[v-49]<=0) d--;
        for(int g = 0; g < d; g++)
        {
            Va.egDMG(Va.hp);
        }
        Va.hpCheck(Va.hp, Va.maxHP);
        system("pause");
        system("cls");
    }
    if(Va.hp<=0)
    {
        cout << "Neislaikete egzamino, susitiksime kitamet." << endl;
        system("Pause");
        exit(0);
    }
    else
    {
        cout << "Priminkite, koks Jusu vardas?" << endl;
        cin >> vardas;
        if(vardas!=Va.vardas) cout << "Atsiprasome, neislaikete egzamino, susitiksime kitamet. Jus nezinote net savo vardo." << endl;
        else cout << "Sveikiname islaikius egzamina." << endl;
    }
}
void EV(string V, int&Z)
{
    while(!(V=="Z" || V=="X" || V=="C" || V=="F"))
    {
        cout << "Papildomas veiksmas?\nZ - Nusirasyti\nX - Klausti draugo\nC - Klausti destytojo\nF - Nedaryti nieko." << endl;
        kbhit();
        V = getch();
        Did(V);
        if(V=="Z")
        {
            Va.Ran(Va.pasala,Va.P);
            if(Va.P>=15)
                        {
                            cout << "Pavyko nusirasyti." << endl;
                            Z=15;
                            system("pause");
                        }
                        else
                        {
                            cout << "Destytojas: Kas cia nusirasineja?" << endl;
                            cout << "Susitiksime kitamet, viso gero." << endl;
                            system("pause");
                            exit(0);
                        }
        }
        if(V=="X")
        {
            Va.Ran(Va.gasdinimas,Va.G);
            if(Va.G>=15)
            {
                cout << "*Grupiokas pasako atsakyma*" << endl;
                Z=10;
                system("pause");
            }
            if(Va.G<15&&Va.G>10)
            {
                cout << "*Grupiokas nepasako nieko*" << endl;
                system("pause");
            }
            else
            {
                cout << "*Grupiokas pasako atsakyma*" << endl;
                Z=-10;
                system("pause");
            }
        }
        if(V=="C")
        {
            Va.Ran(Va.uztarimas,Va.U);
            if(Va.U>=15)
            {
                cout << "Destytojas: Na pamastykite." << endl;
                Z=1;
                system("pause");
            }
            if(Va.U<15&&Va.U>10)
            {
                cout << "Destytojas: Tiesiog rasykite." << endl;
                system("pause");
            }
            if(Va.U<=10)
            {
                cout << "Destytojas:..." << endl;
                system("pause");
            }
        }
    }
}
