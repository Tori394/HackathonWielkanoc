#include "Saturn.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

void Saturn::display()
{
	for (int i = 0; i < 30; i++)
	{
		cout << saturianin[i];
		cout << "\n";
	}
}

bool Saturn::dialog()
{
	cout << "\n\n";
	string odp;
	int wynik = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << "Saturianin: " << pytania[i] << endl << odpowiedzi[i] << endl << "Krolik: ";
		cin >> odp;
		if (odp == poprawne[i]) wynik++;
		cout << endl;
	}
	if (wynik >= 3)
	{
		cout << "Saturianin: Hmm brzmi jak dobra zabawa, rozpowiem innym, moze\ntez zaczniemy to celebrowac";
		cin.get();
		return 1;
	}
	else
	{
		cout << "Saturianin: Jakas sterta glupot, odejdz z naszej planety\n";
		cin.get();
		return 0;
	}
}
