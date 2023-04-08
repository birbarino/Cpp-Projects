#include <iostream>
#include <string>
using namespace std;

int main() {
    // Printing Sponge-bob meme text
    string inp;
    char ch;

    cout << "What did you say?\n";
    getline(cin, inp);

    for (int i = 0; i < inp.length(); ++i) {
        if (i % 2 == 0) {
            ch = toupper(inp.at(i));
            cout << ch;
        } else {
            ch = tolower(inp.at(i));
            cout << ch;
        }
    }

    return 0;
}