#include <iostream>
#include <string>

using namespace std;

int main(void) {
// deklaracija objekata klase string
	string naziv = "Objektno orijentirano programiranje";
    string proba;

    cout << "Upisite neki string: " << endl;
    getline(cin,proba);

// ispis stringa na ekran
	cout << naziv << endl;
    cout << proba << endl;

// duljina stringa
	cout << "Duljina stringa je: " << naziv.length() << endl;
    cout << "Duljina stringa proba je: " << proba.length() << endl;

	return 0;
}
