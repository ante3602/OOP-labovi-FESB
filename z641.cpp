#include <iostream>
using namespace std;

int calculatePower(int base, int powerRaised)
{
    if (powerRaised != 0)
        return (base * calculatePower(base, powerRaised - 1));
    else
        return 1;
}

int main()
{
    int i = 0; // deklaracija broja�a i
    int p;     // deklaracija potencije
    int b, r;  // deklaracija baze i rezultata
    int rez;

    cout << "Upisite bazu:";      // ispis na ekran
    cin >> b;                     // u�itavanje sa tastature
    cout << "Upisite potenciju:"; // ispis na ekran
    cin >> p;                     // u�itavanje sa tastature

    r = 1; // inicijaliziram vrijednost rezultata na 1
    // for( i = 0 ; i < p ; i++ ) { // p puta potenciram bazu
    //	r = r * b;
    // }

    // while(i < p){
    //     r = r * b;
    //     i++;
    // }

    rez = calculatePower(b, p);
    // ispis rezultata
    cout << b << " na " << p << " je: " << rez << endl;

    return 0;
}