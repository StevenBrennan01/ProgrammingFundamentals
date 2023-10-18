#include <iostream>
#include "main.h"
using namespace std;

void main()
    {

        int guessNum = 0;
        int guessTries = 0;
        const int randomNum = random(0, 100);

        cout << "I'm thinking of a number between 0 and 100...\n"; //Printing a string to ask user for their guess
        cout << "Please enter your guess: ";

        do
        {
            cin >> guessNum; //User inputs their guess
            guessTries++; //Increases the number of attempts

            int guessDiff = (guessNum - randomNum);

            if (guessDiff < 0)
            {
                guessDiff = guessDiff * -1;
            }

            if (guessDiff > 50)
            {
                cout << "Not even close!" << endl;
                cout << " " << endl;
            }

            if (guessDiff <= 50 && guessDiff > 35) // try using || instead of && here also, is there a difference?
            {
                cout << "Freezing" << endl;
                cout << " " << endl;
            }

            if (guessDiff <= 35 && guessDiff > 25)
            {
                cout << "Colder" << endl;
                cout << " " << endl;
            }

            if (guessDiff <= 25 && guessDiff > 15)
            {
                cout << "Cold" << endl;
                cout << " " << endl;
            }

            if (guessDiff <= 15 && guessDiff > 10)
            {
                cout << "Warm" << endl;
                cout << " " << endl;
            }

            if (guessDiff <= 10 && guessDiff > 5)
            {
                cout << "Warmer" << endl;
                cout << " " << endl;
            }

            if (guessDiff <= 5 && guessDiff > 2)
            {
                cout << "Hot" << endl;
                cout << " " << endl;
            }

            if (guessDiff <= 2 && guessDiff != 0)
            {
                cout << "Boling" << endl;
                cout << " " << endl;
            }

            if (guessNum != randomNum)
            {
                cout << "Guess again: ";
            }

        } while (guessNum != randomNum);

        cout << "Correct answer!\n";
        cout << "Attempts: " << guessTries;
    }

    //The code in this file has been produced to show you how to seed
    //a random number generator, and use it. In main.h, we are using
    //C++'s <random> library to generate random numbers.

    //This can be done with srand() and rand(), but we have opted for
    //using a modern C++ approach. It gives you much more control
    //over the random numbers generated.

    //-----------
    //Expand the current solution to build a random number guessing game.
    //The game should produce a random number between 0-100, and ask users
    //for their guess. Based on their guess, the game should:

    //- Say "freezing" if the number is plus or minus 50 from the guess.
    //- Say "colder" if the number is plus or minus 35 from the guess.
    //- Say "cold" if the number is plus or minus 25 from the guess.
    //- Say "warm" if the number is plus or minus 15 from the guess.
    //- Say "warmer" if the number is plus or minus 10 from the guess.
    //- Say "hot" if the number is plus or minus 5 from the guess.
    //- Say "boiling" if the number is plus or minus 2 from the guess.

    //Once the user has submitted a guess, the program should show them
    //one of these strings and prompt them for another guess.

    //Alternatively, if the guess is correct, a success message should be shown,
    //telling the player they have won.

    //At the end of the program, it should also display the number of guesses
    //the player needed to guess the value in.     

    //cout << "Here is a random number between 1 and 10: " << random(1, 10) << endl;
    //cout << "And here is one between -3 and -5: " << random(-3, -5) << endl;