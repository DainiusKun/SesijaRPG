#include "Funkcijos.h"
extern Klass Va;
void Did(string &VM);
void Uni()
{
    string V;
    cout << "Islipe ir autobuso nueinate prie universiteto duru.\n";
    cout << "Z - Atidaryti duris\nX - papildomas veiksmas";
    kbhit();
    V = getch();
    Did(V);
    if(V=="X")
    {
        cout << "Z - Isliukinti i universiteta.\nX - Gasdinti universiteto duris.\nC - Tartis su universiteto durimis." << endl;
        V = getch();
        Did(V);
        if(V=="Z")
        {
            Va.Ran(Va.pasala,Va.P);
            if(Va.P>=15)
            {
                cout << "Isliukinate i universiteta.";
            }
            else
            {
                if(Va.P<=15 && Va.P>=10) cout << "Ieinate i universiteta.";
                else
                {
                    cout << "Idrimbate i universiteta.";
                    Va.hp-=1;
                    Va.hpCheck(Va.hp,Va.maxHP);
                }
            }
        }
        while(V=="X" || V == "Z")
        {
            V = getch();
            Did(V);
            cout << "Nieko neivyko. Bandykite kazka kito.\n";
        }
    }
}
