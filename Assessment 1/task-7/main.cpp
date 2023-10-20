#include <iostream>

using namespace std;

void main()
{

    int input;

    cout << "Please choose a character class below:" << endl;
    cout << "1. Spearman" << endl;
    cout << "2. Knight" << endl;
    cout << "3. Archer" << endl;

    cin >> input;

    while (true)
    {
        switch (input)
        {
        case(1):
            cout << "You have chosen Spearman!";
            break;
        case(2):
            cout << "You have chosen Knight!";
            break;
        case(3):
            cout << "You have chosen Archer!";
            break;

        default:
            cout << "Please make a valid choice" << endl;
            cin >> input;
            break;
        }
    }

}
    
    //switch (input)
    //{
    //case(1):
    //    cout << "You have chosen Spearman!";
    //    break;
    //case(2):
    //    cout << "You have chosen Knight!";
    //    break;
    //case(3):
    //    cout << "You have chosen Archer!";
    //    break;

    //default:
    //    cout << "Please make a valid choice" << endl;
    //    cin >> input;
    //    break;
    //} 

    //cout << "Please make a valid choice." << endl;
    //cin >> input;

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