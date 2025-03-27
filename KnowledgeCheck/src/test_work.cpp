#include "../lib/test_work.h"

float Quest_Num = 1;
float correct = 0;
float Wrong = 0;

std::string player_confirm;
std::string player_action;
int player_choice;

bool IsQuestionAsked[9] = { true, true, true, true, true, true , true, true, true };

void test()
{
	system("cls");
	std::cout << "Question Number: " << Quest_Num << "\t\tCorrect Answers: " << correct << "\t\tWrong Answers: " << Wrong << std::endl;
}

void rand_question()
{

	chooseTest();
	test();
	srand(time(0));
	bool QuestionReamin = false;
	for (int i = 0; i < 9; i++)
	{
		if (IsQuestionAsked[i])
		{
			QuestionReamin = true;
			break;
		}
	}
	while (QuestionReamin)
	{
		int num = rand() % 9;
		if (IsQuestionAsked[num])
		{
			IsQuestionAsked[num] = false;
			switch (player_choice)
			{
			case 1: bio_quest(num);
				break;
			case 2: chem_quest(num);
				break;
			case 3: physics_quest(num);
				break;
			case 4: js_html_quest(num);
				break;
			case 5: german_quest(num);
				break;
			case 6: lit_quest(num);
				break;
			case 7: psychology_quest(num);
				break;
			case 8: history_quest(num);
				break;
			case 9: geography_quest(num);
				break;
			case 10: english_quest(num);
				break;

			}
		}
	}
}

void mark()
{
	if (correct < 5)
	{
		std::cout << "You got a 2! You can do better!" << std::endl;
		std::cout << "Exit to main menu? " << "\t\t(Type: Yes) " << std::endl;
		std::cin >> player_choice;
	}
	else if (correct > 5 && correct <= 6)
	{
		std::cout << "You got a 3! You passed but I am sure you can do better" << "eibheribh";
		std::cout << "Exit to main menu? " << "\t\t(Type: Yes) " << std::endl;
		std::cin >> player_choice;
	}
	else if (correct > 6 && correct <= 7)
	{
		std::cout << "You got a 4! You did good!";
		std::cout << "Exit to main menu? " << "\t\t(Type: Yes) " << std::endl;
		std::cin >> player_choice;
	}
	else if (correct > 7 && correct < 9)
	{
		std::cout << "You got a 5! You did very good, push yourself a bit harder amd you will be perfect!";
		std::cout << "Exit to main menu? " << "\t\t(Type: Yes) " << std::endl;
		std::cin >> player_choice;
	}
	else
	{
		std::cout << "You got a 6! You are perfect!";
		std::cout << "Exit to main menu? " << "\t\t(Type: Yes) " << std::endl;
		std::cin >> player_choice;
	}

}

void question(std::string question, std::string a, std::string b, std::string c, std::string d, char correctAnswer)
{
	std::cout << question << std::endl;;
	std::cout << "a) " << a << std::endl;
	std::cout << "b) " << b << std::endl;
	std::cout << "c) " << c << std::endl;
	std::cout << "d) " << d << std::endl;
	char answer;
	std::cin >> answer;
	if (answer == correctAnswer)
	{
		correct++;
	}
	else
	{
		Wrong++;
	}
	Quest_Num++;
	test();
}

void chooseTest()
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
}