#include <iostream>
#include <string>
using namespace std;

void SpacesToHyphens(string& str) {
    unsigned int i;

    for (i = 0; i < str.length(); ++i) {
        if(str.at(i) == ' ') {
            str.at(i) = '-';
        }
    }
}

void MakeGamertag(string& name) {
    SpacesToHyphens(name);
    name = "xXx_" + name;
    name += "_xXx";
}

int main() {
    string myName;

    cout << "What's your name? ";
    getline(cin, myName);

    MakeGamertag(myName);

    cout << "Your gamertag is " << myName << "\n";

    return 0;
}