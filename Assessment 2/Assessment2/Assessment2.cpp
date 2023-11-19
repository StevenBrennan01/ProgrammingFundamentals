#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>

using namespace std;

int main()
{

	char userName[10];
	
	struct UserInputs
	{
		int userChoice[3];
		/*int choiceTries = 0;*/
	};

#pragma region INTRO

	cout << "Hey you, get up... your name?" << endl; 
	cin >> userName;

	//Sleep(4500); (Puts a delay on the text but doesn't display slowly as intended, will work on this)
	cout << "Well look lively, " << userName << ", seems the stronghold is under attack, might be our time to make a move." << endl;
	cout << " " << endl;

	Sleep(3000); //takes a pause to allow user to read above before proceeding.
	cout << "                               =-=-=-=-=-=-=-= Press any key to start =-=-=-=-=-=-=-=" << endl;
	_getch();
	cout << " " << endl;

#pragma endregion

#pragma region PART1

    cout << "Alright, this place is coming down, think we can kick that door down? give it a try." << endl;


	UserInputs options[5];
	options[1].userChoice = "Kick door";

	//do
	//{
	//	cin >> userChoice;
	//	choiceTries++; //creating a contingency if the user does not progress.

	//	if (userChoice == kickdoor)
	//	{
	//		cout << "Alright, that did it.";
	//	}
	//	if (userChoice != kickdoor) 
	//	{
	//		cout << "hmm try something else.";
	//		choiceTries++;
	//	}
	//	if (choiceTries > 5) 
	//	{
	//		cout << "Ugh, I'll do it myself. *kicks door*";
	//	}

	//} while (userChoice != kickdoor);



#pragma endregion
}

