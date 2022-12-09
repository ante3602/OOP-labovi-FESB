#include <iostream>
#include "math.h"
using namespace std;

class kompleks
{
private:
    double real;
    double imag;

public:
    kompleks();
    kompleks(double r, double i);

    // deklaracija operatora kao prijateljskih funkcija
    friend bool operator<(const kompleks &c1, const kompleks &c2);
    friend istream &operator>>(istream &s, kompleks &c1);
    friend bool operator>(const kompleks &c1, const kompleks &c2);

    // deklaracija operatora kao �lanske funkcije
    kompleks &operator=(const kompleks &c);
    kompleks &operator+=(const kompleks &c);

    // pristupnici
    double getReal() { return real; };
    double getImag() { return imag; };

    void setReal(double r) { real = r; };
    void setImag(double i) { imag = i; };
};

kompleks::kompleks()
{
    real = 0.0;
    imag = 0.0;
}

kompleks::kompleks(double r, double i)
{
    real = r;
    imag = i;
}

// implementacija operatora < kao prijateljske funkcije
// primijetite da nema oznaku imenskog prostora kompleks::
bool operator<(const kompleks &c1, const kompleks &c2)
{
    // operator uspore�uje dva kompleksna broja primljene kao argumente c1 i c2
    // na na�in da usporedi njihove apsolutne vrijednosti
    if ((pow(c1.real, 2) + pow(c1.imag, 2)) < (pow(c2.real, 2) + pow(c2.imag, 2)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator>(const kompleks &c1, const kompleks &c2)
{
    // operator uspore�uje dva kompleksna broja primljene kao argumente c1 i c2
    // na na�in da usporedi njihove apsolutne vrijednosti
    if ((pow(c1.real, 2) + pow(c1.imag, 2)) > (pow(c2.real, 2) + pow(c2.imag, 2)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

// implementacija operatora >> kao prijateljske funkcije
// primijetite da nema oznaku imenskog prostora kompleks::
istream &operator>>(istream &s, kompleks &c1)
{
    // argument s je ulazni tok s kojeg funkcija �ita kompleksni broj
    // argument c1 je kompleksni broj u kojeg �e se upisati ono �to se pro�ita sa toka s

    double rtemp, itemp;

    if (s >> rtemp >> itemp) // �itam dva doublea sa toka s
    {
        c1.real = rtemp; // postavljam realni i imaginarni dio broja c1
        c1.imag = itemp;
    }
    return s;
}

// implementacija operatora = kao �lanske funkcije
// primjetite da ima oznaku imenskog prostora kompleks::
kompleks &kompleks::operator=(const kompleks &c)
{
    real = c.real;
    imag = c.imag;

    return *this;
}

kompleks &kompleks::operator+=(const kompleks &c)
{
    real = c.real + real;
    imag = c.imag + imag;

    return *this;
}

int main()
{
    // deklaracija dva objekta a i b klase kompleks
    kompleks a;
    kompleks b;

    cout << "Upisite dva kompleksna broja (dva para vrijednosti):" << endl;

    // za �itanje a i b koristimo operator zahva�anja u tok koji smo dodali klasi
    cin >> a;
    cin >> b;

    cout << "Upisali ste brojeve" << endl;
    cout << "  a = " << a.getReal() << " + i * " << a.getImag() << endl;
    cout << "  b = " << b.getReal() << " + i * " << b.getImag() << endl;

    // za usporedbu a i b koristimo operator usporedbe koji smo dodali klasi
    if (a > b)
        cout << "a je veci od b!" << endl;
    else
        cout << "a je manje ili jednako b!" << endl;

    kompleks c;

    // pridru�ivanje vrijednosti a kompleksnom broju c koristimo operator
    // pridjele vrijednosti koji smo dodali klasi
    c = a;

    cout << "  c = " << c.getReal() << " + i * " << c.getImag() << endl;

    c += a;

    cout << "  c = " << c.getReal() << " + i * " << c.getImag() << endl;

    return 0;
}
