#include <iostream>
using namespace std;

void perimeterCircle(double lr, double &lo)
{
    lo = lr * 2 * 3.14;
}
void perimeterTriangle(double la, double lb, double lc, double &lo)
{
    lo = la + lb + lc;
}
void perimeterSquare(double la, double &lo)
{
    lo = 4 * la;
}

int main()
{
    int shape;
    double r, a, b, c, o;

    cout << "please pick a shape to calculate its perimeter:\n1 - circle\n2 - triangle\n3 - square/rhombus" << endl;
    while (true)
    {
        cin >> shape;
        if (shape == 1)
        {
            cout << "Please enter the radius" << endl;
            cin >> r;
            perimeterCircle(r, o);
            cout << "Perimeter of cirle is: " << o << endl;
            break;
        }
        else if (shape == 2)
        {
            cout << "Please enter the dimensions for sides a, b and c of the triangle:" << endl;
            cin >> a >> b >> c;
            perimeterTriangle(a, b, c, o);
            cout << "Perimeter of triangle is: " << o << endl;
            break;
        }
        else if (shape == 3)
        {
            cout << "Please enter the dimension of side a:" << endl;
            cin >> a;
            perimeterSquare(a, o);
            cout << "Perimeter of the square is: " << o << endl;
            break;
        }
        else
        {
            cout << "None of the right shapes were selected, please select again!" << endl;
        }
    }

    return 0;
}