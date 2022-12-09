#include <iostream>
using namespace std;

class klNiz
{
private:
    int a[10];

public:
    klNiz()
    {
        for (int i = 0; i < 10; i++)
            a[i] = 2 * i;
    }

    int suma()
    {
        int s = 0;
        for (int i = 0; i < 10; i++)
            s = s + a[i];

        return s;
    }
};

int main()
{
    klNiz *ob;
    ob = new klNiz;

    // ispis sume niza
    cout << "Suma niza je:" << ob->suma() << endl;
    delete ob;

    return 0;
}
