#ifndef STOS_h
#define stos_h

struct Stos{
private:
    int maxRozm;
    int ileJest;
    int *tabDanych;
public:
    Stos(int mRozm=10);
    ~Stos();
    void wypisz();
    void wloz(int a);
    int zdejmij();



};
#endif // STOS_h
