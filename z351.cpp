#include <iostream>
using namespace std;

class registracija
{

private:
    int reg1;
    int reg2;

public:
    registracija()
    {
        reg1 = 100;
        reg2 = 100;
    }
    void Set(int temp1, int temp2)
    {
        if (temp1 >= 99 && temp1 <= 1000 && temp2 >= 99 && temp2 <= 1000)
        {
            reg1 = temp1;
            reg2 = temp2;
        }
    }
    void Ispisi()
    {
        cout << "Registracija vozila je " << reg1 << "-" << reg2 << "!" << endl;
    }
};

int main()
{
    registracija r;
    r.Set(534, 234);
    r.Ispisi();
    return 0;
}
