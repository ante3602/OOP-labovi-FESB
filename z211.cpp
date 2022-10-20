#include <iostream>
using namespace std;

// funkcija za ispis ulaznog argumenta
void ispisi(int lr) {
    cout << lr << endl;
}

void ispisi(double lrDouble){
    cout << lrDouble << endl;
}

int main()
{
    int r;								// deklaracija varijable r
    double rDouble;
    
    
    r = 2;	                            // postavljanje vrijednosti r
    rDouble = 2.7;	

    ispisi(r);							// poziv funkcije
    ispisi(rDouble);

	return 0;
}