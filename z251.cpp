#include <iostream>
using namespace std;

class razlomak
{
    int brojnik;
    int nazivnik;

public:
    razlomak()
    {
        brojnik = 0;
        nazivnik = 1;
    }

    void Set(int tempBr, int tempNz)
    {
        if (tempNz != 0)
        {
            brojnik = tempBr;
            nazivnik = tempNz;
        }
        else
            cout << "Greska! Nazivnik ne smije biti jednak nuli" << endl;
    }

    double GetDecimal()
    {
        return brojnik / double(nazivnik);
    }
};

int main()
{
    razlomak rez;
    int TempBrojnik;
    int TempNazivnik;
    cout << "Upisite vrijednost brojnika: " << endl;
    cin >> TempBrojnik;
    cout << "Upisite vrijednost nazivnika: " << endl;
    cin >> TempNazivnik;

    rez.Set(TempBrojnik, TempNazivnik);
    cout << rez.GetDecimal() << endl;

    return 0;
}