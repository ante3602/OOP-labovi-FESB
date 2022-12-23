// biblioteka za rad sa tokovima - otvoriti za detalje
#include <fstream>

using namespace std;

int main(void)
{
// deklaracija objekta out_files klase izlaznog toka
// uz istovremeno otvaranje datoteke "cities"
	ofstream out_file("cities");

// ispis u datoteku pomo�u operatora <<
	out_file << "Atlanta" << " " << "Baltimore";
	out_file << " " << "Cincinnati" << " " << "Dallas";
	out_file << " " << "zzz" << " " << "zzz";

// zatvaranje datoteke pomo�u �lanske funkcije objekta
	out_file.close();

	return 0;
}