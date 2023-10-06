#include <iostream>

using namespace std;

int main()
{
#pragma region NAME
    string myName;

    cout << "Please enter your name:" << endl;

    cin >> myName;
#pragma endregion

#pragma region SURNAME
    string mySurname;

    cout << "Please enter your surname:" << endl;

    cin >> mySurname;
#pragma endregion

#pragma region CLAN
    string myClan;

    cout << "Please enter your clan tag:" << endl;

    cin >> myClan;

#pragma endregion

#pragma region USERNAME
    string myUsername;

    cout << "Please enter your username:" << endl;

    cin >> myUsername;
#pragma endregion

#pragma region AGE
    string myAge;

    cout << "Please enter your age:" << endl;

    cin >> myAge;
#pragma endregion

#pragma region DETAILS

    cout << "Player details:" << endl;
    cout << "Name:" << myName << endl;
    cout << "Surname:" << mySurname << endl;
    cout << "Clan:" << myClan << endl;
    cout << "Username:" << myUsername << endl;
    cout << "Age:" << myAge << endl;

#pragma endregion
}