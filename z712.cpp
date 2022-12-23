#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void main(void)
{
    // deklaracija objekta in_files klase ulaznog toka
    // uz otvaranje datoteke cities
    ifstream inFile("cities");
    ofstream outFile("filter");

    // provjera uspje�nosti otvaranja datoteke
    if (!inFile)
        return;

    string string_A;

    // petlja za �itanje se prekida kod nailaska na kraj datoteke
    while (!inFile.eof())
    {
        // �itanje jednog stringa iz datoteke
        inFile >> string_A;

        // ispisivanje stringa na ekran
        cout << string_A << " ";

        if (string_A != "zzz")
        {
            outFile << string_A << " ";
        }
    }

    // zatvaranje datoteke
    inFile.close();
    outFile.close();
}