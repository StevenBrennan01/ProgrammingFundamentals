#include <iostream>

using namespace std;

int main()
{
#pragma region NAME
    string myName;

    cout << "Please enter your name: ";

    cin >> myName;
#pragma endregion

#pragma region CLAN
    string myClan;

    cout << "Please enter your clan tag: ";

    cin >> myClan;

#pragma endregion

#pragma region USERNAME
    string myUsername;

    cout << "Please enter your username: ";

    cin >> myUsername;
#pragma endregion

#pragma region AGE
    string myAge;

    cout << "Please enter your age: ";

    cin >> myAge;
#pragma endregion

#pragma region DETAILS

    cout << "Player details:" << endl;
    cout << "Name:" << myName << endl;
    cout << "Username:" << "[" << myClan << "]" << myUsername << endl;
    cout << "Age:" << myAge << endl;

#pragma endregion
}