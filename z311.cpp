#include <iostream>
using namespace std;

// funkcija koja vra�a rezultat kao vlastitu vrijednost
double povrsinaVrijednost(double lr)
{
    return lr * lr * 3.14;
}

// funkcija koja vra�a rezultat putem pokaziva�a
void povrsinaPokazivac(double lr, double *pok)
{
    *pok = lr * lr * 3.14;
}
void povrsinaReferenca(double lr, double &ref){
    ref = lr * lr * 3.14;
}

void povrsinaOpseg(double lr, double *pok, double &ref){
    *pok = lr * lr * 3.14;
    ref = 2 * lr * 3.14;
}



int main()
{
    double r; // deklaracija varijable r
    double p; // deklaracija varijable p
    double z;
    double pov, op;

    cout << "Upisite radijus kruga:"; // ispis
    cin >> r;                         // u�itavanje sa tastature

    // poziv funkcija i ujedno ispis na ekran
    cout << "Povrsina kruga =" << povrsinaVrijednost(r) << " m2" << endl;

    // poziv funkcije
    povrsinaPokazivac(r, &p);
    // ispis na ekran
    cout << "Povrsina kruga =" << p << " m2" << endl;

    povrsinaReferenca(r, z);
    cout << "Povrsina kruga =" << z << " m2" << endl;

    povrsinaOpseg(r, &pov, op);
    cout << "povrsina kruga je " << pov << ", a opseg kruga je " << op << endl;

    return 0;
}
