#pragma once
#include "precompile.h"
#include "test.h"

float Quest_Num;
float correct;
float Wrong;
std::string player_confirm;
std::string player_action;
int player_choice;
bool IsQuestionAsked[9];



void question(std::string question, std::string a, std::string b, std::string c, std::string d, char correctAnswer);
void mark();
void rand_question();
void test();
void chooseTest();
