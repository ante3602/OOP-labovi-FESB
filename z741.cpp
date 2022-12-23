#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	// ovaj zadatak nije u potpunosti tocno rijesen jer ignorira space i novi red pri printanju i samo cijeli text pokazuje skupa
	fstream my_file;
	my_file.open("password.txt", ios::in);
	if (!my_file)
	{
		cout << "No such file";
	}
	else
	{
		char ch;

		while (1)
		{
			my_file >> ch;
			if (my_file.eof())
				break;

			cout << ch;
		}
	}
	my_file.close();
	return 0;
}