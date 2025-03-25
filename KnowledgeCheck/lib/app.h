#pragma once
#include "../lib/mainMenu.h"
#include "../lib/tests.h"

struct Pages {
	bool mainMenu = 1;
	bool tests = 0;

};

class App
{
public:
	App();
	void update();
	void appLogic();
	void display();
	void drawMainMenu();
	/*void drawTests();*/
	MainMenu mainMenu;
	//TestsMenu testsMenu;
	Pages pages;
};