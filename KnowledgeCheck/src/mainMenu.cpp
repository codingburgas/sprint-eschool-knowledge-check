#include "../lib/mainMenu.h"

MainMenu::MainMenu() {
	testsButtonRec.x = 660;
	testsButtonRec.y = 600;
	testsButtonRec.width = 600;
	testsButtonRec.height = 300;
}
void MainMenu::loadResources() {
	background = LoadTexture("./assets/MainMenu-Background.png");
	testsButton = LoadTexture("././assets/Start_button.png");
	title = LoadTexture("././assets/title.png");
}