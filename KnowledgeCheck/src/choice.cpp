#include "../lib/choice.h"

void choice()
{
	system("cls");
	std::cout << "Are you here to Learn or to Test yourself?" << "\t\t(Choose: Learn or Test)" << std::endl;
	std::cin >> player_action;
	if (player_action == "Test")
	{
		rand_question();
	}
	else if (player_action == "Learn")
	{
		learn_choice();
	}
	else
	{
		system("cls");
		std::cout << "Error! You have to chose between Learn or Test" << "\t\t(Type: ok)" << std::endl;
		std::cin >> player_confirm;
		choice();
	}
}



void learn_choice()
{
	system("cls");
	std::cout << "Choose where you want to test yourself" << std::endl;
	std::cout << "Type 1 for Biology" << std::endl;
	std::cout << "Type 2 for Chemistry" << std::endl;
	std::cout << "Type 3 for Physics" << std::endl;
	std::cout << "Type 4 for Information Technologies (IT)" << std::endl;
	std::cout << "Type 5 for German" << std::endl;
	std::cout << "Type 6 for Literature" << std::endl;
	std::cout << "Type 7 for Psychology" << std::endl;
	std::cout << "Type 8 for History" << std::endl;
	std::cout << "Type 9 for Geography" << std::endl;
	std::cout << "Type 10 for English" << std::endl;
	std::cin >> player_choice;
	learn();
}
