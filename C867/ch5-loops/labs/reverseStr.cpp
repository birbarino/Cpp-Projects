#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, reversed;

    cout << "Provide a string and I will reverse it. Type \"Done\", \"done\", or \"d\" to quit.\n";
    getline(cin, input);

    while (input != "Done" && input != "done" && input != "d") {
        reversed = "";

        for (int i = input.length()-1; i >= 0; --i) {
            reversed += input.at(i);
        }

        cout << reversed << "\n";
        getline(cin, input);
    }

    return 0;
}
