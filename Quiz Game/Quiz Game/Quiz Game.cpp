// Quiz Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

/////Header/////
void ShowQuestionQ1(int Choice, string possibleAnswers[]);
/////Header/////

// Questions

string question1[4]{ "What is the name of the mysterious and enigmatic entity that guides and communicates with the Tenno in Warframe?", 
					 "Warframes: Which Warframe is known for its ability to manipulate time and features abilities like Temporal Shift and Stasis?", 
					 "Factions: What is the name of the militaristic faction that seeks to dominate the Origin System and uses advanced robotics and technology?", 
					 "Weapons: Which primary weapon in Warframe is known for its high critical chance and punch-through capability, making it effective against both armor and shields?"
					};
//Answers

string answerToQ1[4]{ "1. The Lotus", "2. Limbo", "3. Red Veil", "4. Cade"};
string answerToQ2[4]{ "1. Nidus", "2. Limbo", "3. Red Veil", "4. Damian" };
string answerToQ3[4]{ "1. Narmer", "2. Infested", "3. The Grineer", "4. Corpus" };
string answerToQ4[4]{ "1. Boltor Incaron", "2. Gram Prime", "3. Sporelacer", "4. Soma Prime" };


//Variable to track correctly answered questions
int QAnswered = 0;


int main()
{
	//char array with #@
	char letters[] = "#@";
	//This variable that hold the value that the user puts in. This variable is the back bone of the this game
    int choice = 0;
	//
	
	
	
	
	cout << "*********************** Quiz World ***********************" << endl;
	cout << "1. Question 1" << endl;
	
	cout << "5. Exit" << endl;
	
    do {
		cin >> choice;
		switch (choice)
		{
		case 1:
			ShowQuestionQ1(choice, answerToQ1);
			break;
		case 2: 
			ShowQuestionQ1(choice, answerToQ2);
			break;
		case 3: 
			ShowQuestionQ1(choice, answerToQ3);
			break;
		case 4:
			ShowQuestionQ1(choice, answerToQ4);
			break;
		case 5:
			cout << "Thank for playing!!!" << "\n";
		}
		
		if (QAnswered > 3){			
			for (int i = 0; i < 20; i++) {
				for (int i = 59; i >= 0; i--) {
					cout << letters[rand() % 2];
				}
			}			
		}
	}while (choice != 5);

	return 0;
}

void ShowQuestionQ1(int Choice, string possibleAnswers[]){
	
	
	int Answer1 = 0;
	int Answer2 = 0;
	int Answer3 = 0;
	int Answer4 = 0;
	//Question logic
	switch (Choice)
	{
	case 1:
		cout << question1[0] << endl;
		for (int i = 0; i < 4; i++)
		{
			cout << possibleAnswers[i] << "\n";
		}
		cin >> Answer1;
		//question answer logic
		switch (Answer1)
		{
		case 1:
			QAnswered++;
			system("CLS");
			cout << "************************ complete " << QAnswered << " / 4 **********************" << endl;
			cout << "************************ Correct **********************" << endl;
			cout << "*********************** Quiz World ***********************" << endl;
			cout << "2. Question 2" << endl;
			
			cout << "5. Exit" << endl;
			break;
		case 2:
			system("CLS");
			cout << "************************ Incorrect **********************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************** Quiz World **********************" << endl;

			cout << "1. Question 1" << endl;
			
			cout << "5. Exit" << endl;

			break;
		case 3:
			system("CLS");
			cout << "************************ Incorrect **********************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************** Quiz World **********************" << endl;

			cout << "1. Question 1" << endl;
			
			cout << "5. Exit" << endl;

			break;
		case 4:
			system("CLS");
			cout << "************************ Incorrect **********************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************** Quiz World **********************" << endl;

			cout << "1. Question 1" << endl;
			
			cout << "5. Exit" << endl;
		}
		break;
		
	case 2:

		cout << question1[1] << endl;
		for (int i = 0; i < 4; i++)
		{
			cout << possibleAnswers[i] << "\n";
		}
		cin >> Answer2;
		//question answer logic
		switch (Answer2)
		{
		case 1:
			system("CLS");
			cout << "************************ Incorrect **********************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************** Quiz World **********************" << endl;

			cout << "3. Question 2" << endl;
			
			cout << "5. Exit" << endl;
			break;
		case 2:
			
			QAnswered++;
			system("CLS");
			cout << "************************ complete " << QAnswered << " / 4 **********************" << endl;
			cout << "************************ Correct **********************" << endl;
			cout << "*********************** Quiz World ***********************" << endl;
			cout << "3. Question 3" << endl;
			cout << "5. Exit" << endl;

			break;
		case 3:
			system("CLS");
			cout << "************************ Incorrect **********************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************** Quiz World **********************" << endl;

			
			cout << "2. Question 2" << endl;
			
			cout << "5. Exit" << endl;

			break;
		case 4:
			system("CLS");
			cout << "************************ Incorrect **********************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************** Quiz World **********************" << endl;

			
			cout << "2. Question 2" << endl;
			
			cout << "5. Exit" << endl;
		}
		break;
	case 3:
		cout << question1[2] << endl;
		for (int i = 0; i < 4; i++)
		{
			cout << possibleAnswers[i] << "\n";
		}
		cin >> Answer3;
		//question answer logic
		switch (Answer3)
		{
		case 1:
			system("CLS");
			cout << "************************ Incorrect **********************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************** Quiz World **********************" << endl;

			cout << "3. Question 3" << endl;

			cout << "5. Exit" << endl;
			break;
		case 2:
			system("CLS");
			cout << "************************ Incorrect **********************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************** Quiz World **********************" << endl;


			cout << "2. Question 3" << endl;

			cout << "5. Exit" << endl;
			

			break;
		case 3:
			
			QAnswered++;
			system("CLS");
			cout << "************************ complete " << QAnswered << " / 4 **********************" << endl;
			cout << "************************ Correct **********************" << endl;
			cout << "*********************** Quiz World ***********************" << endl;
			cout << "3. Question 4" << endl;
			cout << "5. Exit" << endl;

			break;
		case 4:
			system("CLS");
			cout << "************************ Incorrect **********************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************** Quiz World **********************" << endl;


			cout << "2. Question 3" << endl;

			cout << "5. Exit" << endl;
		}
		break;
	case 4:
		cout << question1[3] << endl;
		for (int i = 0; i < 4; i++)
		{
			cout << possibleAnswers[i] << "\n";
		}
		cin >> Answer4;
		//question answer logic
		switch (Answer4)
		{
		case 1:
			system("CLS");
			cout << "************************ Incorrect **********************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************** Quiz World **********************" << endl;

			cout << "3. Question 4" << endl;

			cout << "5. Exit" << endl;
			break;
		case 2:
			system("CLS");
			cout << "************************ Incorrect **********************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************** Quiz World **********************" << endl;


			cout << "2. Question 4" << endl;

			cout << "5. Exit" << endl;
			break;
		case 3:
			system("CLS");
			cout << "************************ Incorrect **********************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************************************************" << endl;
			cout << "*********************** Quiz World **********************" << endl;


			cout << "2. Question 4" << endl;

			cout << "5. Exit" << endl;
			break;
		case 4:
			
			QAnswered++;
			system("CLS");
			cout << "************************ complete " << QAnswered << " / 4 **********************" << endl;
			cout << "************************ Correct **********************" << endl;
			cout << "*********************** Quiz World ***********************" << endl;
			cout << "5. Exit" << endl;
		}
		break;
	}
	if (Answer1 > 4) {
		system("CLS");
		cout << "********************** Incorrect Input ******************" << endl;
		cout << "*********************************************************" << endl;
		cout << "*********************************************************" << endl;
		cout << "*********************************************************" << endl;
		cout << "*********************************************************" << endl;
		cout << "*********************************************************" << endl;
		cout << "*********************** Quiz World **********************" << endl;

		cout << "1. Question 1" << endl;

		cout << "5. Exit" << endl;
	}
	else if (Answer2 > 4) {
		system("CLS");
		cout << "********************** Incorrect Input ******************" << endl;
		cout << "*********************************************************" << endl;
		cout << "*********************************************************" << endl;
		cout << "*********************************************************" << endl;
		cout << "*********************************************************" << endl;
		cout << "*********************************************************" << endl;
		cout << "*********************** Quiz World **********************" << endl;

		cout << "1. Question 2" << endl;

		cout << "5. Exit" << endl;
	}
	else if (Answer3 > 4) {
		system("CLS");
		cout << "********************** Incorrect Input ******************" << endl;
		cout << "*********************************************************" << endl;
		cout << "*********************************************************" << endl;
		cout << "*********************************************************" << endl;
		cout << "*********************************************************" << endl;
		cout << "*********************************************************" << endl;
		cout << "*********************** Quiz World **********************" << endl;

		cout << "1. Question 3" << endl;

		cout << "5. Exit" << endl;
	}
	else if (Answer4 > 4) {
		system("CLS");
		cout << "********************** Incorrect Input ******************" << endl;
		cout << "*********************************************************" << endl;
		cout << "*********************************************************" << endl;
		cout << "*********************************************************" << endl;
		cout << "*********************************************************" << endl;
		cout << "*********************************************************" << endl;
		cout << "*********************** Quiz World **********************" << endl;

		cout << "1. Question 4" << endl;

		cout << "5. Exit" << endl;
	}	
}