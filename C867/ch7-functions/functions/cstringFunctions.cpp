#include <iostream>
#include <cstring>
using namespace std;

// Global variable
const unsigned int MAX_CHARS = 50;

// Passing normally
void SpacesToHyphens(char modStr[]) {
    unsigned int i;

    for (i = 0; i < strlen(modStr); ++i) {
        if(modStr[i] == ' ') {
            modStr[i] = '-';
        }
    }
}

// Passing by pointer -- somewhat similar
void HyphensToAmps(char* modStr) {
    unsigned int i;

    for (i = 0; i < strlen(modStr); ++i) {
        if (modStr[i] == '-') {
            modStr[i] = '&';
        }
    }
}

int main() {
    char myName[MAX_CHARS];

    cout << "What's your name? ";
    cin.getline(myName, MAX_CHARS);

    SpacesToHyphens(myName);
    cout << myName << "\n";

    HyphensToAmps(myName);
    cout << myName << "\n";

    return 0;
}