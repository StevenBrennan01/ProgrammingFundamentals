#include <iostream>
#include <string>

using namespace std;

int main() {

    float myInput;

    cout << "Please input the number you'd like to square" << endl;
    cin >> myInput;

    float result = myInput * myInput;


    cout << myInput << " Squared is " << result << endl;

}