#include <iostream>
#include <string>

using namespace std;

void main()
{

    int charClass[3] = {1,2,3};
    int classChoice;
    string userName;
    string userClass;

    cout << "Please choose a character class below:" << endl;
    cout << "1. Spearman" << endl;
    cout << "2. Knight" << endl;
    cout << "3. Archer" << endl;

    while (true)
    {
        cin >> classChoice;

        switch (classChoice)
        {
        case(1):
            cout << "You have chosen Spearman!" << endl;
            userClass = "Spearman";
            break;
        case(2):
            cout << "You have chosen Knight!" << endl;
            userClass = "Knight";
            break;
        case(3):
            cout << "You have chosen Archer!" << endl;
            userClass = "Archer";
            break;

        default:
            cout << "Please make a valid choice" << endl;
            cin >> classChoice;
            break;
        }

        cout << "" << endl;
        cout << "Please enter your name: ";

        cin >> userName;

        cout << "" << endl;
        cout << "Player details:" << endl;
        cout << "- Name: " << userName << endl;
        cout << "- Class: " << userClass << endl;

    }
}

    //Using structs and arrays, build a character class and name selection system
    //for a text-based game. The program should firstly prompt the user for a class
    //using a numbered menu system.~

    // For example:   
    // Please choose a character class below:
    // 1. Spearman
    // 2. Knight
    // 3. Archer
    //
    // > 3
    // - You have selected the Archer character class.

    //The character class names and amount are up to you, but should make 
    //use of an array so the solution can be easily extended. Invalid menu choices
    //should also be handled.

    //The user should then be prompted for their in-game name, and then their
    //player details should be shown. These details should be stored in a struct,
    //so player details can be a) easily extended to encompass more player detail
    //types in the future and b) logically exist in one structure.
    
    //The prompt should be shown like below:

    // Please enter your name: ben
    //
    // Player details:
    // - Name: ben
    // - Class: Knight