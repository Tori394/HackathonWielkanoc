#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include "Mars.h"
#include "Wenus.h"
#include "Saturn.h"
using namespace std;
string menu[3] = { "Mars","Wenus","Saturn" };
bool planets[3];
int odwiedzone;

string tab[30] = {"*        *               *     *",
"                              ",
"    *           *    *    *   ",
" *      *                     ",
"                              ",
"     *              *        *",
"               *       *      ",
"*      *    *     *           ",
"             *          *    *",
"*   *     *        *          ",
"                              ",
"*       *         *           ",
"              *               ",
"                              ",
"                              ",
"                              ",
"            //   //           ",
"           //   //            ",
"           )--- /(            ",
"           /     |            ",
"           (      )           ", 
"           /`-!-'|            ", 
"          / /___| |           ",
"           |     |            ",   
"          (       )           ",
"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~|",
"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~|",
"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~|",
"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~|",
"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"};
string tab2[15] = {
"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|",
"             _____                                                           ",
"          __|_____|__                                          __            ",
"           { ^   ^ }                 ooooooo                __|__|__         ",
"           (  ~~~  )             _  o| u  u|o  _           { (@)(@)}         ",
"            |     |               \\ o\\ _w_ /o /             (  _  )          ",
"      - -00|- - - -|00- -          \\oo_| |_oo/             |{| ^^|}|         ",
"    -    00|       |00    -         oo(   )ooo             | |   | |         ",
"      - -00|- - - -|00- -          oooo| |ooooo            | |___| |         ",
"         00 |s| |s| 00                // \\\\                   0 0            ",
"         00 |s| |s| 00               ////\\\\\\\\                 0 0            ",
"         v  |s| |s| v                  | |                    0 0            ",
"            |s| |s|                    | |                    0 0            ",
"            `w  w`                    `V-V`                  `V-V`           ",
"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" };
string tab3[15] = {
"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|",
"          __|_____|__                                          __            ",
"           { ^   ^ }                 ooooooo                __|__|__         ",
"           (  ~~~  )             _  o| u  u|o  _           { (@)(@)}         ",
"            |     |               \\ o\\ _w_ /o /             (  _  )          ",
"      - -00|- - - -|00- -          \\oo_| |_oo/             |{| ^^|}|         ",
"    -    00|       |00    -         oo(   )ooo             | |   | |         ",
"      - -00|- - - -|00- -          oooo| |ooooo            | |___| |         ",
"         00 |s| |s| 00                // \\\\                   0 0            ",
"         00 |s| |s| 00               ////\\\\\\\\                 0 0            ",
"         v  |s| |s| v                  | |                    0 0            ",
"            |s| |s|                    | |                    0 0            ",
"            |s| |s|                    | |                    0 0            ",
"            `w  w`                    `V-V`                  `V-V`           ",
"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" };

enum planety
{
	MARS,
	WENUS,
	SATURN
};

void sll(double sec)
{
	clock_t end_time = clock() + sec * CLOCKS_PER_SEC;
	while(clock()<end_time){}
}
void display_menu();
void display_Intro();
void display_Outro();
bool Marsjanie();
bool Wenusjanie();
bool Saturianie();

int main()
{
	system("CLS");
    display_Intro();
	int wybor = 5;
	cin.get();
	system("CLS");
	while (odwiedzone < 3) 
	{
		cout << "Gdzie chcesz leciec?\n";
		display_menu();
		cin >> wybor;
		while (planets[wybor] == 1)
		{
			cout << "Juz przekonales mieszkancow tej planety!\n";
			cin >> wybor;
		}
		system("CLS");
		switch (wybor)
		{
		case MARS:
			planets[wybor] = Marsjanie();
			break;
		case WENUS:
			planets[wybor] = Wenusjanie();
			break;
		case SATURN:
			planets[wybor] = Saturianie();
			break;
		}
	}
	display_Outro();
	cout << "Dziekujemy za zagranie!\n";
	return 0;
}



bool Marsjanie()
{
	Marsjanin m;
	m.display();
	bool a = m.dialog();
	cin.get();
	system("CLS");
	if (a == 1)
	{
		cout << "\033[1;32mUDALO CI SIE PRZEKONAC MARSJAN\033[0m";
		menu[0] = "\033[1;32mMars\033[0m";
		odwiedzone++;
		cin.get();
		system("CLS");
		return 1;
	}
	else
	{
		system("color 04");
		cout << "\033[1;31mNIE UDALO CI SIE PRZEKONAC MARSJAN\033[0m";
		cin.get();
		system("CLS");
		return 0;
	}
}
bool Wenusjanie()
{
	Wenus m;
	m.display();
	bool a = m.dialog();
	cin.get();
	system("CLS");
	if (a == 1)
	{
		cout << "\033[1;32mUDALO CI SIE PRZEKONAC WENUSJANKI\033[0m";
		menu[1] = "\033[1;32mWenus\033[0m";
		odwiedzone++;
		cin.get();
		system("CLS");
		return 1;
	}
	else
	{
		system("color 04");
		cout << "\033[1;31mNIE UDALO CI SIE PRZEKONAC WENUSJANEK\033[0m";
		cin.get();
		system("CLS");
		return 0;
	}
}
bool Saturianie()
{
		Saturn m;
		m.display();
		bool a = m.dialog();
		cin.get();
		system("CLS");
		if (a == 1)
		{
			cout << "\033[1;32mUDALO CI SIE PRZEKONAC SATURIAN\033[0m";
			menu[2] = "\033[1;32mSaturn\033[0m";
			odwiedzone++;
			cin.get();
			system("CLS");
			return 1;
		}
		else
		{
			system("color 04");
			cout << "\033[1;31mNIE UDALO CI SIE PRZEKONAC SATURIAN\033[0m";
			cin.get();
			system("CLS");
			return 0;
		}
}
void display_menu()
{
	for (int i = 0; i < 3; i++)
	{
		cout<<i<<" - " << menu[i] << endl;
	}
}
void display_Intro()
{
	for (int i = 0; i < 30; i++)
	{
		cout << tab[i];
		cout << endl;
	}
	cout << "Pewnej Wielkanocy Kroliczek patrzyl w bezkres\ngwiezdzistego nieba...\n";
	cin.get();
	system("CLS");
	for (int i = 0; i < 30; i++)
	{
		cout << tab[i];
		cout << endl;
	}
	cout << "Nagle zrozumial, ze nie jest sam\nA w kosmosie istnieja inne\ncywilizacje ktore nie znaja radosci\njaka plynie z Wielkanocy";
	cin.get();
	system("CLS");
	for (int i = 0; i < 30; i++)
	{
		cout << tab[i];
		cout << endl;
	}
	cout << "I wtedy postanowil wyruszyc w kosmos\nby niesc ze soba magie Swiat Wielkanocy";
	cin.get();
	system("CLS");
	cout << "Czas by Krolik rozpoczal swoja przygode...";
	cin.get();
	system("CLS");
	cout << "JAK GRAC: Podczas rozmow z kosmitami zostana \nwyswietlone 3 odpowiedzi, przepisz poprawna\n";
}
void display_Outro()
{
	system("CLS");
	int i = 0;
	while (i < 7)
	{
		for (int i = 0; i < 15; i++)
		{
			cout << tab2[i];
			cout << endl;
		}
		cout << "\033[1;35m                  GRATULACJE! UDALO CI SIE PRZEKONAC 3 PLANETY\033[0m\nKrolik musi wracac na Ziemie, ale kto wie, moze za rok znowu wyruszy w kosmos..." << endl;
		sll(0.5);
		system("CLS");
		for (int i = 0; i < 15; i++)
		{
			cout << tab3[i];
			cout << endl;
		}
		cout << "\033[1;35m                  GRATULACJE! UDALO CI SIE PRZEKONAC 3 PLANETY\033[0m\nKrolik musi wracac na Ziemie, ale kto wie, moze za rok znowu wyruszy w kosmos..." << endl;
		sll(0.5);
		system("CLS");
		i++;
	}
}