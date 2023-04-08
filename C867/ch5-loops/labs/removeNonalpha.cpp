#include <iostream>
#include <string>
using namespace std;

// FIXME: This does not work as expected, each char is not stored one after the other and compared
int main() {
    string input;
    string result = "";

    getline(cin, input);

    for (int i = 0; i < input.length(); ++i) {
        if (isalpha(input.at(i))) {
            result += input.at(i);
        }
    }

    cout << result << "\n";

    return 0;
}