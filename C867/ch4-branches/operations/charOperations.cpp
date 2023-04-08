#include <iostream>
#include <string>
using namespace std;

// More can be found at https://cplusplus.com/reference/cctype/

int main() {
    char c = 'c';
    char space = ' ';
    char newline = '\n';
    char punc = '?';
    char num = '8';

    // True is non-zero
    cout << isalpha(c) << "\n"; // Alphabetic
    cout << toupper(c) << "\n"; // Convert to uppercase
    cout << tolower(toupper(c)) << "\n";    // Convert to lowercase

    cout << isspace(newline) << "\n";
    cout << isspace(space) << "\n";
    cout << isspace(punc) << "\n";

    cout << isdigit(num)  << "\n";
    cout << isdigit(newline) <<  "\n";

    return 0;
}