#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userInput;

    cout << "Please enter some text: ";

    cin >> userInput;

    int asteriskSize = userInput.length() + 4;

    cout << string(asteriskSize, '*') << endl;
    cout << "* " << userInput << " *" << endl; //adding padding for some space between the string and the asterisks
    cout << string(asteriskSize, '*') << endl;
}


