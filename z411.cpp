#include <iostream>
using namespace std;

class Krug
{

private:
    double radijus; // radijus je privatna varijabla
                    // jer ne smije poprimiti negativnu vrijednost

public:
    Krug();
    Krug(double r)
    {
        if (r >= 0.0)
        {
            radijus = r;
        }
        else
        {
            cout << "Radius can't be negative!" << endl;
        }
    }
    bool SetRadijus(double r); // pristupnik za radijus

    double izracunajPovrsinu(); // funkcija za povr�inu
    double izracunajOpseg();    // funkcija za opseg
    /*
        ~Krug(){
        cout << "Odoh ja!" << endl;
    }
    */
};

Krug::Krug()
{
    radijus = 0.0;
}

// u pristupniku radijusa se vr�i kontrola
// vrijednosti na koju se radijus postavlja
bool Krug::SetRadijus(double r)
{
    if (r >= 0.0)
    {
        radijus = r;
        return true;
    }
    else
    {
        return false;
    }
}

double Krug::izracunajOpseg()
{
    return radijus * 6.28;
}

double Krug::izracunajPovrsinu()
{
    return radijus * radijus * 3.14;
}

int main()
{
    // Krug k; // deklaracija objekta

    // k.SetRadijus(-1.0); // postavljanje radijusa pomo�u pristupnika

    Krug k(1.0);
    cout << "Povrsina: " << k.izracunajPovrsinu() << endl;
    cout << "Opseg: " << k.izracunajOpseg() << endl;

    return 0;
}
