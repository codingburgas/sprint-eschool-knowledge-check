#pragma once
#include "../lib/precompile.h"

class MainMenu {
public:
	MainMenu();
	Texture background;
	Texture testsButton;
	Texture learnButton;
	Texture title;
	Rectangle testsButtonRec;
	void loadResources();
};