#include "mainMenu.h"

MainMenu::MainMenu()
{
	testsButtonRec.x = ;
	testsButtonRec.y = ;
	testsButtonRec.width = ;
	testsButtonRec.height = ;
}
void MainMenu::loadResources() {
	background = LoadTexture("././assets/MainMenu-Background.png");
	testsButton = LoadTexture("././assets/Tests_button.png")
	title = LoadTexture("././assets/title.png");
}