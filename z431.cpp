#include <iostream>
#include <cmath>
using namespace std;

class tocka
{
private:
    double x;
    double y;

public:
    tocka()
    {
        x = 0, y = 0;
    }
    tocka(double a, double b)
    {
        x = a, y = b;
    }
    // zad 4.4 je zakomentiran //
    // friend double udaljenost(tocka, tocka);

    double udaljenost(tocka t)
    {
        return sqrt((x - t.x) * (x - t.x) + (y - t.y) * (y - t.y));
    }
};

/*
double udaljenost(tocka t1, tocka t2)
{
    return sqrt((t1.x - t2.x) * (t1.x - t2.x) + (t1.y - t2.y) * (t1.y - t2.y));
}
*/

int main()
{
    tocka t1(1.3, 4.3);
    tocka t2(5.7, -3.8);
    // cout << udaljenost(t1, t2) << endl;
    cout << t1.udaljenost(t2) << endl;
    return 0;
}