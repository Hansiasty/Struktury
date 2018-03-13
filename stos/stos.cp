#include"stos.h"
#include<iostream>
#include<stdexcept>
using namespace std;
Stos::Stos(int mRozm)
{
    maxRozm=mRozm;
    ileJest=0;
    tabDanych= new int[mRozm];
    cout << " konstruktor: zrobilem stos"<< endl;
}
Stos::~Stos(){
    delete[] tabDanych;
    cout << "destruktor, zniszczylem stos ;c"<< endl;
}
void Stos::wypisz(){
    for ( int i=ileJest-1; i>= 0; i-- )
    {
        cout << tabDanych[i]<<" "<< endl;
    }
}

void Stos::wloz(int a){
    if(ileJest>=maxRozm)

        throw range_error("Stos pelny");
     else
    {
        tabDanych[ileJest]=a;
        ileJest++;
    }
}
int Stos::zdejmij()
{
    if( ileJest==0)
        throw runtime_error("stos pusty");
    ileJest--;
    return tabDanych[ileJest];
}
