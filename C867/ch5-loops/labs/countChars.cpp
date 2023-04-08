#include <iostream>
#include <string>
using namespace std;

int main() {
    char targetChar;
    string inputStr;
    int counter = 0;

    cout << "Provide a character to count and a string to check, e.g. \"a Monday\"\n";
    cin >> targetChar;
    getline(cin, inputStr);

    for (int i = 0; i < inputStr.length(); ++i){
        if (inputStr.at(i) == targetChar) {
            ++counter;
        }
    }

    if (counter == 1) {
        cout << counter << " " << targetChar << "\n";
    } else {
        cout << counter << " " << targetChar << "'s\n";
    }

    return 0;
}