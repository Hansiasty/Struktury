#include <iostream>
#include"stos.h"

using namespace std;

int main()
{
    Stos s(20);
    int x; char odp;
    while(true){
        cout << "podaj liczbe"; cin>> x;

        s.wloz(x);
        s.wypisz();
        cout <<endl;
        cout << "czy koniec pobierania> t- tak";
        cin>>odp;
        if(odp=='t'|| odp=='T') break;
    }
    cout << "Twoj stos:" << endl;
    s.wypisz();
    x=s.zdejmij();
    cout<< "zdjalem"<< x;
    cout << "zostalo";
    s.wypisz();
    return 0;
}
