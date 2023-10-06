#include <iostream>
#include <string>

using namespace std;

int main()

{
    string userInput;

    cout << "Please enter some text: ";

    getline(cin, userInput);

    int asteriskSize = userInput.length() + 4;

    cout << string(asteriskSize, '*') << endl;
    cout << "* " << userInput << " *" << endl;
    cout << string(asteriskSize, '*') << endl;
}