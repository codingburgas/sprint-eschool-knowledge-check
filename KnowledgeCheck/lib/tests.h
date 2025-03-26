#pragma once
#include "precompile.h"

float Quest_Num = 1;
float correct = 0;
float Wrong = 0;

int player_choice;

bool IsQuestionAsked[9] = { true, true, true, true, true, true , true, true, true };

void bio_quest(int num);
void chem_quest(int num);
void rand_question();
void test();
void question(string question, string a, string b, string c, string d, char correctAnswer);
void mark();



void test()
{
	system("cls");
	cout << "Question Number: " << Quest_Num << "\t\tCorrect Answers: " << correct << "\t\tWrong Answers: " << Wrong << endl;
	rand_question();
}


void rand_question()
{
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
		cin >> player_choice;
		if (IsQuestionAsked[num])
		{
			IsQuestionAsked[num] = false;
			switch (player_choice)
			{
			case 1: bio_quest(num);
				break;
			case 2: chem_quest(num);
				break;

			}
		}
	}
	mark();
}

void mark()
{
	if (correct < 5)
	{
		cout << "You got a 2! You can do better!";
	}
	else if (correct > 5 && correct <= 6)
	{
		cout << "You got a 3! You passed but I am sure you can do better";
	}
	else if (correct > 6 && correct <= 7)
	{
		cout << "You got a 4! You did good!";
	}
	else if (correct > 7 && correct < 9)
	{
		cout << "You got a 5! You did very good, push yourself a bit harder amd you will be perfect!";
	}
	else
	{
		cout << "You got a 6! You are perfect!";
	}

}

void question(string question, string a, string b, string c, string d, char correctAnswer)
{
	cout << question << endl;;
	cout << "a) " << a << endl;
	cout << "b) " << b << endl;
	cout << "c) " << c << endl;
	cout << "d) " << d << endl;
	char answer;
	cin >> answer;
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

void bio_quest(int num)
{
	switch (num)
	{
	case 0: question("Which gland controls the activity of other endocrine glands is connected to the nervous system?",
		"thyroid gland", "pancreas", "adrenal glands", "pituitary gland", 'd');
		break;
	case 1: question("Which disease is caused by hypofunction of the pancreas?",
		"gigantism", "Graves' disease", "diabetes mellitus", "cretinism", 'c');
		break;
	case 2: question("Which hormone increases blood pressure and accelerates blood pressure activity ? ",
		"insulin", "testosterone", "adrenaline", "growth hormone", 'c');
		break;
	case 3: question("The hormonal regulation of processes in the human body",
		"is carried out by the endocrine glands", "is faster than neural regulation", "diabetes mellitusis shorter-lived than neural regulation",
		"cretinism", 'c');
		break;
	case 4: question("Which sequence of parts of the sensory systems directly defines the function of each department?",
		"1. conductive part; 2. an analysing part; 3. perceptual",
		"1. perceiving part; 2. conductive part; 3. Analytic",
		"1. perceiving part; 2. an analysing part; 3. Wired",
		"1. analysing part; 2. conductive part; 3. perceptual",
		'b');
		break;
	case 5: question("Where the location of the receptor is correctly indicated",
		"cones and rods - inner ear", "pain receptors - skin and internal organs",
		"organ of Corti - joints and muscles", "vestibular apparatus - middle ear", 'b');
		break;
	case 6: question("Which of the structures is NOT part of the auditory analyzer?",
		"ear canal", "auditory receptors", "auditory nerve", "auditory area in the cerebral cortex", 'a');
		break;
	case 7: question("Chemoreceptors are:",
		"receptors in muscles and joints", "taste receptors", "the receptors for touch", "visual receptors", 'b');
		break;
	case 8: question("Conditioned reflexes are: 1)Permanent 2)Temporary 3)Individual 4)Species - specific 5)Acquired 6)Congenital",
		"1 and 3;", "2, 4 and 5;", "2, 3 and 5;", "2, 3 and 6", 'c');
		break;

	}
}

inline void chem_quest(int num)
{
	switch (num)
	{
	case 0: question("What is the chemical symbol for Iron?",
		"Ir", "Fe", "In", "Fi", 'b');
		break;
	case 1: question("Which equation represents photosynthesis?",
		"H?O + CO? ? C?H??O? + O?", "C?H??O? + O? ? CO? + H?O",
		"2H? + O? ? 2H?O", "Na + Cl ? NaCl", 'a');
		break;
	case 2: question("What is the formula for table salt?",
		"NaCl", "Na?Cl", "NaCl?", "Na?Cl?", 'a');
		break;
	case 3: question("Which element has the atomic number 1?",
		"Helium", "Oxygen", "Hydrogen", "Carbon", 'c');
		break;
	case 4: question("What is the correct formula for water?",
		"HO", "H?O", "H?O?", "HO?", 'b');
		break;
	case 5: question("Which of these is the symbol for Potassium?",
		"Pt", "P", "Po", "K", 'd');
		break;
	case 6: question("What does 'O' stand for in the periodic table?",
		"Gold", "Osmium", "Oxygen", "Oganesson", 'c');
		break;
	case 7: question("Which equation represents neutralization?",
		"NaOH + HCl ? NaCl + H?O", "2H? + O? ? 2H?O",
		"CaCO? ? CaO + CO?", "Fe + S ? FeS", 'a');
		break;
	case 8: question("What is the chemical formula for methane?",
		"CH?", "C?H?", "CO?", "C?H??O?", 'a');
		break;
	case 9: question("Which element has the symbol 'Ag'?",
		"Gold", "Silver", "Argon", "Aluminum", 'b');
		break;
	}
}
