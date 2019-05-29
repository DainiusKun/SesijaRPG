#include "Funkcijos.h"
#include "Klass.h"
extern Klass Va;
void Did(string &VM);
void AtsA(string &A, int n);
void AtsB(string &B, int &n);
void AtsC(string &C, int n);
void AtsF(string &F, int n);
void Stotele()
{
    int n = 0;
    string klausimas;
    cout << "Iseinate is namu. Nueinate i stotele ir laukiate autobuso.\n";
    cout << "Prieina prie jusu neaiskus zmogus." << endl;
    system ("pause");
    system("cls");
    cout << "Neaiskus vyras: Ar galetumete padeti man? Ka tik istojau i universiteta ir man reikia pinigu, kad nusipirkciau LSP." << endl;
    while(!(klausimas=="Z" || klausimas=="X" || klausimas == "C" || klausimas == "F"))
    {
        cout << "Ka darote?"<<endl;
        cout << "Z - Duodate pinigu \nX - Ignoruojate \nC - Kovojate \nF - Papildomas veiksmas";
        //cin >> klausimas;
        kbhit();
        klausimas = getch();
        Did(klausimas);
        system("cls");
    }
        AtsA(klausimas, n);
        AtsB(klausimas, n);
        AtsC(klausimas, n);
        AtsF(klausimas, n);
}
void AtsA(string &A, int n)
{
    Did(A);
    if(A == "Z")
    {
        cout << "Neaiskus vyras: Aciu Jus labai, telaimina Jus Dievas." << endl;
        system("pause");
    }
    if(n>=4 && A=="Z")
    {
        cout << "Praleidote autobusa, prazioplinote sesija." << endl;
        system("pause");
        exit(0);
    }
}
void AtsB(string &B, int &n)
{
    if(n>5)
    {
        cout << "Neaiskus zmogus nuejo." << endl;
        system("pause");
    }
    else
    {
        Did(B);
        if(B == "X")
        {
            n++;
            cout << "Neaiskus vyras: Ka tau gaila?" << endl;
            cout << "Ka darote?"<<endl;
            cout << "Z - Duodate pinigu \nX - Ignoruojate \nC - Kovojate \nF - Papildomas veiksmas\n";
            kbhit();
            B = getch();
            system("cls");
            Did(B);
            AtsA(B, n);
            AtsB(B, n);
        }
    }
}
void AtsC(string &C, int n)
{
    if(C == "C")
    {
        Va.mobDMG(Va.hp);
        cout << "Gavote i galva." << endl;
        Va.hpCheck(Va.hp,Va.maxHP);
        system("pause");
    }
    if(n>=4 && C=="C")
    {
        cout << "Praleidote autobusa, prazioplinote sesija." << endl;
        system("pause");
        exit(0);
    }
}
void AtsF(string &F, int n)
{
    if(F == "F")
    {
        cout << "Ka darote?" << endl;
        cout << "F - Itikinti zmogu" << endl;
        cout << "Z - Duodate pinigu \nX - Ignoruojate \nC - Kovojate \n" << endl;
        kbhit();
        F = getch();
        Did(F);
        if(F=="F")
        {
            Va.Ran(Va.uztarimas,Va.U);
            if(Va.U>=15)
            {
                system("cls");
                cout << "Neaiskus zmogus: Zinokite, manau Jums reikia pinigu." << endl;
                cout << "*Neaiskus zmogus duoda pinigus Jums*" << endl;
                system("pause");
            }
            else
            {
                system("cls");
                cout << "Zmogus: Jeigu neturite pinigu, nereikia." << endl;
                cout << "*Zmogus nueina*" << endl;
                system("pause");
            }
        }
        else
        {
            AtsA(F, n);
            AtsB(F, n);
            AtsC(F, n);
        }
    }
}
