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
        x = 0;
        y = 0;
    }
    tocka(double a, double b)
    {
        x = a;
        y = b;
    }
    double udaljenost(tocka t)
    {
        return sqrt((x - t.x) * (x - t.x) + (y - t.y) * (y - t.y));
    }
};

int main()
{

    tocka t1(1.3, 4.3);
    tocka t2(5.7, -3.8);
    cout << t1.udaljenost(t2) << endl;
    return 0;
}