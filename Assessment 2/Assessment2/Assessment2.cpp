#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>

//look into creating custom functions here

using namespace std;

int main()
{
	char userName[10];
	int choiceTries = 0;
	string userChoice;
	string kick = "kick";

#pragma region INTRO

	cout << "Hey you, get up... your name?" << endl; 
	cin >> userName;

	cout << "Well look lively, " << userName << ", seems the stronghold is under attack, might be our time to make a move." << endl;
	cout << " " << endl;

	Sleep(3000); //takes a pause to allow user to read above before proceeding.
	cout << "                               =-=-=-=-=-=-=-= Press any key to start =-=-=-=-=-=-=-=" << endl;
	_getch();
	cout << " " << endl;

#pragma endregion

#pragma region PART1

	cout << "Alright, this place is coming down, think we can kick that door down? give it a try." << endl;
	//cout << "[1] Kick" << endl;
	//cout << "[2] Unkick" << endl;
	cin >> userChoice;

	while (userChoice != kick)
	{
		if (userChoice != kick);
		{
			choiceTries++;
			cout << "Hmm, didn't work, try something else.\n";
			cin >> userChoice;
		}

		while (choiceTries == 4) 
		{
			cout << "Ugh, enough, move I'll get us out... *kicks door*\n";
			userChoice = kick;
			break;
		}
	}
	
	while (userChoice == kick) 
	{
		cout << "Alright, that worked, this way...\n";
		Sleep(2500);
		break;
	}

#pragma endregion

#pragma region PART2

	struct playerChoice
	{
		string userChoice;
	};

	cout << "Careful here " << userName << ", we might be out but guards are crawling all over this place...\n";
		Sleep(3000);
	cout << "	" << endl; //spacing the outputs here.
	cout << "Ok, think it's clear..."; Sleep(1500);
	cout << "what should we do here?" << endl;
	cout << "	" << endl;
		Sleep(1500);
	

	int inputChoice = 0;

	playerChoice choices[3];
	choices[0]; // redundant, unnecessary line
	choices[1].userChoice = "Try and make it past the main door";
	choices[2].userChoice = "Search for loot";

	for (int i = 1; i < _countof(choices); i++)//for everytime that i does not == 4, the next cout will print (in this case all 3 will print)
	{
		cout << (i) << ". " << choices[i].userChoice << endl;
	}

	cin >> inputChoice;
	

	while (inputChoice != 1 || 2)
	{
		if (inputChoice == 1)
		{
			cout << "Ok, let's see if we can make it to that door\n";
			Sleep(2000);
			cout << "*You manage to sneak past the guards, up the stairs, and out the gate*\n";
			break;
		}
		if (inputChoice == 2)
		{
			cout << "Ok, let's have a look around here first, just be careful\n";
			Sleep(2000);
			cout << "*You found a small dagger on your way out*\n"; Sleep(2000);
			break;
		}
		else if (inputChoice != 1 || 2)
		{
			cout << "Huh? I said what should we do?\n";
			cin >> inputChoice;
		}
	}

	bool ifKnife; //detecting if player found knife or not
	ifKnife = false;

	cout << "Ok, looks like we're out, but we're not in the clear yet...\n"; Sleep(2000);
	cout << " ";
	cout << "*You both make your way further from the prison, sticking to the shadows...";





#pragma	endregion 
}

