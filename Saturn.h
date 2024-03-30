#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

class Saturn
{
public:
	void display();
	bool dialog();

private:
	string saturianin[30] = {
"   ~*~       ~*~~~    ~~~*~  ",          
"   ~~*~*    ~~*~~    ~**~~** ",       
"                             ",
"   ~*~~~~**      *~~~~*      ",          
"    ~~*~~~*~~    ~~*~~*~     ",
"                             ",
" ~~~~*~~         ~~*~~~~*~~  ",
"  ~*~*~~*~      ~~**~~~*     ",  
"                             ",
"                             ",
"                             ",
"             _____           ",
"          __|_____|__        ",
"           { ^   ^ }         ",
"           (  ~~~  )         ",
"            |     |          ",
"      - -00|- - - -|00- -    ",
"    -    00|       |00    -  ",
"      - -00|- - - -|00- -    ",
"         00 |s| |s| 00       ",
"         00 |s| |s| 00       ",
"         v  |s| |s|  v       ",
"            |s| |s|          ",	
"            `w  w`           ",
"|~~~~~~0~~~~~~~~~~~~~~0~~~~~~|",
"|~~~~~~~~~~~~~0~~~~~0~~~~~~~~|",
"|~~~~~~0~~~~~~~~~o~~~~~~~0~~~|",
"|~~~~~~~~~~~~o~~~~~~~~~~~~~~~|",
"|~~~0~~~~~~~~~~~~~~~~~~0~~~~~|"};
	string pytania[5] = {"Witaj na Saturnie przybyszu, widze ze przynosisz ze soba wiele dziwnych slodyczy.\nCo to za ciasto w bakaliowe wzorki?","A jak nazywa siê to okragle ciato w lukrze?","A skad na tych wypiekach krople wody ? ","A z jakiej okazji przygotowuje sie na Ziemi takie ciasta?","A jak dlugo wyczekiwane jest to swieto? Ile dni?" };
	string odpowiedzi[5] = { "(mazurek? szarlotka? kopiec_kreta? )","(napoleonka? babka? kremowka?)","(sa_poswiecone? padal_deszcz? przeszlo_tsunami?)","(imienin? wielkanocy? dnia_kobiet?)","(40? 400? 50?)" };
	string poprawne[5] = { "mazurek","babka","sa_poswiecone","wielkanocy","40" };
};