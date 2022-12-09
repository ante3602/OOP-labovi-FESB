#include <iostream>
using namespace std;

// deklaracija klase za kompleksni broj
class kompleks
{
private:
    double real;
    double imag;

public:
    // deklaracija podrazumijevanog konstruktora
    kompleks();
    // deklaracija konstruktora sa argumentima
    kompleks(double r, double i);

    // deklaracija operatora zbrajanja dva kompleksna broja
    kompleks operator+(const kompleks &d);

    kompleks operator-(const kompleks &d)
    {
        kompleks razlika(real - d.real, imag - d.imag);
        return razlika;
    }

    double getReal() { return real; };
    double getImag() { return imag; };
};

// implementacija podrazumijevanog konstruktora
kompleks::kompleks()
{
    real = 0.0;
    imag = 0.0;
}

// implementacija konstruktora sa argumentima
kompleks::kompleks(double r, double i)
{
    real = r;
    imag = i;
}

// implementacija operatora zbrajanja dva kompleksna broja
kompleks kompleks::operator+(const kompleks &d)
{
    kompleks zbroj(real + d.real, imag + d.imag);
    return zbroj;
}

int main()
{
    // deklaracija objekta uz poziv konstruktora s argumentima
    kompleks a(6.6, 4.7);
    kompleks b(2.6, 3.4);
    // deklaracija objekta uz poziv podrazumijevanog konstruktora
    kompleks c;
    kompleks d;

    // ispis dvaju kompleksnih brojeva
    cout << "a = " << a.getReal() << " + i * " << a.getImag() << endl;
    cout << "b = " << b.getReal() << " + i * " << b.getImag() << endl;

    // zbrajanje dva kompleksna broja - poziva operator klase kompleks
    c = a + b;

    // oduzimanje dva kompleksna broja - poziva operator klase kompleks
    d = a - b;

    // ispis zbroja
    cout << "c = a + b" << endl;
    cout << "c = " << c.getReal() << " + i * " << c.getImag() << endl;

    // ispis razlike
    cout << "d = a - b" << endl;
    cout << "d = " << d.getReal() << " + i * " << d.getImag() << endl;

    return 0;
}
