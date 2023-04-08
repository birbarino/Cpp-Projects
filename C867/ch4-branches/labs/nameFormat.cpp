#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputName, firstInitial, middleInitial, lastName;
    int spaceLocation;     // string::npos is a long long unsigned int.

    getline(cin, inputName);

    spaceLocation = inputName.find(' ');
    if (spaceLocation != string::npos) {
        firstInitial = inputName.at(0);
        firstInitial = firstInitial + ".";

        inputName = inputName.substr(spaceLocation + 1, inputName.length());
    }

    spaceLocation = inputName.find(' ');
    if (spaceLocation != string::npos) {
        middleInitial = inputName.at(0);
        middleInitial = middleInitial + ".";

        inputName = inputName.substr(spaceLocation + 1, inputName.length());
    }

    lastName = inputName;

    cout << lastName << ", " << firstInitial << middleInitial << "\n";

    return 0;
}