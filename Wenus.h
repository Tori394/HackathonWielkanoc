#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

class Wenus
{
public:
	void display();
	bool dialog();

private:
	string wenusjanka[30] = {
"   ~*~         ~~*~~**~~** ",
"~~*~*        **~~*~~~**~~**",      
"                           ",
"      ~~*~~**~~**          ",
"           **~~*~~~**~~**  ",
"                           ",
"   ~~*~*~              ~*~~",
"  ~*~*~~*~           ~~*~*~",
"                           ",
"                           ",
"                           ",
"                           ",
"                           ",
"            ooooooo        ",
"        _  o| u  u|o  _    ",
"         \\ o\\ _w_ /o /    ",
"          \\oo_| |_oo/      ",
"           oo(   )ooo      ",
"          oooo| |ooooo     ",
"             // \\\\        ",
"            ////\\\\\\\\       ",
"              | |          ",
"              | |          ",
"              | |          ",
"             `V-V`         ",
"|~~~~~~0~~~~~~~~~~~~~~0~~~~~~|",
"|~~~~~~~~~~~~~0~~~~~0~~~~~~~~|",
"|~~~~~~0~~~~~~~~~o~~~~~~~0~~~|",
"|~~~~~~~~~~~~o~~~~~~~~~~~~~~~|",
"|~~~0~~~~~~~~~~~~~~~~~~0~~~~~|"};
	string pytania[5] = { "Witaj kroliku, w co przystroiles swoj piekny koszyk?","A jakie to kwiaty?","A z jakiej okazji je zebrales?","O jakiej porze roku obchodzi sie to swieto na Ziemi?","A z kim sie spedza to swieto?" };
	string odpowiedzi[5] = { "(paski? kropki? kwiaty?)","(zonkile? swierki? wrzosy?)","(urodzin? wielkanocy? swieta_niepodleglosci?)","( w_lato? we_wiosne? w_zimie?)","(samemu? z_rodzina? z_kosmicznymi_mieszkancami?)" };
	string poprawne[5] = { "kwiaty","zonkile","wielkanocy","we_wiosne","z_rodzina" };
};