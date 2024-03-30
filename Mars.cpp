#include "Mars.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

void Marsjanin::display()
{
	for (int i = 0; i < 30; i++)
	{
		cout << marsjanin[i];
		cout << "\n";
	}
}

bool Marsjanin::dialog()
{
	cout << "(Po kazdym pytaniu przepisz poprawna odpowiedz,\nmusisz odpowiedziec poprawnie na minimum 3 pytania)\n\n";
	string odp;
	int wynik = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << "Marsjanin: " << pytania[i] << endl << odpowiedzi[i] << endl << "Krolik: ";
		cin >> odp;
		if (odp == poprawne[i]) wynik++;
		cout << endl;
	}
	if (wynik >= 3)
	{
		cout << "Marsjanin: Hmm brzmi jak dobra zabawa, rozpowiem innym, moze\ntez zaczniemy to celebrowac";
		cin.get();
		return 1;
	}
	else
	{
		cout << "Marsjanin: Jakas sterta glupot, odejdz z naszej planety\n";
		cin.get();
		return 0;
	}
}
