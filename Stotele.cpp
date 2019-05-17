#include "Funkcijos.h"
#include "Klass.h"
extern Klass Va;
void Did(string &VM);
void AtsA(string &A);
void AtsB(string &B, int &n);
void AtsC(string &C);
void Stotele()
{
    int n = 0;
    string Snausti="TAIP";
    string klausimas;
    cout << "Iseinate is namu. Nueinate i stotele ir laukiate autobuso.\n";
    cout << "Prieina prie jusu neaiskus zmogus." << endl;
    system ("pause");
    system("cls");
    cout << "Neaiskus vyras: Ar galetumete padeti man? Ka tik istojau i universiteta ir man reikia pinigu, kad nusipirkciau LSP." << endl;
    cout << "Ka darote?"<<endl;
    cout << "a) Duodate pinigu \nb) Ignoruojate \nc) Kovojate \n";
    cin >> klausimas;
    system("cls");
    Did(klausimas);
    AtsA(klausimas);
    AtsB(klausimas, n);
    AtsC(klausimas);
}
void AtsA(string &A)
{
    Did(A);
    if(A == "A") cout << "Neaiskus vyras: Aciu Jus labai, telaimina Jus Dievas." << endl;
}
void AtsB(string &B, int &n)
{
    if(n>5) cout << "Neaiskus zmogus nuejo." << endl;
    if(n==4 && B=="A")
    {
        cout << "Praleidote autobusa, prazioplinote sesija.";
        system("Pause");
        exit(0);
    }
    else
    {
        Did(B);
        if(B == "B")
        {
            n++;
            cout << "Neaiskus vyras: Ka tau gaila?" << endl;
            cout << "Ka darote?"<<endl;
            cout << "a) Duodate pinigu \nb) Ignoruojate \nc) Kovojate \n";
            cin >> B;
            system("cls");
            Did(B);
            AtsA(B);
            AtsB(B, n);
        }
    }
}
void AtsC(string &C)
{
    Va.mobDMG(Va.hp);
    cout << "Gavote i galva." << endl;
    cout << "Jus turite " << Va.hp <<"/" << Va.maxHP << endl;
    system("pause");
}
