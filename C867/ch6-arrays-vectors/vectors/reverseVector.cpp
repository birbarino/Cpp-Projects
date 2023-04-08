#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> alphabet(26);
    char tmp;
    int i;

    for (i = 0; i < alphabet.size(); ++i) {
        alphabet.at(i) = 'a' + i;
        cout << alphabet.at(i);
    }

    cout << "\n";

    for (i = 0; i <= alphabet.size() / 2; ++i) {    // Half the size so as to not re-reverse the vector.
        tmp = alphabet.at(i);
        alphabet.at(i) = alphabet.at(alphabet.size() - 1 - i);
        alphabet.at(alphabet.size() - 1 - i) = tmp;
    }

    for (i = 0; i < alphabet.size(); ++i) {
        cout << alphabet.at(i);
    }

    return 0;
}