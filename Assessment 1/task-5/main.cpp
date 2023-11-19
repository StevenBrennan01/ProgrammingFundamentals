#include <iostream>
#include <string>

using namespace std;

int main()
{
#pragma region Uppercase Fix
    string input;

    cout << "Enter a sentence : \n";
    
    getline(cin, input);

    for (int i = 0; i < input.length(); i++)
    {
        input[0] = toupper(input[0]);

        if (input[i] == '.')
        {
            if (input[i + 1] == ' ')
            {
                input[i + 2] = toupper(input[i + 2]);

            }
            else
            {
                input.insert(i + 1, " ");
                input[i + 2] = toupper(input[i + 2]);

            }
        }
    }
#pragma endregion

#pragma region Lowercase Fix
    string lower = input;

    for (int i = 0; i < lower.length(); i++)
    {
        lower[i] = tolower(lower[i]);
    }
#pragma endregion


#pragma region Uppercase Fix
    string upper = input;

    for (int i = 0; i < upper.length(); i++)
    {
        upper[i] = toupper(upper[i]);
    }
#pragma endregion

#pragma region Output
    cout << "Sentence Case: " << input << endl;
    cout << "Lowercase: " << lower << endl;
    cout << "Uppercase: " << upper << endl;
#pragma endregion
}