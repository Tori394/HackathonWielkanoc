#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

class Marsjanin
{
public:
	void display();
	bool dialog();

private:
	string marsjanin[30] = {"     *****               *** ",
"   *******             ******",
"                     ********",
"       **  **  **            ",
"       *************         ",
"   ***************           ",
"                             ",
"   *****              ****   ",
"  *******           *******  ",
"                *************",
"                             ",
"                             ",
"                             ",
"               __            ",
"            __|__|__         ",
"           { (@)(@)}         ",
"            (  _  )          ",
"           |{| ^^|}|         ",
"           | |   | |         ",
"           | |___| |         ",
"              0 0            ",
"              0 0            ",
"              0 0            ",
"              0 0	          ",
"             `V-V`           ",
"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~|",
"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~|",
"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~|",
"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~|",
"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"};
	string pytania[5] = {"Witaj, co niesiesz takiego kolorowego w tym koszyku?","A czym one sa?","Fajnie. Czy sa zwiazane z jakims ciekawym obrzedem na twojej planecie?","Hmm, a czy to swieto jest czesto obchodzone w roku?","A o jakiej porze sie najczesciej swietuje?"};
	string odpowiedzi[5] = {"(pisanki? chmury? dlugopisy?)","(przyborami? dekoracjami? slodyczami?)","(wielkanoca? bozym_narodzeniem? swietem_zmarlych?)","(trzy? cztery? raz?)","(rano? po_poludniu? wieczorem?)"};
	string poprawne[5] = { "pisanki","dekoracjami","wielkanoca","raz","rano"};
};