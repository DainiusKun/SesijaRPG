#include "Funkcijos.h"
extern Klass Va;
void Did(string &VM);
void papildomas(string &V);
void durys();
void Uni()
{
    string V;
    papildomas(V);
}
void papildomas(string &V)
{
    string ND;
    while(!(V=="Z" || V=="F"))
    {
        cout << "Islipe is autobuso nueinate prie universiteto duru.\n";
        cout << "Z - Atidaryti duris\nF - Papildomas veiksmas" << endl;
        kbhit();
        V = getch();
        Did(V);
        system("cls");
    }
    if(V=="Z")
    {
        cout << "Ieinate i universiteta.\nPrieina prie Jusu destytojas." << endl;
        system("pause");
        system("cls");
        durys();
    }
    if(V=="F")
    {
        system("cls");
        cout << "Z - Isliukinti i universiteta.\nX - Gasdinti universiteto duris.\nC - Tartis su universiteto durimis." << endl;
        V = getch();
        Did(V);
        if(V=="Z")
        {
            Va.Ran(Va.pasala,Va.P);
            if(Va.P>=15)
            {
                cout << "Isliukinate i universiteta." << endl;
            }
            else
            {
                if(Va.P<=15 && Va.P>=10)
                {
                    cout << "Ieinate i universiteta." << endl;
                    durys();
                }
                else
                {
                    cout << "Idrimbate i universiteta." << endl;
                    Va.hp-=1;
                    Va.hpCheck(Va.hp,Va.maxHP);
                    cout << "Destytojas: Atsargiai, kitaip nenueisite iki egzamino." << endl;
                    durys();
                }
            }
        }
        while(V=="X" || V == "C")
        {
            cout << "Nieko neivyko. Bandykite kazka kito.\n";
            system("pause");
            system("cls");
            papildomas(V);
        }
    }
}
void durys()
{
    string V;
    cout << "Destytojas: Atlikote namu darbus?" << endl;
    while(!(V=="Z" || V=="X"|| V=="F"))
    {
        cout << "Z - Taip\nX - Ne\nF - Papildomas veiksmas" << endl;
        kbhit();
        V = getch();
        Did(V);
        system("cls");
        if(V=="Z")
        {
            if(Va.lytis=="VYRAS") cout << "Saunuolis, metas eiti i egzamina." << endl;
            if(Va.lytis=="MOTERIS") cout << "Saunuole, metas eiti i egzamina." << endl;
            system("pause");
        }
        if(V=="X")
        {
            cout << "Labai blogai, negalite laikyti egzamino, susitiksime kitamet.\nViso gero ir geros dienos." << endl;
            system("pause");
            exit(0);
        }
        if(V=="F")
        {
            while(!(V=="Z" || V=="X"))
            {
                cout << "Z - Itikinti, kad atlikote namu darbus.\nX - Tartis su destytoju." << endl;
                V = getch();
                Did(V);
                if(V=="Z")
                {
                    Va.Ran(Va.gasdinimas,Va.G);
                    if(Va.G>=15)
                    {
                        cout << "Na gerai, patikesiu, kad Jus atlikote namu darbus." << endl;
                        cout << "Eikite laikyti egzamina." << endl;
                        system("pause");
                    }
                    else
                    {
                        cout << "Nekabinkime man ant ausu makaronu, neatlikote nieko." << endl;
                        cout << "Susitiksime kitamet, viso gero." << endl;
                        system("pause");
                        exit(0);
                    }
                }
                if(V=="X")
                {
                    Va.Ran(Va.uztarimas,Va.U);
                    if(Va.U>=15)
                    {
                        cout << "Na gerai, paziurekime." << endl;
                        intro();
                        cout << "Visai geras. Eikite laikyti egzamina." << endl;
                        system("pause");
                    }
                    else
                    {
                        cout << "Ne, kieko neiseis, nelaikysite egzamino." << endl;
                        cout << "Susitiksime kitamet, viso gero." << endl;
                        system("pause");
                        exit(0);
                    }
                }
            }
        }
    }
}
