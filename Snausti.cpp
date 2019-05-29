#include "Funkcijos.h"
void Did(string &VM);
void Snausti()
{
    double laikas = 6.5;
    string Snausti="TAIP";
    cout << "Sesija prasidejo" <<endl;
    while(!(Snausti=="NE"))
    {
        cout << "*Zadintuvas skamba*" << endl;
        PlaySound("Death_Metal_Rooster_Alarm_Clock_Version-kYoFkLedTfI.wav", NULL, SND_ASYNC);
        cout << "Snausti?" << endl;
        cin >> Snausti;
        Did(Snausti);
        if(!(Snausti=="NE"))laikas+=0.5;
        system("cls");
    }
    PlaySound(NULL, NULL, SND_ASYNC);
    if(laikas>=8.5)
    {
        cout << "Pramiegojai sesija." << endl;
        system("pause");
        exit(0);
    }
}
