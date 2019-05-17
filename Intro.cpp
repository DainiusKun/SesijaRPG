#include "Funkcijos.h"
void intro()
{
    ifstream fd("banner.txt");
    if(fd.is_open())
    {
        string linija;
        while(getline(fd, linija, '\n'))
        {
            system("color");
            cout << linija <<endl;
        }
        fd.close();
    }
    system("pause");
}
