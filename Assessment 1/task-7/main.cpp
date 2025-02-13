#include <iostream>
#include <string>

using namespace std;

void main()
{

    struct ClassChoice
    {
        string userName;
        string UserClass;
    };

    int charClass[3] = {1,2,3};
    string userName;

    ClassChoice choices[4];
    choices[1].UserClass = "Spearman";
    choices[2].UserClass = "Knight";
    choices[3].UserClass = "Archer";

    for (int i = 1; i < _countof(choices); i++)
    {
        cout << (i) << ". " << choices[i].UserClass << endl;
    }

    int choice = 0;
    cout << "Choose a class: " << endl;
    cin >> choice;

    cout << "Please enter your name: ";
    cin >> userName;

    //Do some error detection: is choice > the number of elements in the array? is it less than 0? If so, tell them to re-enter

    cout << "Player Details: " << endl;
    cout << "- Name: " << userName << endl;
    cout << "- Class: " << choices[choice].UserClass << endl;

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